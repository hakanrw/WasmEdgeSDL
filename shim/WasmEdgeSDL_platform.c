#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* const char * SDL_GetPlatform(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetPlatform(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

