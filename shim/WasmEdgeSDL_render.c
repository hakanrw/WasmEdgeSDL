#include "WasmEdgeSDL_map.h"
#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* int SDL_GetNumRenderDrivers(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetNumRenderDrivers(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetRenderDriver(int index) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderDriver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_CreateWindowAndRenderer(const char *title, int width, int height, SDL_WindowFlags window_flags, SDL_Window **window, SDL_Renderer **renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateWindowAndRenderer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Renderer * SDL_CreateRenderer(SDL_Window *window, const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateRenderer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  WasmEdge_MemoryInstanceContext *MemoryCxt = WasmEdge_CallingFrameGetMemoryInstance(CallFrameCxt, 0);
  int32_t WindowHandle = WasmEdge_ValueGetI32(In[0]);
  int32_t NamePtr = WasmEdge_ValueGetI32(In[1]);
  char *Name = NULL; //WasmEdge_MemoryInstanceGetPointer(MemoryCxt, NamePtr, 0); // FIXME: Unsafe

  SDL_Window *Window = WasmEdgeSDL_Recall_SDL_Window(WindowHandle);
  if (!Window) {
    return WasmEdge_Result_Fail;
  }

  SDL_Renderer *Renderer = SDL_CreateRenderer(Window, SDL_SOFTWARE_RENDERER);
  int32_t RendererHandle = WasmEdgeSDL_Register_SDL_Renderer(Renderer);
  if (!RendererHandle) {
    return WasmEdge_Result_Fail;
  }
  
  Out[0] = WasmEdge_ValueGenI32(RendererHandle);
  return WasmEdge_Result_Success;
}

/* SDL_Renderer * SDL_CreateRendererWithProperties(SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateRendererWithProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Renderer * SDL_CreateSoftwareRenderer(SDL_Surface *surface) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateSoftwareRenderer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Renderer * SDL_GetRenderer(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_GetRenderWindow(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetRendererName(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRendererName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_GetRendererProperties(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRendererProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderOutputSize(SDL_Renderer *renderer, int *w, int *h) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderOutputSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetCurrentRenderOutputSize(SDL_Renderer *renderer, int *w, int *h) */
WasmEdge_Result WasmEdgeSDL_SDL_GetCurrentRenderOutputSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Texture * SDL_CreateTexture(SDL_Renderer *renderer, SDL_PixelFormat format, SDL_TextureAccess access, int w, int h) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateTexture(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Texture * SDL_CreateTextureFromSurface(SDL_Renderer *renderer, SDL_Surface *surface) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateTextureFromSurface(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Texture * SDL_CreateTextureWithProperties(SDL_Renderer *renderer, SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateTextureWithProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_GetTextureProperties(SDL_Texture *texture) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextureProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Renderer * SDL_GetRendererFromTexture(SDL_Texture *texture) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRendererFromTexture(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTextureSize(SDL_Texture *texture, float *w, float *h) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextureSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetTextureColorMod(SDL_Texture *texture, Uint8 r, Uint8 g, Uint8 b) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTextureColorMod(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetTextureColorModFloat(SDL_Texture *texture, float r, float g, float b) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTextureColorModFloat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTextureColorMod(SDL_Texture *texture, Uint8 *r, Uint8 *g, Uint8 *b) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextureColorMod(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTextureColorModFloat(SDL_Texture *texture, float *r, float *g, float *b) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextureColorModFloat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetTextureAlphaMod(SDL_Texture *texture, Uint8 alpha) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTextureAlphaMod(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetTextureAlphaModFloat(SDL_Texture *texture, float alpha) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTextureAlphaModFloat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTextureAlphaMod(SDL_Texture *texture, Uint8 *alpha) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextureAlphaMod(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTextureAlphaModFloat(SDL_Texture *texture, float *alpha) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextureAlphaModFloat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetTextureBlendMode(SDL_Texture *texture, SDL_BlendMode blendMode) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTextureBlendMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTextureBlendMode(SDL_Texture *texture, SDL_BlendMode *blendMode) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextureBlendMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetTextureScaleMode(SDL_Texture *texture, SDL_ScaleMode scaleMode) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTextureScaleMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTextureScaleMode(SDL_Texture *texture, SDL_ScaleMode *scaleMode) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextureScaleMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_UpdateTexture(SDL_Texture *texture, const SDL_Rect *rect, const void *pixels, int pitch) */
WasmEdge_Result WasmEdgeSDL_SDL_UpdateTexture(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_LockTextureToSurface(SDL_Texture *texture, const SDL_Rect *rect, SDL_Surface **surface) */
WasmEdge_Result WasmEdgeSDL_SDL_LockTextureToSurface(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_UnlockTexture(SDL_Texture *texture) */
WasmEdge_Result WasmEdgeSDL_SDL_UnlockTexture(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderTarget(SDL_Renderer *renderer, SDL_Texture *texture) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderTarget(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Texture * SDL_GetRenderTarget(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderTarget(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderLogicalPresentation(SDL_Renderer *renderer, int w, int h, SDL_RendererLogicalPresentation mode) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderLogicalPresentation(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderLogicalPresentation(SDL_Renderer *renderer, int *w, int *h, SDL_RendererLogicalPresentation *mode) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderLogicalPresentation(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderLogicalPresentationRect(SDL_Renderer *renderer, SDL_FRect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderLogicalPresentationRect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderCoordinatesFromWindow(SDL_Renderer *renderer, float window_x, float window_y, float *x, float *y) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderCoordinatesFromWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderCoordinatesToWindow(SDL_Renderer *renderer, float x, float y, float *window_x, float *window_y) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderCoordinatesToWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ConvertEventToRenderCoordinates(SDL_Renderer *renderer, SDL_Event *event) */
WasmEdge_Result WasmEdgeSDL_SDL_ConvertEventToRenderCoordinates(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderViewport(SDL_Renderer *renderer, const SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderViewport(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderViewport(SDL_Renderer *renderer, SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderViewport(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderViewportSet(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderViewportSet(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderSafeArea(SDL_Renderer *renderer, SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderSafeArea(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderClipRect(SDL_Renderer *renderer, const SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderClipRect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderClipRect(SDL_Renderer *renderer, SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderClipRect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderClipEnabled(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderClipEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderScale(SDL_Renderer *renderer, float scaleX, float scaleY) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderScale(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderScale(SDL_Renderer *renderer, float *scaleX, float *scaleY) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderScale(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderDrawColor(SDL_Renderer *renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderDrawColor(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  int32_t RendererHandle = WasmEdge_ValueGetI32(In[0]);
  int32_t R = WasmEdge_ValueGetI32(In[0]);
  int32_t G = WasmEdge_ValueGetI32(In[1]);
  int32_t B = WasmEdge_ValueGetI32(In[2]);
  int32_t A = WasmEdge_ValueGetI32(In[3]);
  
  SDL_Renderer *Renderer = WasmEdgeSDL_Recall_SDL_Renderer(RendererHandle);
  if (!Renderer) {
    return WasmEdge_Result_Fail;
  }
  Out[0] = WasmEdge_ValueGenI32(SDL_SetRenderDrawColor(Renderer, R, G, B, A));
  
  return WasmEdge_Result_Success;
}

/* bool SDL_SetRenderDrawColorFloat(SDL_Renderer *renderer, float r, float g, float b, float a) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderDrawColorFloat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderDrawColor(SDL_Renderer *renderer, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderDrawColor(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderDrawColorFloat(SDL_Renderer *renderer, float *r, float *g, float *b, float *a) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderDrawColorFloat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderColorScale(SDL_Renderer *renderer, float scale) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderColorScale(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderColorScale(SDL_Renderer *renderer, float *scale) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderColorScale(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderDrawBlendMode(SDL_Renderer *renderer, SDL_BlendMode blendMode) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderDrawBlendMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderDrawBlendMode(SDL_Renderer *renderer, SDL_BlendMode *blendMode) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderDrawBlendMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderClear(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderClear(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderPoint(SDL_Renderer *renderer, float x, float y) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderPoint(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderPoints(SDL_Renderer *renderer, const SDL_FPoint *points, int count) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderPoints(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderLine(SDL_Renderer *renderer, float x1, float y1, float x2, float y2) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderLine(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderLines(SDL_Renderer *renderer, const SDL_FPoint *points, int count) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderLines(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderRect(SDL_Renderer *renderer, const SDL_FRect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderRect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderRects(SDL_Renderer *renderer, const SDL_FRect *rects, int count) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderRects(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderFillRect(SDL_Renderer *renderer, const SDL_FRect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderFillRect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderFillRects(SDL_Renderer *renderer, const SDL_FRect *rects, int count) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderFillRects(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, const SDL_FRect *dstrect) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderTexture(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderTextureTiled(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, float scale, const SDL_FRect *dstrect) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderTextureTiled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderTexture9Grid(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, float left_width, float right_width, float top_height, float bottom_height, float scale, const SDL_FRect *dstrect) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderTexture9Grid(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Surface * SDL_RenderReadPixels(SDL_Renderer *renderer, const SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderReadPixels(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderPresent(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderPresent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyTexture(SDL_Texture *texture) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyTexture(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyRenderer(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyRenderer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  int32_t RendererHandle = WasmEdge_ValueGetI32(In[0]);
  SDL_Renderer *Renderer = WasmEdgeSDL_Recall_SDL_Renderer(RendererHandle);
  if (!Renderer) {
    return WasmEdge_Result_Fail;
  }

  SDL_DestroyRenderer(Renderer);
  WasmEdgeSDL_Deregister_SDL_Renderer(RendererHandle);
  
  return WasmEdge_Result_Success;
}

/* bool SDL_FlushRenderer(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_FlushRenderer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_GetRenderMetalLayer(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderMetalLayer(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_GetRenderMetalCommandEncoder(SDL_Renderer *renderer) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderMetalCommandEncoder(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_AddVulkanRenderSemaphores(SDL_Renderer *renderer, Uint32 wait_stage_mask, Sint64 wait_semaphore, Sint64 signal_semaphore) */
WasmEdge_Result WasmEdgeSDL_SDL_AddVulkanRenderSemaphores(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetRenderVSync(SDL_Renderer *renderer, int vsync) */
WasmEdge_Result WasmEdgeSDL_SDL_SetRenderVSync(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetRenderVSync(SDL_Renderer *renderer, int *vsync) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRenderVSync(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderDebugText(SDL_Renderer *renderer, float x, float y, const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderDebugText(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenderDebugTextFormat(SDL_Renderer *renderer, float x, float y, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
WasmEdge_Result WasmEdgeSDL_SDL_RenderDebugTextFormat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

