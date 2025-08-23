#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* bool SDL_GetDateTimeLocalePreferences(SDL_DateFormat *dateFormat, SDL_TimeFormat *timeFormat) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDateTimeLocalePreferences(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetCurrentTime(SDL_Time *ticks) */
WasmEdge_Result WasmEdgeSDL_SDL_GetCurrentTime(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_TimeToDateTime(SDL_Time ticks, SDL_DateTime *dt, bool localTime) */
WasmEdge_Result WasmEdgeSDL_SDL_TimeToDateTime(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_DateTimeToTime(const SDL_DateTime *dt, SDL_Time *ticks) */
WasmEdge_Result WasmEdgeSDL_SDL_DateTimeToTime(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_TimeToWindows(SDL_Time ticks, Uint32 *dwLowDateTime, Uint32 *dwHighDateTime) */
WasmEdge_Result WasmEdgeSDL_SDL_TimeToWindows(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Time SDL_TimeFromWindows(Uint32 dwLowDateTime, Uint32 dwHighDateTime) */
WasmEdge_Result WasmEdgeSDL_SDL_TimeFromWindows(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetDaysInMonth(int year, int month) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDaysInMonth(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetDayOfYear(int year, int month, int day) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDayOfYear(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetDayOfWeek(int year, int month, int day) */
WasmEdge_Result WasmEdgeSDL_SDL_GetDayOfWeek(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

