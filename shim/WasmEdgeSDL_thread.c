#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_Thread * SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateThread(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Thread * SDL_CreateThreadWithProperties(SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateThreadWithProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Thread * SDL_CreateThreadRuntime(SDL_ThreadFunction fn, const char *name, void *data, SDL_FunctionPointer pfnBeginThread, SDL_FunctionPointer pfnEndThread) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateThreadRuntime(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Thread * SDL_CreateThreadWithPropertiesRuntime(SDL_PropertiesID props, SDL_FunctionPointer pfnBeginThread, SDL_FunctionPointer pfnEndThread) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateThreadWithPropertiesRuntime(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetThreadName(SDL_Thread *thread) */
WasmEdge_Result WasmEdgeSDL_SDL_GetThreadName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_ThreadID SDL_GetCurrentThreadID(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetCurrentThreadID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_ThreadID SDL_GetThreadID(SDL_Thread *thread) */
WasmEdge_Result WasmEdgeSDL_SDL_GetThreadID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetCurrentThreadPriority(SDL_ThreadPriority priority) */
WasmEdge_Result WasmEdgeSDL_SDL_SetCurrentThreadPriority(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_WaitThread(SDL_Thread *thread, int *status) */
WasmEdge_Result WasmEdgeSDL_SDL_WaitThread(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_ThreadState SDL_GetThreadState(SDL_Thread *thread) */
WasmEdge_Result WasmEdgeSDL_SDL_GetThreadState(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DetachThread(SDL_Thread *thread) */
WasmEdge_Result WasmEdgeSDL_SDL_DetachThread(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_GetTLS(SDL_TLSID *id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTLS(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetTLS(SDL_TLSID *id, const void *value, SDL_TLSDestructorCallback destructor) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTLS(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_CleanupTLS(void) */
WasmEdge_Result WasmEdgeSDL_SDL_CleanupTLS(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

