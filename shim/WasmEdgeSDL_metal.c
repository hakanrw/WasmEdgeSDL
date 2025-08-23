#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_MetalView SDL_Metal_CreateView(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_Metal_CreateView(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_Metal_DestroyView(SDL_MetalView view) */
WasmEdge_Result WasmEdgeSDL_SDL_Metal_DestroyView(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_Metal_GetLayer(SDL_MetalView view) */
WasmEdge_Result WasmEdgeSDL_SDL_Metal_GetLayer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

