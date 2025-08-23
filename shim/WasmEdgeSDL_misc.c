#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* bool SDL_OpenURL(const char *url) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenURL(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

