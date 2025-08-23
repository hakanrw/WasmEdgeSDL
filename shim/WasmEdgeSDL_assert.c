#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_AssertionHandler SDL_GetDefaultAssertionHandler(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDefaultAssertionHandler(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_AssertionHandler SDL_GetAssertionHandler(void **puserdata) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAssertionHandler(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const SDL_AssertData * SDL_GetAssertionReport(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAssertionReport(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_ResetAssertionReport(void) */
WasmEdge_Result WasmEdgeSDL_SDL_ResetAssertionReport(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

