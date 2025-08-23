#ifndef WASMEDGE_SDL_SHIM_H
#define WASMEDGE_SDL_SHIM_H
#include <wasmedge/wasmedge.h>

WasmEdge_ModuleInstanceContext * CreateSDLModule(const struct WasmEdge_ModuleDescriptor *Desc);

#endif /* WASMEDGE_SDL_SHIM_H */
