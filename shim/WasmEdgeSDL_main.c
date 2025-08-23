#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* void SDL_SetMainReady(void) */
WasmEdge_Result WasmEdgeSDL_SDL_SetMainReady(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_RunApp(int argc, char *argv[], SDL_main_func mainFunction, void *reserved) */
WasmEdge_Result WasmEdgeSDL_SDL_RunApp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_EnterAppMainCallbacks(int argc, char *argv[], SDL_AppInit_func appinit, SDL_AppIterate_func appiter, SDL_AppEvent_func appevent, SDL_AppQuit_func appquit) */
WasmEdge_Result WasmEdgeSDL_SDL_EnterAppMainCallbacks(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RegisterApp(const char *name, Uint32 style, void *hInst) */
WasmEdge_Result WasmEdgeSDL_SDL_RegisterApp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_UnregisterApp(void) */
WasmEdge_Result WasmEdgeSDL_SDL_UnregisterApp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_GDKSuspendComplete(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GDKSuspendComplete(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

