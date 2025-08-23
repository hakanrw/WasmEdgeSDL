#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* bool SDL_Init(SDL_InitFlags flags) */
WasmEdge_Result WasmEdgeSDL_SDL_Init(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  int32_t flags = WasmEdge_ValueGetI32(In[0]);
  Out[0] = WasmEdge_ValueGenI32(SDL_Init(flags));
  return WasmEdge_Result_Success;
}

/* bool SDL_InitSubSystem(SDL_InitFlags flags) */
WasmEdge_Result WasmEdgeSDL_SDL_InitSubSystem(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  return WasmEdgeSDL_SDL_Init(Data, CallFrameCxt, In, Out);
}

/* void SDL_QuitSubSystem(SDL_InitFlags flags) */
WasmEdge_Result WasmEdgeSDL_SDL_QuitSubSystem(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_InitFlags SDL_WasInit(SDL_InitFlags flags) */
WasmEdge_Result WasmEdgeSDL_SDL_WasInit(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_Quit(void) */
WasmEdge_Result WasmEdgeSDL_SDL_Quit(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  SDL_Quit();
  return WasmEdge_Result_Success;
}

/* bool SDL_IsMainThread(void) */
WasmEdge_Result WasmEdgeSDL_SDL_IsMainThread(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RunOnMainThread(SDL_MainThreadCallback callback, void *userdata, bool wait_complete) */
WasmEdge_Result WasmEdgeSDL_SDL_RunOnMainThread(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAppMetadata(const char *appname, const char *appversion, const char *appidentifier) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAppMetadata(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAppMetadataProperty(const char *name, const char *value) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAppMetadataProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetAppMetadataProperty(const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAppMetadataProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

