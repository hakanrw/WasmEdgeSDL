#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* void SDL_PumpEvents(void) */
WasmEdge_Result WasmEdgeSDL_SDL_PumpEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_PeepEvents(SDL_Event *events, int numevents, SDL_EventAction action, Uint32 minType, Uint32 maxType) */
WasmEdge_Result WasmEdgeSDL_SDL_PeepEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_HasEvent(Uint32 type) */
WasmEdge_Result WasmEdgeSDL_SDL_HasEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_HasEvents(Uint32 minType, Uint32 maxType) */
WasmEdge_Result WasmEdgeSDL_SDL_HasEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_FlushEvent(Uint32 type) */
WasmEdge_Result WasmEdgeSDL_SDL_FlushEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_FlushEvents(Uint32 minType, Uint32 maxType) */
WasmEdge_Result WasmEdgeSDL_SDL_FlushEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_PollEvent(SDL_Event *event) */
WasmEdge_Result WasmEdgeSDL_SDL_PollEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  WasmEdge_MemoryInstanceContext *MemoryCxt = WasmEdge_CallingFrameGetMemoryInstance(CallFrameCxt, 0);
  int32_t EventOutPtr = WasmEdge_ValueGetI32(In[0]);
  SDL_Event *EventOut = (SDL_Event*)WasmEdge_MemoryInstanceGetPointer(MemoryCxt, EventOutPtr, sizeof(SDL_Event));

  // FIXME: ABI breakage on big endian systems, and possibly many other bugs
  Out[0] = WasmEdge_ValueGenI32(SDL_PollEvent(EventOut));

  return WasmEdge_Result_Success;
}

/* bool SDL_WaitEvent(SDL_Event *event) */
WasmEdge_Result WasmEdgeSDL_SDL_WaitEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WaitEventTimeout(SDL_Event *event, Sint32 timeoutMS) */
WasmEdge_Result WasmEdgeSDL_SDL_WaitEventTimeout(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_PushEvent(SDL_Event *event) */
WasmEdge_Result WasmEdgeSDL_SDL_PushEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetEventFilter(SDL_EventFilter filter, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_SetEventFilter(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetEventFilter(SDL_EventFilter *filter, void **userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_GetEventFilter(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_AddEventWatch(SDL_EventFilter filter, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_AddEventWatch(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_RemoveEventWatch(SDL_EventFilter filter, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_RemoveEventWatch(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_FilterEvents(SDL_EventFilter filter, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_FilterEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetEventEnabled(Uint32 type, bool enabled) */
WasmEdge_Result WasmEdgeSDL_SDL_SetEventEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_EventEnabled(Uint32 type) */
WasmEdge_Result WasmEdgeSDL_SDL_EventEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint32 SDL_RegisterEvents(int numevents) */
WasmEdge_Result WasmEdgeSDL_SDL_RegisterEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_GetWindowFromEvent(const SDL_Event *event) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowFromEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

