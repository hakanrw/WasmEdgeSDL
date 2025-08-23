#include "shim/WasmEdgeSDL_shim.h"
#include <wasmedge/wasmedge.h>

/* The module descriptor array. There can be multiple modules in a plug-in. */
static WasmEdge_ModuleDescriptor ModuleDesc[] = {{
    /*
     * Module name. This is the name for searching and creating the module
     * instance context by the `WasmEdge_PluginCreateModule()` API.
     */
    .Name = "WasmEdgeSDL",
    /* Module description. */
    .Description = "WasmEdge plugin for exposing SDL functions in host to WASM guest",
    /* Creation function pointer. */
    .Create = CreateSDLModule,
}};

/* The plug-in descriptor */
static WasmEdge_PluginDescriptor Desc[] = {{
    /*
     * Plug-in name. This is the name for searching the plug-in context by the
     * `WasmEdge_PluginFind()` API.
     */
    .Name = "WasmEdgeSDL",
    /* Plug-in description. */
    .Description = "",
    /* Plug-in API version. */
    .APIVersion = WasmEdge_Plugin_CurrentAPIVersion,
    /* Plug-in version. Developers can define the version of this plug-in. */
    .Version =
        {
            .Major = 0,
            .Minor = 1,
            .Patch = 0,
            .Build = 0,
        },
    /* Module count in this plug-in. */
    .ModuleCount = 1,
    /* Plug-in option description count in this plug-in (Work in progress). */
    .ProgramOptionCount = 0,
    /* Pointer to the module description array. */
    .ModuleDescriptions = ModuleDesc,
    /* Pointer to the plug-in option description array (Work in progress). */
    .ProgramOptions = NULL,
}};

/* Ensure the Plugin Descriptor is exported */
WASMEDGE_CAPI_PLUGIN_EXPORT const WasmEdge_PluginDescriptor *
WasmEdge_Plugin_GetDescriptor(void) {
  return &Desc;
}
