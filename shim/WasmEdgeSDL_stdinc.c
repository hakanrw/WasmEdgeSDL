#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* SDL_MALLOC void * SDL_malloc(size_t size) */
WasmEdge_Result WasmEdgeSDL_SDL_malloc(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_MALLOC SDL_ALLOC_SIZE2(1, 2) */
WasmEdge_Result WasmEdgeSDL_SDL_ALLOC_SIZE2(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_free(void *mem) */
WasmEdge_Result WasmEdgeSDL_SDL_free(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_MALLOC void * SDL_aligned_alloc(size_t alignment, size_t size) */
WasmEdge_Result WasmEdgeSDL_SDL_aligned_alloc(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_aligned_free(void *mem) */
WasmEdge_Result WasmEdgeSDL_SDL_aligned_free(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetNumAllocations(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetNumAllocations(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Environment * SDL_GetEnvironment(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetEnvironment(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Environment * SDL_CreateEnvironment(bool populated) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateEnvironment(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetEnvironmentVariable(SDL_Environment *env, const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_GetEnvironmentVariable(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char ** SDL_GetEnvironmentVariables(SDL_Environment *env) */
WasmEdge_Result WasmEdgeSDL_SDL_GetEnvironmentVariables(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetEnvironmentVariable(SDL_Environment *env, const char *name, const char *value, bool overwrite) */
WasmEdge_Result WasmEdgeSDL_SDL_SetEnvironmentVariable(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_UnsetEnvironmentVariable(SDL_Environment *env, const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_UnsetEnvironmentVariable(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyEnvironment(SDL_Environment *env) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyEnvironment(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_getenv(const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_getenv(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_getenv_unsafe(const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_getenv_unsafe(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_setenv_unsafe(const char *name, const char *value, int overwrite) */
WasmEdge_Result WasmEdgeSDL_SDL_setenv_unsafe(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_unsetenv_unsafe(const char *name) */
WasmEdge_Result WasmEdgeSDL_SDL_unsetenv_unsafe(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_qsort(void *base, size_t nmemb, size_t size, SDL_CompareCallback compare) */
WasmEdge_Result WasmEdgeSDL_SDL_qsort(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_bsearch(const void *key, const void *base, size_t nmemb, size_t size, SDL_CompareCallback compare) */
WasmEdge_Result WasmEdgeSDL_SDL_bsearch(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_qsort_r(void *base, size_t nmemb, size_t size, SDL_CompareCallback_r compare, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_qsort_r(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_bsearch_r(const void *key, const void *base, size_t nmemb, size_t size, SDL_CompareCallback_r compare, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_bsearch_r(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_abs(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_abs(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isalpha(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isalpha(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isalnum(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isalnum(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isblank(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isblank(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_iscntrl(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_iscntrl(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isdigit(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isdigit(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isxdigit(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isxdigit(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_ispunct(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_ispunct(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isspace(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isspace(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isupper(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isupper(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_islower(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_islower(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isprint(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isprint(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isgraph(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_isgraph(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_toupper(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_toupper(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_tolower(int x) */
WasmEdge_Result WasmEdgeSDL_SDL_tolower(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint16 SDL_crc16(Uint16 crc, const void *data, size_t len) */
WasmEdge_Result WasmEdgeSDL_SDL_crc16(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint32 SDL_crc32(Uint32 crc, const void *data, size_t len) */
WasmEdge_Result WasmEdgeSDL_SDL_crc32(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint32 SDL_murmur3_32(const void *data, size_t len, Uint32 seed) */
WasmEdge_Result WasmEdgeSDL_SDL_murmur3_32(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_memcpy(SDL_OUT_BYTECAP(len) */
WasmEdge_Result WasmEdgeSDL_SDL_memcpy(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_memmove(SDL_OUT_BYTECAP(len) */
WasmEdge_Result WasmEdgeSDL_SDL_memmove(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_memset(SDL_OUT_BYTECAP(len) */
WasmEdge_Result WasmEdgeSDL_SDL_memset(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void * SDL_memset4(void *dst, Uint32 val, size_t dwords) */
WasmEdge_Result WasmEdgeSDL_SDL_memset4(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_memcmp(const void *s1, const void *s2, size_t len) */
WasmEdge_Result WasmEdgeSDL_SDL_memcmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_wcslen(const wchar_t *wstr) */
WasmEdge_Result WasmEdgeSDL_SDL_wcslen(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_wcsnlen(const wchar_t *wstr, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_wcsnlen(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_wcslcpy(SDL_OUT_Z_CAP(maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_wcslcpy(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_wcslcat(SDL_INOUT_Z_CAP(maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_wcslcat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* wchar_t * SDL_wcsdup(const wchar_t *wstr) */
WasmEdge_Result WasmEdgeSDL_SDL_wcsdup(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* wchar_t * SDL_wcsstr(const wchar_t *haystack, const wchar_t *needle) */
WasmEdge_Result WasmEdgeSDL_SDL_wcsstr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* wchar_t * SDL_wcsnstr(const wchar_t *haystack, const wchar_t *needle, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_wcsnstr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_wcscmp(const wchar_t *str1, const wchar_t *str2) */
WasmEdge_Result WasmEdgeSDL_SDL_wcscmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_wcsncmp(const wchar_t *str1, const wchar_t *str2, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_wcsncmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_wcscasecmp(const wchar_t *str1, const wchar_t *str2) */
WasmEdge_Result WasmEdgeSDL_SDL_wcscasecmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_wcsncasecmp(const wchar_t *str1, const wchar_t *str2, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_wcsncasecmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* long SDL_wcstol(const wchar_t *str, wchar_t **endp, int base) */
WasmEdge_Result WasmEdgeSDL_SDL_wcstol(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_strlen(const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_strlen(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_strnlen(const char *str, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_strnlen(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_strlcpy(SDL_OUT_Z_CAP(maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_strlcpy(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_utf8strlcpy(SDL_OUT_Z_CAP(dst_bytes) */
WasmEdge_Result WasmEdgeSDL_SDL_utf8strlcpy(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_strlcat(SDL_INOUT_Z_CAP(maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_strlcat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_MALLOC char * SDL_strdup(const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_strdup(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_MALLOC char * SDL_strndup(const char *str, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_strndup(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strrev(char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_strrev(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strupr(char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_strupr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strlwr(char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_strlwr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strchr(const char *str, int c) */
WasmEdge_Result WasmEdgeSDL_SDL_strchr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strrchr(const char *str, int c) */
WasmEdge_Result WasmEdgeSDL_SDL_strrchr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strstr(const char *haystack, const char *needle) */
WasmEdge_Result WasmEdgeSDL_SDL_strstr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strnstr(const char *haystack, const char *needle, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_strnstr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strcasestr(const char *haystack, const char *needle) */
WasmEdge_Result WasmEdgeSDL_SDL_strcasestr(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strtok_r(char *str, const char *delim, char **saveptr) */
WasmEdge_Result WasmEdgeSDL_SDL_strtok_r(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_utf8strlen(const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_utf8strlen(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* size_t SDL_utf8strnlen(const char *str, size_t bytes) */
WasmEdge_Result WasmEdgeSDL_SDL_utf8strnlen(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_itoa(int value, char *str, int radix) */
WasmEdge_Result WasmEdgeSDL_SDL_itoa(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_uitoa(unsigned int value, char *str, int radix) */
WasmEdge_Result WasmEdgeSDL_SDL_uitoa(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_ltoa(long value, char *str, int radix) */
WasmEdge_Result WasmEdgeSDL_SDL_ltoa(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_ultoa(unsigned long value, char *str, int radix) */
WasmEdge_Result WasmEdgeSDL_SDL_ultoa(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_lltoa(long long value, char *str, int radix) */
WasmEdge_Result WasmEdgeSDL_SDL_lltoa(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_ulltoa(unsigned long long value, char *str, int radix) */
WasmEdge_Result WasmEdgeSDL_SDL_ulltoa(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_atoi(const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_atoi(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_atof(const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_atof(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* long SDL_strtol(const char *str, char **endp, int base) */
WasmEdge_Result WasmEdgeSDL_SDL_strtol(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* unsigned long SDL_strtoul(const char *str, char **endp, int base) */
WasmEdge_Result WasmEdgeSDL_SDL_strtoul(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* long long SDL_strtoll(const char *str, char **endp, int base) */
WasmEdge_Result WasmEdgeSDL_SDL_strtoll(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* unsigned long long SDL_strtoull(const char *str, char **endp, int base) */
WasmEdge_Result WasmEdgeSDL_SDL_strtoull(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_strtod(const char *str, char **endp) */
WasmEdge_Result WasmEdgeSDL_SDL_strtod(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_strcmp(const char *str1, const char *str2) */
WasmEdge_Result WasmEdgeSDL_SDL_strcmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_strncmp(const char *str1, const char *str2, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_strncmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_strcasecmp(const char *str1, const char *str2) */
WasmEdge_Result WasmEdgeSDL_SDL_strcasecmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_strncasecmp(const char *str1, const char *str2, size_t maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_strncasecmp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_strpbrk(const char *str, const char *breakset) */
WasmEdge_Result WasmEdgeSDL_SDL_strpbrk(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint32 SDL_StepUTF8(const char **pstr, size_t *pslen) */
WasmEdge_Result WasmEdgeSDL_SDL_StepUTF8(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint32 SDL_StepBackUTF8(const char *start, const char **pstr) */
WasmEdge_Result WasmEdgeSDL_SDL_StepBackUTF8(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_UCS4ToUTF8(Uint32 codepoint, char *dst) */
WasmEdge_Result WasmEdgeSDL_SDL_UCS4ToUTF8(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_sscanf(const char *text, SDL_SCANF_FORMAT_STRING const char *fmt, ...) */
WasmEdge_Result WasmEdgeSDL_SDL_sscanf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_vsscanf(const char *text, SDL_SCANF_FORMAT_STRING const char *fmt, va_list ap) */
WasmEdge_Result WasmEdgeSDL_SDL_vsscanf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_snprintf(SDL_OUT_Z_CAP(maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_snprintf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_swprintf(SDL_OUT_Z_CAP(maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_swprintf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_vsnprintf(SDL_OUT_Z_CAP(maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_vsnprintf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_vswprintf(SDL_OUT_Z_CAP(maxlen) */
WasmEdge_Result WasmEdgeSDL_SDL_vswprintf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_asprintf(char **strp, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
WasmEdge_Result WasmEdgeSDL_SDL_asprintf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_vasprintf(char **strp, SDL_PRINTF_FORMAT_STRING const char *fmt, va_list ap) */
WasmEdge_Result WasmEdgeSDL_SDL_vasprintf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_srand(Uint64 seed) */
WasmEdge_Result WasmEdgeSDL_SDL_srand(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Sint32 SDL_rand(Sint32 n) */
WasmEdge_Result WasmEdgeSDL_SDL_rand(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_randf(void) */
WasmEdge_Result WasmEdgeSDL_SDL_randf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint32 SDL_rand_bits(void) */
WasmEdge_Result WasmEdgeSDL_SDL_rand_bits(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Sint32 SDL_rand_r(Uint64 *state, Sint32 n) */
WasmEdge_Result WasmEdgeSDL_SDL_rand_r(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_randf_r(Uint64 *state) */
WasmEdge_Result WasmEdgeSDL_SDL_randf_r(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint32 SDL_rand_bits_r(Uint64 *state) */
WasmEdge_Result WasmEdgeSDL_SDL_rand_bits_r(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_acos(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_acos(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_acosf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_acosf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_asin(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_asin(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_asinf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_asinf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_atan(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_atan(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_atanf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_atanf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_atan2(double y, double x) */
WasmEdge_Result WasmEdgeSDL_SDL_atan2(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_atan2f(float y, float x) */
WasmEdge_Result WasmEdgeSDL_SDL_atan2f(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_ceil(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_ceil(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_ceilf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_ceilf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_copysign(double x, double y) */
WasmEdge_Result WasmEdgeSDL_SDL_copysign(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_copysignf(float x, float y) */
WasmEdge_Result WasmEdgeSDL_SDL_copysignf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_cos(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_cos(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_cosf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_cosf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_exp(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_exp(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_expf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_expf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_fabs(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_fabs(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_fabsf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_fabsf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_floor(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_floor(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_floorf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_floorf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_trunc(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_trunc(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_truncf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_truncf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_fmod(double x, double y) */
WasmEdge_Result WasmEdgeSDL_SDL_fmod(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_fmodf(float x, float y) */
WasmEdge_Result WasmEdgeSDL_SDL_fmodf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isinf(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_isinf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isinff(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_isinff(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isnan(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_isnan(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_isnanf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_isnanf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_log(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_log(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_logf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_logf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_log10(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_log10(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_log10f(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_log10f(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_modf(double x, double *y) */
WasmEdge_Result WasmEdgeSDL_SDL_modf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_modff(float x, float *y) */
WasmEdge_Result WasmEdgeSDL_SDL_modff(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_pow(double x, double y) */
WasmEdge_Result WasmEdgeSDL_SDL_pow(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_powf(float x, float y) */
WasmEdge_Result WasmEdgeSDL_SDL_powf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_round(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_round(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_roundf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_roundf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* long SDL_lround(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_lround(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* long SDL_lroundf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_lroundf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_scalbn(double x, int n) */
WasmEdge_Result WasmEdgeSDL_SDL_scalbn(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_scalbnf(float x, int n) */
WasmEdge_Result WasmEdgeSDL_SDL_scalbnf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_sin(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_sin(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_sinf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_sinf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_sqrt(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_sqrt(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_sqrtf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_sqrtf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* double SDL_tan(double x) */
WasmEdge_Result WasmEdgeSDL_SDL_tan(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_tanf(float x) */
WasmEdge_Result WasmEdgeSDL_SDL_tanf(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_iconv_close(SDL_iconv_t cd) */
WasmEdge_Result WasmEdgeSDL_SDL_iconv_close(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

