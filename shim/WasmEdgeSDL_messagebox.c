#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* bool SDL_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid) */
WasmEdge_Result WasmEdgeSDL_SDL_ShowMessageBox(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ShowSimpleMessageBox(SDL_MessageBoxFlags flags, const char *title, const char *message, SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_ShowSimpleMessageBox(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

