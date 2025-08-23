#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_Locale ** SDL_GetPreferredLocales(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetPreferredLocales(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

