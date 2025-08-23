#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* Uint64 SDL_GetTicks(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTicks(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint64 SDL_GetTicksNS(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTicksNS(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint64 SDL_GetPerformanceCounter(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetPerformanceCounter(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint64 SDL_GetPerformanceFrequency(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetPerformanceFrequency(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_Delay(Uint32 ms) */
WasmEdge_Result WasmEdgeSDL_SDL_Delay(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  int32_t Delay = WasmEdge_ValueGetI32(In[0]);
  SDL_Delay(Delay);
  return WasmEdge_Result_Success;
}

/* void SDL_DelayNS(Uint64 ns) */
WasmEdge_Result WasmEdgeSDL_SDL_DelayNS(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DelayPrecise(Uint64 ns) */
WasmEdge_Result WasmEdgeSDL_SDL_DelayPrecise(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TimerID SDL_AddTimer(Uint32 interval, SDL_TimerCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_AddTimer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TimerID SDL_AddTimerNS(Uint64 interval, SDL_NSTimerCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_AddTimerNS(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RemoveTimer(SDL_TimerID id) */
WasmEdge_Result WasmEdgeSDL_SDL_RemoveTimer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

