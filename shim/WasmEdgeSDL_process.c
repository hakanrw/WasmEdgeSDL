#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_Process * SDL_CreateProcess(const char * const *args, bool pipe_stdio) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateProcess(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Process * SDL_CreateProcessWithProperties(SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateProcessWithProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_GetProcessProperties(SDL_Process *process) */
WasmEdge_Result WasmEdgeSDL_SDL_GetProcessProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_ReadProcess(SDL_Process *process, size_t *datasize, int *exitcode) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadProcess(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_IOStream * SDL_GetProcessInput(SDL_Process *process) */
WasmEdge_Result WasmEdgeSDL_SDL_GetProcessInput(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_IOStream * SDL_GetProcessOutput(SDL_Process *process) */
WasmEdge_Result WasmEdgeSDL_SDL_GetProcessOutput(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_KillProcess(SDL_Process *process, bool force) */
WasmEdge_Result WasmEdgeSDL_SDL_KillProcess(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WaitProcess(SDL_Process *process, bool block, int *exitcode) */
WasmEdge_Result WasmEdgeSDL_SDL_WaitProcess(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyProcess(SDL_Process *process) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyProcess(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

