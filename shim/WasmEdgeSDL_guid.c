#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* void SDL_GUIDToString(SDL_GUID guid, char *pszGUID, int cbGUID) */
WasmEdge_Result WasmEdgeSDL_SDL_GUIDToString(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GUID SDL_StringToGUID(const char *pchGUID) */
WasmEdge_Result WasmEdgeSDL_SDL_StringToGUID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

