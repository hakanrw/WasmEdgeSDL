#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_AsyncIO * SDL_AsyncIOFromFile(const char *file, const char *mode) */
WasmEdge_Result WasmEdgeSDL_SDL_AsyncIOFromFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Sint64 SDL_GetAsyncIOSize(SDL_AsyncIO *asyncio) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAsyncIOSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadAsyncIO(SDL_AsyncIO *asyncio, void *ptr, Uint64 offset, Uint64 size, SDL_AsyncIOQueue *queue, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadAsyncIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteAsyncIO(SDL_AsyncIO *asyncio, void *ptr, Uint64 offset, Uint64 size, SDL_AsyncIOQueue *queue, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteAsyncIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_CloseAsyncIO(SDL_AsyncIO *asyncio, bool flush, SDL_AsyncIOQueue *queue, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_CloseAsyncIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_AsyncIOQueue * SDL_CreateAsyncIOQueue(void) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateAsyncIOQueue(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyAsyncIOQueue(SDL_AsyncIOQueue *queue) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyAsyncIOQueue(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetAsyncIOResult(SDL_AsyncIOQueue *queue, SDL_AsyncIOOutcome *outcome) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAsyncIOResult(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WaitAsyncIOResult(SDL_AsyncIOQueue *queue, SDL_AsyncIOOutcome *outcome, Sint32 timeoutMS) */
WasmEdge_Result WasmEdgeSDL_SDL_WaitAsyncIOResult(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SignalAsyncIOQueue(SDL_AsyncIOQueue *queue) */
WasmEdge_Result WasmEdgeSDL_SDL_SignalAsyncIOQueue(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_LoadFileAsync(const char *file, SDL_AsyncIOQueue *queue, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_LoadFileAsync(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

