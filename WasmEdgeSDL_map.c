#include "WasmEdgeSDL_map.h"
#include <stdlib.h>

#define WASMEDGE_SDL_IMPL(TYPE) \
  static TYPE* WasmEdgeSDL_##TYPE##_table[1024]; \
  static uint32_t WasmEdgeSDL_##TYPE##_count = 1; /* 0 reserved */ \
  \
  int32_t WasmEdgeSDL_Register_##TYPE(TYPE *reg) { \
    if (WasmEdgeSDL_##TYPE##_count >= 1024) { \
      return 0; /* table full */ \
    } \
    uint32_t id = WasmEdgeSDL_##TYPE##_count++; \
    WasmEdgeSDL_##TYPE##_table[id] = reg; \
    return id; \
  } \
  \
  TYPE* WasmEdgeSDL_Recall_##TYPE(int32_t id) { \
    if (id == 0 || id >= WasmEdgeSDL_##TYPE##_count) { \
      return NULL; \
    } \
    return WasmEdgeSDL_##TYPE##_table[id]; \
  } \
  void WasmEdgeSDL_Deregister_##TYPE(int32_t id) { \
    /* TODO: Implement better */ \
    if (id > 0 && id < WasmEdgeSDL_##TYPE##_count) { \
      WasmEdgeSDL_##TYPE##_table[id] = NULL; \
    } \
  }

WASMEDGE_SDL_IMPL(SDL_Window)
WASMEDGE_SDL_IMPL(SDL_Renderer)
