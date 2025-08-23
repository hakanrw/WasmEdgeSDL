#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_IOStream * SDL_IOFromFile(const char *file, const char *mode) */
WasmEdge_Result WasmEdgeSDL_SDL_IOFromFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_IOStream * SDL_IOFromMem(void *mem, size_t size) */
WasmEdge_Result WasmEdgeSDL_SDL_IOFromMem(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_IOStream * SDL_IOFromConstMem(const void *mem, size_t size) */
WasmEdge_Result WasmEdgeSDL_SDL_IOFromConstMem(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_IOStream * SDL_IOFromDynamicMem(void) */
WasmEdge_Result WasmEdgeSDL_SDL_IOFromDynamicMem(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_IOStream * SDL_OpenIO(const SDL_IOStreamInterface *iface, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_CloseIO(SDL_IOStream *context) */
WasmEdge_Result WasmEdgeSDL_SDL_CloseIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_GetIOProperties(SDL_IOStream *context) */
WasmEdge_Result WasmEdgeSDL_SDL_GetIOProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_IOStatus SDL_GetIOStatus(SDL_IOStream *context) */
WasmEdge_Result WasmEdgeSDL_SDL_GetIOStatus(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Sint64 SDL_GetIOSize(SDL_IOStream *context) */
WasmEdge_Result WasmEdgeSDL_SDL_GetIOSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Sint64 SDL_SeekIO(SDL_IOStream *context, Sint64 offset, SDL_IOWhence whence) */
WasmEdge_Result WasmEdgeSDL_SDL_SeekIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Sint64 SDL_TellIO(SDL_IOStream *context) */
WasmEdge_Result WasmEdgeSDL_SDL_TellIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_ReadIO(SDL_IOStream *context, void *ptr, size_t size) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_WriteIO(SDL_IOStream *context, const void *ptr, size_t size) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_IOprintf(SDL_IOStream *context, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
WasmEdge_Result WasmEdgeSDL_SDL_IOprintf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_IOvprintf(SDL_IOStream *context, SDL_PRINTF_FORMAT_STRING const char *fmt, va_list ap) */
WasmEdge_Result WasmEdgeSDL_SDL_IOvprintf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_FlushIO(SDL_IOStream *context) */
WasmEdge_Result WasmEdgeSDL_SDL_FlushIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_LoadFile_IO(SDL_IOStream *src, size_t *datasize, bool closeio) */
WasmEdge_Result WasmEdgeSDL_SDL_LoadFile_IO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_LoadFile(const char *file, size_t *datasize) */
WasmEdge_Result WasmEdgeSDL_SDL_LoadFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SaveFile_IO(SDL_IOStream *src, const void *data, size_t datasize, bool closeio) */
WasmEdge_Result WasmEdgeSDL_SDL_SaveFile_IO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SaveFile(const char *file, const void *data, size_t datasize) */
WasmEdge_Result WasmEdgeSDL_SDL_SaveFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadU8(SDL_IOStream *src, Uint8 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadU8(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadS8(SDL_IOStream *src, Sint8 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadS8(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadU16LE(SDL_IOStream *src, Uint16 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadU16LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadS16LE(SDL_IOStream *src, Sint16 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadS16LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadU16BE(SDL_IOStream *src, Uint16 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadU16BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadS16BE(SDL_IOStream *src, Sint16 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadS16BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadU32LE(SDL_IOStream *src, Uint32 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadU32LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadS32LE(SDL_IOStream *src, Sint32 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadS32LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadU32BE(SDL_IOStream *src, Uint32 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadU32BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadS32BE(SDL_IOStream *src, Sint32 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadS32BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadU64LE(SDL_IOStream *src, Uint64 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadU64LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadS64LE(SDL_IOStream *src, Sint64 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadS64LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadU64BE(SDL_IOStream *src, Uint64 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadU64BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReadS64BE(SDL_IOStream *src, Sint64 *value) */
WasmEdge_Result WasmEdgeSDL_SDL_ReadS64BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteU8(SDL_IOStream *dst, Uint8 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteU8(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteS8(SDL_IOStream *dst, Sint8 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteS8(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteU16LE(SDL_IOStream *dst, Uint16 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteU16LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteS16LE(SDL_IOStream *dst, Sint16 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteS16LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteU16BE(SDL_IOStream *dst, Uint16 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteU16BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteS16BE(SDL_IOStream *dst, Sint16 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteS16BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteU32LE(SDL_IOStream *dst, Uint32 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteU32LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteS32LE(SDL_IOStream *dst, Sint32 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteS32LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteU32BE(SDL_IOStream *dst, Uint32 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteU32BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteS32BE(SDL_IOStream *dst, Sint32 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteS32BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteU64LE(SDL_IOStream *dst, Uint64 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteU64LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteS64LE(SDL_IOStream *dst, Sint64 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteS64LE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteU64BE(SDL_IOStream *dst, Uint64 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteU64BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_WriteS64BE(SDL_IOStream *dst, Sint64 value) */
WasmEdge_Result WasmEdgeSDL_SDL_WriteS64BE(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

