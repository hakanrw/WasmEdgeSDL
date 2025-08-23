#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* bool SDL_Vulkan_LoadLibrary(const char *path) */
WasmEdge_Result WasmEdgeSDL_SDL_Vulkan_LoadLibrary(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_FunctionPointer SDL_Vulkan_GetVkGetInstanceProcAddr(void) */
WasmEdge_Result WasmEdgeSDL_SDL_Vulkan_GetVkGetInstanceProcAddr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_Vulkan_UnloadLibrary(void) */
WasmEdge_Result WasmEdgeSDL_SDL_Vulkan_UnloadLibrary(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char const * const * SDL_Vulkan_GetInstanceExtensions(Uint32 *count) */
WasmEdge_Result WasmEdgeSDL_SDL_Vulkan_GetInstanceExtensions(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

