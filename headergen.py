#!/usr/bin/env python3
import os
import re
from pathlib import Path

TEMPLATE_DIR = Path("template/include/SDL3")
OUTPUT_DIR   = Path("guest/include/SDL3")

# Regex to match function declarations with SDL_DECLSPEC
FUNC_REGEX = re.compile(
    r'^\s*extern\s+SDL_DECLSPEC\s+.*?\s+(SDLCALL\s+)?(?P<fname>\w+)\s*\(.*'
)

def process_header(infile: Path, outfile: Path):
    lines_out = []
    with infile.open("r", encoding="utf-8") as f:
        for line in f:
            match = FUNC_REGEX.match(line)
            if match:
                fname = match.group("fname")
                attr_line = f'__attribute__((import_module("WasmEdgeSDL"), import_name("{fname}")))\n'
                lines_out.append(attr_line)
            lines_out.append(line)

    outfile.parent.mkdir(parents=True, exist_ok=True)
    with outfile.open("w", encoding="utf-8") as f:
        f.writelines(lines_out)

def main():
    headers = sorted(TEMPLATE_DIR.glob("*.h"))
    if not headers:
        print(f"No headers found in {TEMPLATE_DIR}")
        return

    for header in headers:
        out_header = OUTPUT_DIR / header.name
        print(f"Processing {header} -> {out_header}")
        process_header(header, out_header)

if __name__ == "__main__":
    main()
