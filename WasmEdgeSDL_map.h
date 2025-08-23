#ifndef WASMEDGE_SDL_MAP_H
#define WASMEDGE_SDL_MAP_H

#include <stdint.h>
#include <stddef.h>
#include <SDL3/SDL.h>

/*
 * Macro to generate register/recall functions for a given type.
 * Example:
 *   WASMEDGE_SDL_MAP(SDL_Window)
 *
 * Expands into:
 *   uint32_t WasmEdgeSDL_Register_SDL_Window(SDL_Window *reg);
 *   SDL_Window* WasmEdgeSDL_Recall_SDL_Window(uint32_t id);
 */

#define WASMEDGE_SDL_MAP(TYPE) \
  int32_t WasmEdgeSDL_Register_##TYPE(TYPE *reg); \
  TYPE* WasmEdgeSDL_Recall_##TYPE(int32_t id); \
  void WasmEdgeSDL_Deregister_##TYPE(int32_t id);

WASMEDGE_SDL_MAP(SDL_Window)

#endif /* WASMEDGE_SDL_MAP_H */
