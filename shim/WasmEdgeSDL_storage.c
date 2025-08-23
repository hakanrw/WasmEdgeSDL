#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_Storage * SDL_OpenTitleStorage(const char *override, SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenTitleStorage(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Storage * SDL_OpenUserStorage(const char *org, const char *app, SDL_PropertiesID props) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenUserStorage(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Storage * SDL_OpenFileStorage(const char *path) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenFileStorage(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Storage * SDL_OpenStorage(const SDL_StorageInterface *iface, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenStorage(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_CloseStorage(SDL_Storage *storage) */
WasmEdge_Result WasmEdgeSDL_SDL_CloseStorage(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_StorageReady(SDL_Storage *storage) */
WasmEdge_Result WasmEdgeSDL_SDL_StorageReady(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetStorageFileSize(SDL_Storage *storage, const char *path, Uint64 *length) */
WasmEdge_Result WasmEdgeSDL_SDL_GetStorageFileSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadStorageFile(SDL_Storage *storage, const char *path, void *destination, Uint64 length) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadStorageFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteStorageFile(SDL_Storage *storage, const char *path, const void *source, Uint64 length) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteStorageFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_CreateStorageDirectory(SDL_Storage *storage, const char *path) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateStorageDirectory(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_EnumerateStorageDirectory(SDL_Storage *storage, const char *path, SDL_EnumerateDirectoryCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_EnumerateStorageDirectory(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RemoveStoragePath(SDL_Storage *storage, const char *path) */
WasmEdge_Result WasmEdgeSDL_SDL_RemoveStoragePath(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RenameStoragePath(SDL_Storage *storage, const char *oldpath, const char *newpath) */
WasmEdge_Result WasmEdgeSDL_SDL_RenameStoragePath(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_CopyStorageFile(SDL_Storage *storage, const char *oldpath, const char *newpath) */
WasmEdge_Result WasmEdgeSDL_SDL_CopyStorageFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetStoragePathInfo(SDL_Storage *storage, const char *path, SDL_PathInfo *info) */
WasmEdge_Result WasmEdgeSDL_SDL_GetStoragePathInfo(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint64 SDL_GetStorageSpaceRemaining(SDL_Storage *storage) */
WasmEdge_Result WasmEdgeSDL_SDL_GetStorageSpaceRemaining(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char ** SDL_GlobStorageDirectory(SDL_Storage *storage, const char *path, const char *pattern, SDL_GlobFlags flags, int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GlobStorageDirectory(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

