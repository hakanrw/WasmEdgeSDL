#include "WasmEdgeSDL_shim.h"
#include "WasmEdgeSDL_map.h"
#include <SDL3/SDL.h>

/* int SDL_GetNumVideoDrivers(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetNumVideoDrivers(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetVideoDriver(int index) */
WasmEdge_Result WasmEdgeSDL_SDL_GetVideoDriver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetCurrentVideoDriver(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetCurrentVideoDriver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_SystemTheme SDL_GetSystemTheme(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetSystemTheme(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_DisplayID * SDL_GetDisplays(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplays(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_DisplayID SDL_GetPrimaryDisplay(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetPrimaryDisplay(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_GetDisplayProperties(SDL_DisplayID displayID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplayProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetDisplayName(SDL_DisplayID displayID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplayName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetDisplayBounds(SDL_DisplayID displayID, SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplayBounds(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetDisplayUsableBounds(SDL_DisplayID displayID, SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplayUsableBounds(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_DisplayOrientation SDL_GetNaturalDisplayOrientation(SDL_DisplayID displayID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetNaturalDisplayOrientation(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_DisplayOrientation SDL_GetCurrentDisplayOrientation(SDL_DisplayID displayID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetCurrentDisplayOrientation(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetDisplayContentScale(SDL_DisplayID displayID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplayContentScale(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_DisplayMode ** SDL_GetFullscreenDisplayModes(SDL_DisplayID displayID, int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetFullscreenDisplayModes(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetClosestFullscreenDisplayMode(SDL_DisplayID displayID, int w, int h, float refresh_rate, bool include_high_density_modes, SDL_DisplayMode *closest) */
WasmEdge_Result WasmEdgeSDL_SDL_GetClosestFullscreenDisplayMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const SDL_DisplayMode * SDL_GetDesktopDisplayMode(SDL_DisplayID displayID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDesktopDisplayMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const SDL_DisplayMode * SDL_GetCurrentDisplayMode(SDL_DisplayID displayID) */
WasmEdge_Result WasmEdgeSDL_SDL_GetCurrentDisplayMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_DisplayID SDL_GetDisplayForPoint(const SDL_Point *point) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplayForPoint(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_DisplayID SDL_GetDisplayForRect(const SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplayForRect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_DisplayID SDL_GetDisplayForWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDisplayForWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetWindowPixelDensity(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowPixelDensity(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetWindowDisplayScale(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowDisplayScale(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowFullscreenMode(SDL_Window *window, const SDL_DisplayMode *mode) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowFullscreenMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const SDL_DisplayMode * SDL_GetWindowFullscreenMode(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowFullscreenMode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_GetWindowICCProfile(SDL_Window *window, size_t *size) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowICCProfile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PixelFormat SDL_GetWindowPixelFormat(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowPixelFormat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window ** SDL_GetWindows(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindows(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_CreateWindow(const char *title, int w, int h, SDL_WindowFlags flags) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  WasmEdge_MemoryInstanceContext *MemoryCxt = WasmEdge_CallingFrameGetMemoryInstance(CallFrameCxt, 0);
  int32_t TitlePtr = WasmEdge_ValueGetI32(In[0]);
  int32_t WindowW = WasmEdge_ValueGetI32(In[1]);
  int32_t WindowH = WasmEdge_ValueGetI32(In[2]);
  int64_t WindowFlags = WasmEdge_ValueGetI64(In[3]);
  char *Title = WasmEdge_MemoryInstanceGetPointer(MemoryCxt, TitlePtr, 0); // FIXME: Unsafe
  
  SDL_Window *Window = SDL_CreateWindow(Title, WindowW, WindowH, WindowFlags);
  int32_t WindowHandle = WasmEdgeSDL_Register_SDL_Window(Window);
  if (!WindowHandle) {
    return WasmEdge_Result_Fail;
  }

  Out[0] = WasmEdge_ValueGenI32(WindowHandle);
  return WasmEdge_Result_Success;
}

/* SDL_Window * SDL_CreatePopupWindow(SDL_Window *parent, int offset_x, int offset_y, int w, int h, SDL_WindowFlags flags) */
WasmEdge_Result WasmEdgeSDL_SDL_CreatePopupWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_CreateWindowWithProperties(SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateWindowWithProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_WindowID SDL_GetWindowID(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_GetWindowFromID(SDL_WindowID id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowFromID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_GetWindowParent(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowParent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_GetWindowProperties(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_WindowFlags SDL_GetWindowFlags(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowFlags(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowTitle(SDL_Window *window, const char *title) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowTitle(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetWindowTitle(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowTitle(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowIcon(SDL_Window *window, SDL_Surface *icon) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowIcon(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowPosition(SDL_Window *window, int x, int y) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowPosition(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowPosition(SDL_Window *window, int *x, int *y) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowPosition(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowSize(SDL_Window *window, int w, int h) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowSize(SDL_Window *window, int *w, int *h) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowSafeArea(SDL_Window *window, SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowSafeArea(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowAspectRatio(SDL_Window *window, float min_aspect, float max_aspect) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowAspectRatio(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowAspectRatio(SDL_Window *window, float *min_aspect, float *max_aspect) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowAspectRatio(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowBordersSize(SDL_Window *window, int *top, int *left, int *bottom, int *right) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowBordersSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowSizeInPixels(SDL_Window *window, int *w, int *h) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowSizeInPixels(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowMinimumSize(SDL_Window *window, int min_w, int min_h) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowMinimumSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowMinimumSize(SDL_Window *window, int *w, int *h) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowMinimumSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowMaximumSize(SDL_Window *window, int max_w, int max_h) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowMaximumSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowMaximumSize(SDL_Window *window, int *w, int *h) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowMaximumSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowBordered(SDL_Window *window, bool bordered) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowBordered(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowResizable(SDL_Window *window, bool resizable) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowResizable(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowAlwaysOnTop(SDL_Window *window, bool on_top) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowAlwaysOnTop(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ShowWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_ShowWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_HideWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_HideWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RaiseWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_RaiseWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_MaximizeWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_MaximizeWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_MinimizeWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_MinimizeWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RestoreWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_RestoreWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowFullscreen(SDL_Window *window, bool fullscreen) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowFullscreen(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SyncWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_SyncWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WindowHasSurface(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_WindowHasSurface(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Surface * SDL_GetWindowSurface(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowSurface(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowSurfaceVSync(SDL_Window *window, int vsync) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowSurfaceVSync(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowSurfaceVSync(SDL_Window *window, int *vsync) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowSurfaceVSync(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_UpdateWindowSurface(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_UpdateWindowSurface(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_UpdateWindowSurfaceRects(SDL_Window *window, const SDL_Rect *rects, int numrects) */
WasmEdge_Result WasmEdgeSDL_SDL_UpdateWindowSurfaceRects(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_DestroyWindowSurface(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyWindowSurface(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowKeyboardGrab(SDL_Window *window, bool grabbed) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowKeyboardGrab(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowMouseGrab(SDL_Window *window, bool grabbed) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowMouseGrab(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowKeyboardGrab(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowKeyboardGrab(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetWindowMouseGrab(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowMouseGrab(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_GetGrabbedWindow(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGrabbedWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowMouseRect(SDL_Window *window, const SDL_Rect *rect) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowMouseRect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const SDL_Rect * SDL_GetWindowMouseRect(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowMouseRect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowOpacity(SDL_Window *window, float opacity) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowOpacity(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetWindowOpacity(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GetWindowOpacity(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowParent(SDL_Window *window, SDL_Window *parent) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowParent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowModal(SDL_Window *window, bool modal) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowModal(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowFocusable(SDL_Window *window, bool focusable) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowFocusable(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ShowWindowSystemMenu(SDL_Window *window, int x, int y) */
WasmEdge_Result WasmEdgeSDL_SDL_ShowWindowSystemMenu(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowHitTest(SDL_Window *window, SDL_HitTest callback, void *callback_data) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowHitTest(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetWindowShape(SDL_Window *window, SDL_Surface *shape) */
WasmEdge_Result WasmEdgeSDL_SDL_SetWindowShape(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_FlashWindow(SDL_Window *window, SDL_FlashOperation operation) */
WasmEdge_Result WasmEdgeSDL_SDL_FlashWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  int32_t WindowHandle = WasmEdge_ValueGetI32(In[0]);
  SDL_Window *Window = WasmEdgeSDL_Recall_SDL_Window(WindowHandle);
  if (!Window) {
    return WasmEdge_Result_Fail;
  }
  WasmEdgeSDL_Deregister_SDL_Window(WindowHandle);
  return WasmEdge_Result_Success;
}

/* bool SDL_ScreenSaverEnabled(void) */
WasmEdge_Result WasmEdgeSDL_SDL_ScreenSaverEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_EnableScreenSaver(void) */
WasmEdge_Result WasmEdgeSDL_SDL_EnableScreenSaver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_DisableScreenSaver(void) */
WasmEdge_Result WasmEdgeSDL_SDL_DisableScreenSaver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_LoadLibrary(const char *path) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_LoadLibrary(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_FunctionPointer SDL_GL_GetProcAddress(const char *proc) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_GetProcAddress(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_FunctionPointer SDL_EGL_GetProcAddress(const char *proc) */
WasmEdge_Result WasmEdgeSDL_SDL_EGL_GetProcAddress(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_GL_UnloadLibrary(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_UnloadLibrary(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_ExtensionSupported(const char *extension) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_ExtensionSupported(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_GL_ResetAttributes(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_ResetAttributes(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_SetAttribute(SDL_GLAttr attr, int value) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_SetAttribute(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_GetAttribute(SDL_GLAttr attr, int *value) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_GetAttribute(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GLContext SDL_GL_CreateContext(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_CreateContext(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_MakeCurrent(SDL_Window *window, SDL_GLContext context) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_MakeCurrent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_GL_GetCurrentWindow(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_GetCurrentWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GLContext SDL_GL_GetCurrentContext(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_GetCurrentContext(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_EGLDisplay SDL_EGL_GetCurrentDisplay(void) */
WasmEdge_Result WasmEdgeSDL_SDL_EGL_GetCurrentDisplay(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_EGLConfig SDL_EGL_GetCurrentConfig(void) */
WasmEdge_Result WasmEdgeSDL_SDL_EGL_GetCurrentConfig(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_EGLSurface SDL_EGL_GetWindowSurface(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_EGL_GetWindowSurface(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_SetSwapInterval(int interval) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_SetSwapInterval(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_GetSwapInterval(int *interval) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_GetSwapInterval(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_SwapWindow(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_SwapWindow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GL_DestroyContext(SDL_GLContext context) */
WasmEdge_Result WasmEdgeSDL_SDL_GL_DestroyContext(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

