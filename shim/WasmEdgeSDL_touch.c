#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_TouchID * SDL_GetTouchDevices(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTouchDevices(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetTouchDeviceName(SDL_TouchID touchID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTouchDeviceName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TouchDeviceType SDL_GetTouchDeviceType(SDL_TouchID touchID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTouchDeviceType(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Finger ** SDL_GetTouchFingers(SDL_TouchID touchID, int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTouchFingers(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

