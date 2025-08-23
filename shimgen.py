#!/usr/bin/env python3
import os
import sys
import re
from pathlib import Path

TEMPLATE_DIR = Path("template/include/SDL3")
SHIM_DIR     = Path("shim")

FUNC_REGEX = re.compile(
    r'^\s*extern\s+SDL_DECLSPEC\s+(?P<rtype>[\w\s\*]+?)\s+(SDLCALL\s+)?(?P<fname>\w+)\s*\((?P<args>[^)]*)\)'
)

HEADER_TOP = """#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

"""

MODULE_FILE = SHIM_DIR / "WasmEdgeSDL_shim.c"

MODULE_HEADER = SHIM_DIR / "WasmEdgeSDL_shim.h"

MODULE_ALL = SHIM_DIR / "WasmEdgeSDL_all.h"

MODULE_TEMPLATE = """#include "WasmEdgeSDL_shim.h"
#include "WasmEdgeSDL_all.h"
#include <SDL3/SDL.h>

/* The creation function of creating the module instance. */
WasmEdge_ModuleInstanceContext *
CreateSDLModule(const struct WasmEdge_ModuleDescriptor *Desc) { 

  /* Exported module name of this module instance. */
  WasmEdge_String ModuleName =
      WasmEdge_StringCreateByCString("WasmEdgeSDL"); 
  WasmEdge_ModuleInstanceContext *Mod =
      WasmEdge_ModuleInstanceCreate(ModuleName);
  WasmEdge_StringDelete(ModuleName);

  WasmEdge_String FuncName;
  WasmEdge_FunctionTypeContext *FType;
  WasmEdge_FunctionInstanceContext *FuncCxt;

  /* EXPORT_START */
  
  /* EXPORT_END */

  return Mod;
}
"""

MODULE_HEADER_TEMPLATE = """#ifndef WASMEDGE_SDL_SHIM_H
#define WASMEDGE_SDL_SHIM_H
#include <wasmedge/wasmedge.h>

WasmEdge_ModuleInstanceContext * CreateSDLModule(const struct WasmEdge_ModuleDescriptor *Desc);

#endif /* WASMEDGE_SDL_SHIM_H */
"""

MODULE_ALL_TEMPLATE = """#ifndef WASMEDGE_SDL_ALL_H
#define WASMEDGE_SDL_ALL_H


#endif /* WASMEDGE_SDL_ALL_H */
"""

verbose = "--silent" not in sys.argv

def ensure_module_file():
    if not MODULE_FILE.exists():
        MODULE_FILE.parent.mkdir(parents=True, exist_ok=True)
        MODULE_FILE.write_text(MODULE_TEMPLATE, encoding="utf-8")

def ensure_header_file():
    if not MODULE_HEADER.exists():
        MODULE_HEADER.parent.mkdir(parents=True, exist_ok=True)
        MODULE_HEADER.write_text(MODULE_HEADER_TEMPLATE, encoding="utf-8")

def ensure_all_file():
    if not MODULE_ALL.exists():
        MODULE_ALL.parent.mkdir(parents=True, exist_ok=True)
        MODULE_ALL.write_text(MODULE_ALL_TEMPLATE, encoding="utf-8")

def make_stub(funcname: str, hint: str) -> str:
    return f"""/* {hint} */
WasmEdge_Result WasmEdgeSDL_{funcname}(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {{
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}}

"""

def make_decl(funcname: str) -> str:
    return f"WasmEdge_Result WasmEdgeSDL_{funcname}(void *Data,\n" \
           f"                            const WasmEdge_CallingFrameContext *CallFrameCxt,\n" \
           f"                            const WasmEdge_Value *In, WasmEdge_Value *Out);\n\n"

def parse_args(args: str):
    args = args.strip()
    if not args or args == "void":
        return []
    return [a.strip() for a in args.split(",") if a.strip()]

def parse_return(rtype: str):
    rtype = rtype.strip()
    return rtype != "void"

def make_export(fname: str, argc: int, has_ret: bool, hint: str) -> str:
    param_init = []
    for i in range(argc):
        param_init.append(f"  ParamTypes_{fname}[{i}] = WasmEdge_ValTypeGenI32();")
    ret_init = []
    if has_ret:
        ret_init.append(f"  ReturnTypes_{fname}[0] = WasmEdge_ValTypeGenI32();")

    return f"""  /* EXPORT WasmEdgeSDL_{fname} */
  /* {hint} */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_{fname}[{max(1, argc)}], ReturnTypes_{fname}[1];
{"\n".join(param_init)}
{"\n".join(ret_init)}
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_{fname}, {argc}, ReturnTypes_{fname}, {1 if has_ret else 0}); 
  FuncName = WasmEdge_StringCreateByCString("{fname}"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_{fname}, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_{fname} */
"""

def insert_export(funcname: str, argc: int, has_ret: bool, hint: str):
    text = MODULE_FILE.read_text(encoding="utf-8")
    if f"/* EXPORT WasmEdgeSDL_{funcname} */" in text:
        return
    export_block = make_export(funcname, argc, has_ret, hint)
    new_text = text.replace("  /* EXPORT_END */", export_block + "\n  /* EXPORT_END */")
    MODULE_FILE.write_text(new_text, encoding="utf-8")
    if verbose:
        print(f"{MODULE_FILE}: New export {funcname}")
    
def insert_include(file: str):
    text = MODULE_ALL.read_text(encoding="utf-8")
    if f"#include \"{file}\"" in text:
        return
    include_block = f"#include \"{file}\""
    new_text = text.replace("#endif", include_block + "\n\n#endif")
    MODULE_ALL.write_text(new_text, encoding="utf-8")    
    if verbose:
        print(f"{MODULE_ALL}: New include {file}")
    
def process_header(infile: Path, outfile: Path, outheader: Path):
    # Create .c if missing
    if not outfile.exists():
        outfile.parent.mkdir(parents=True, exist_ok=True)
        outfile.write_text(HEADER_TOP, encoding="utf-8")

    # Create header if missing
    if not outheader.exists():
        outheader.parent.mkdir(parents=True, exist_ok=True)
        outheader.write_text("", encoding="utf-8")

    lines = infile.read_text(encoding="utf-8").splitlines()
    append_stubs = []
    append_decls = []
    for line in lines:
        match = FUNC_REGEX.match(line)
        if match:
            fname = match.group("fname")
            rtype = match.group("rtype")
            argraw = match.group("args")
            args = parse_args(argraw)
            has_ret = parse_return(rtype)
            argc = len(args)
            hint = f"{rtype} {fname}({argraw})"

            # Add stub if needed
            if f"WasmEdgeSDL_{fname}(" not in outfile.read_text(encoding="utf-8"):
                append_stubs.append(make_stub(fname, hint))
                if verbose:
                    print(f"{outfile}: New stub {fname}")

            # Add decl if not already present
            if f"WasmEdgeSDL_{fname}(" not in outheader.read_text(encoding="utf-8"):
                append_decls.append(make_decl(fname))
                if verbose:
                    print(f"{outheader}: New decl {fname}")
            # Ensure central module export
            insert_export(fname, argc, has_ret, hint)
            insert_include(outheader.name)

    if append_stubs:
        with outfile.open("a", encoding="utf-8") as f:
            f.writelines(append_stubs)
    if append_decls:
        with outheader.open("a", encoding="utf-8") as f:
            f.writelines(append_decls)

def main():
    ensure_module_file()
    ensure_header_file()
    ensure_all_file()
    headers = sorted(TEMPLATE_DIR.glob("*.h"))
    for header in headers:
        shim_c = SHIM_DIR / ("WasmEdge" + header.stem + ".c")
        shim_h = SHIM_DIR / ("WasmEdge" + header.stem + ".h")
        print(f"Processing {header} -> {shim_c}, {shim_h}")
        process_header(header, shim_c, shim_h)

if __name__ == "__main__":
    main()
