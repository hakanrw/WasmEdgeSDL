#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* bool SDL_HasKeyboard(void) */
WasmEdge_Result WasmEdgeSDL_SDL_HasKeyboard(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_KeyboardID * SDL_GetKeyboards(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetKeyboards(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetKeyboardNameForID(SDL_KeyboardID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetKeyboardNameForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Window * SDL_GetKeyboardFocus(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetKeyboardFocus(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const bool * SDL_GetKeyboardState(int *numkeys) */
WasmEdge_Result WasmEdgeSDL_SDL_GetKeyboardState(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_ResetKeyboard(void) */
WasmEdge_Result WasmEdgeSDL_SDL_ResetKeyboard(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Keymod SDL_GetModState(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetModState(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetModState(SDL_Keymod modstate) */
WasmEdge_Result WasmEdgeSDL_SDL_SetModState(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Keycode SDL_GetKeyFromScancode(SDL_Scancode scancode, SDL_Keymod modstate, bool key_event) */
WasmEdge_Result WasmEdgeSDL_SDL_GetKeyFromScancode(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Scancode SDL_GetScancodeFromKey(SDL_Keycode key, SDL_Keymod *modstate) */
WasmEdge_Result WasmEdgeSDL_SDL_GetScancodeFromKey(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetScancodeName(SDL_Scancode scancode, const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_SetScancodeName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetScancodeName(SDL_Scancode scancode) */
WasmEdge_Result WasmEdgeSDL_SDL_GetScancodeName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Scancode SDL_GetScancodeFromName(const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_GetScancodeFromName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetKeyName(SDL_Keycode key) */
WasmEdge_Result WasmEdgeSDL_SDL_GetKeyName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Keycode SDL_GetKeyFromName(const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_GetKeyFromName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_StartTextInput(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_StartTextInput(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_StartTextInputWithProperties(SDL_Window *window, SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_StartTextInputWithProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_TextInputActive(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_TextInputActive(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_StopTextInput(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_StopTextInput(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ClearComposition(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_ClearComposition(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetTextInputArea(SDL_Window *window, const SDL_Rect *rect, int cursor) */
WasmEdge_Result WasmEdgeSDL_SDL_SetTextInputArea(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetTextInputArea(SDL_Window *window, SDL_Rect *rect, int *cursor) */
WasmEdge_Result WasmEdgeSDL_SDL_GetTextInputArea(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_HasScreenKeyboardSupport(void) */
WasmEdge_Result WasmEdgeSDL_SDL_HasScreenKeyboardSupport(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ScreenKeyboardShown(SDL_Window *window) */
WasmEdge_Result WasmEdgeSDL_SDL_ScreenKeyboardShown(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

