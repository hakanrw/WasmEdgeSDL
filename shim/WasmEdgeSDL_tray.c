#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_Tray * SDL_CreateTray(SDL_Surface *icon, const char *tooltip) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateTray(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetTrayIcon(SDL_Tray *tray, SDL_Surface *icon) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTrayIcon(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetTrayTooltip(SDL_Tray *tray, const char *tooltip) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTrayTooltip(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TrayMenu * SDL_CreateTrayMenu(SDL_Tray *tray) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateTrayMenu(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TrayMenu * SDL_CreateTraySubmenu(SDL_TrayEntry *entry) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateTraySubmenu(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TrayMenu * SDL_GetTrayMenu(SDL_Tray *tray) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTrayMenu(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TrayMenu * SDL_GetTraySubmenu(SDL_TrayEntry *entry) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTraySubmenu(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const SDL_TrayEntry ** SDL_GetTrayEntries(SDL_TrayMenu *menu, int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTrayEntries(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_RemoveTrayEntry(SDL_TrayEntry *entry) */
WasmEdge_Result WasmEdgeSDL_SDL_RemoveTrayEntry(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TrayEntry * SDL_InsertTrayEntryAt(SDL_TrayMenu *menu, int pos, const char *label, SDL_TrayEntryFlags flags) */
WasmEdge_Result WasmEdgeSDL_SDL_InsertTrayEntryAt(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetTrayEntryLabel(SDL_TrayEntry *entry, const char *label) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTrayEntryLabel(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetTrayEntryLabel(SDL_TrayEntry *entry) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTrayEntryLabel(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetTrayEntryChecked(SDL_TrayEntry *entry, bool checked) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTrayEntryChecked(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTrayEntryChecked(SDL_TrayEntry *entry) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTrayEntryChecked(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetTrayEntryEnabled(SDL_TrayEntry *entry, bool enabled) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTrayEntryEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTrayEntryEnabled(SDL_TrayEntry *entry) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTrayEntryEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetTrayEntryCallback(SDL_TrayEntry *entry, SDL_TrayCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTrayEntryCallback(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_ClickTrayEntry(SDL_TrayEntry *entry) */
WasmEdge_Result WasmEdgeSDL_SDL_ClickTrayEntry(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyTray(SDL_Tray *tray) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyTray(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TrayMenu * SDL_GetTrayEntryParent(SDL_TrayEntry *entry) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTrayEntryParent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_TrayEntry * SDL_GetTrayMenuParentEntry(SDL_TrayMenu *menu) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTrayMenuParentEntry(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Tray * SDL_GetTrayMenuParentTray(SDL_TrayMenu *menu) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTrayMenuParentTray(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_UpdateTrays(void) */
WasmEdge_Result WasmEdgeSDL_SDL_UpdateTrays(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

