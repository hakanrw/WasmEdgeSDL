#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* bool SDL_SetError(SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
WasmEdge_Result WasmEdgeSDL_SDL_SetError(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetErrorV(SDL_PRINTF_FORMAT_STRING const char *fmt, va_list ap) */
WasmEdge_Result WasmEdgeSDL_SDL_SetErrorV(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_OutOfMemory(void) */
WasmEdge_Result WasmEdgeSDL_SDL_OutOfMemory(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetError(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetError(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ClearError(void) */
WasmEdge_Result WasmEdgeSDL_SDL_ClearError(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

