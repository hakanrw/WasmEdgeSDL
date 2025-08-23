#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_PowerState SDL_GetPowerInfo(int *seconds, int *percent) */
WasmEdge_Result WasmEdgeSDL_SDL_GetPowerInfo(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

