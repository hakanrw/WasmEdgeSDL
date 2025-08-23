#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_PropertiesID SDL_GetGlobalProperties(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGlobalProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_CreateProperties(void) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_CopyProperties(SDL_PropertiesID src, SDL_PropertiesID dst) */
WasmEdge_Result WasmEdgeSDL_SDL_CopyProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_LockProperties(SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_LockProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_UnlockProperties(SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_UnlockProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetPointerPropertyWithCleanup(SDL_PropertiesID props, const char *name, void *value, SDL_CleanupPropertyCallback cleanup, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_SetPointerPropertyWithCleanup(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetPointerProperty(SDL_PropertiesID props, const char *name, void *value) */
WasmEdge_Result WasmEdgeSDL_SDL_SetPointerProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetStringProperty(SDL_PropertiesID props, const char *name, const char *value) */
WasmEdge_Result WasmEdgeSDL_SDL_SetStringProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetNumberProperty(SDL_PropertiesID props, const char *name, Sint64 value) */
WasmEdge_Result WasmEdgeSDL_SDL_SetNumberProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetFloatProperty(SDL_PropertiesID props, const char *name, float value) */
WasmEdge_Result WasmEdgeSDL_SDL_SetFloatProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetBooleanProperty(SDL_PropertiesID props, const char *name, bool value) */
WasmEdge_Result WasmEdgeSDL_SDL_SetBooleanProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_HasProperty(SDL_PropertiesID props, const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_HasProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertyType SDL_GetPropertyType(SDL_PropertiesID props, const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_GetPropertyType(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_GetPointerProperty(SDL_PropertiesID props, const char *name, void *default_value) */
WasmEdge_Result WasmEdgeSDL_SDL_GetPointerProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetStringProperty(SDL_PropertiesID props, const char *name, const char *default_value) */
WasmEdge_Result WasmEdgeSDL_SDL_GetStringProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Sint64 SDL_GetNumberProperty(SDL_PropertiesID props, const char *name, Sint64 default_value) */
WasmEdge_Result WasmEdgeSDL_SDL_GetNumberProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetFloatProperty(SDL_PropertiesID props, const char *name, float default_value) */
WasmEdge_Result WasmEdgeSDL_SDL_GetFloatProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetBooleanProperty(SDL_PropertiesID props, const char *name, bool default_value) */
WasmEdge_Result WasmEdgeSDL_SDL_GetBooleanProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ClearProperty(SDL_PropertiesID props, const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_ClearProperty(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_EnumerateProperties(SDL_PropertiesID props, SDL_EnumeratePropertiesCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_EnumerateProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyProperties(SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

