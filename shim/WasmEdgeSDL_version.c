#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* int SDL_GetVersion(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetVersion(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetRevision(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRevision(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

