#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_SharedObject * SDL_LoadObject(const char *sofile) */
WasmEdge_Result WasmEdgeSDL_SDL_LoadObject(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_FunctionPointer SDL_LoadFunction(SDL_SharedObject *handle, const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_LoadFunction(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_UnloadObject(SDL_SharedObject *handle) */
WasmEdge_Result WasmEdgeSDL_SDL_UnloadObject(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

