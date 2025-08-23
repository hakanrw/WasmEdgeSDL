#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* int SDL_GetNumAudioDrivers(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetNumAudioDrivers(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetAudioDriver(int index) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioDriver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetCurrentAudioDriver(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GetCurrentAudioDriver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_AudioDeviceID * SDL_GetAudioPlaybackDevices(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioPlaybackDevices(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_AudioDeviceID * SDL_GetAudioRecordingDevices(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioRecordingDevices(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetAudioDeviceName(SDL_AudioDeviceID devid) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioDeviceName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetAudioDeviceFormat(SDL_AudioDeviceID devid, SDL_AudioSpec *spec, int *sample_frames) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioDeviceFormat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int * SDL_GetAudioDeviceChannelMap(SDL_AudioDeviceID devid, int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioDeviceChannelMap(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_AudioDeviceID SDL_OpenAudioDevice(SDL_AudioDeviceID devid, const SDL_AudioSpec *spec) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenAudioDevice(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_IsAudioDevicePhysical(SDL_AudioDeviceID devid) */
WasmEdge_Result WasmEdgeSDL_SDL_IsAudioDevicePhysical(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_IsAudioDevicePlayback(SDL_AudioDeviceID devid) */
WasmEdge_Result WasmEdgeSDL_SDL_IsAudioDevicePlayback(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_PauseAudioDevice(SDL_AudioDeviceID devid) */
WasmEdge_Result WasmEdgeSDL_SDL_PauseAudioDevice(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ResumeAudioDevice(SDL_AudioDeviceID devid) */
WasmEdge_Result WasmEdgeSDL_SDL_ResumeAudioDevice(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_AudioDevicePaused(SDL_AudioDeviceID devid) */
WasmEdge_Result WasmEdgeSDL_SDL_AudioDevicePaused(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetAudioDeviceGain(SDL_AudioDeviceID devid) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioDeviceGain(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioDeviceGain(SDL_AudioDeviceID devid, float gain) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioDeviceGain(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_CloseAudioDevice(SDL_AudioDeviceID devid) */
WasmEdge_Result WasmEdgeSDL_SDL_CloseAudioDevice(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_BindAudioStreams(SDL_AudioDeviceID devid, SDL_AudioStream * const *streams, int num_streams) */
WasmEdge_Result WasmEdgeSDL_SDL_BindAudioStreams(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_BindAudioStream(SDL_AudioDeviceID devid, SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_BindAudioStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_UnbindAudioStreams(SDL_AudioStream * const *streams, int num_streams) */
WasmEdge_Result WasmEdgeSDL_SDL_UnbindAudioStreams(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_UnbindAudioStream(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_UnbindAudioStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_AudioDeviceID SDL_GetAudioStreamDevice(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamDevice(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_AudioStream * SDL_CreateAudioStream(const SDL_AudioSpec *src_spec, const SDL_AudioSpec *dst_spec) */
WasmEdge_Result WasmEdgeSDL_SDL_CreateAudioStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_GetAudioStreamProperties(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetAudioStreamFormat(SDL_AudioStream *stream, SDL_AudioSpec *src_spec, SDL_AudioSpec *dst_spec) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamFormat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioStreamFormat(SDL_AudioStream *stream, const SDL_AudioSpec *src_spec, const SDL_AudioSpec *dst_spec) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioStreamFormat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetAudioStreamFrequencyRatio(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamFrequencyRatio(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioStreamFrequencyRatio(SDL_AudioStream *stream, float ratio) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioStreamFrequencyRatio(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetAudioStreamGain(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamGain(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioStreamGain(SDL_AudioStream *stream, float gain) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioStreamGain(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int * SDL_GetAudioStreamInputChannelMap(SDL_AudioStream *stream, int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamInputChannelMap(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int * SDL_GetAudioStreamOutputChannelMap(SDL_AudioStream *stream, int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamOutputChannelMap(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioStreamInputChannelMap(SDL_AudioStream *stream, const int *chmap, int count) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioStreamInputChannelMap(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioStreamOutputChannelMap(SDL_AudioStream *stream, const int *chmap, int count) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioStreamOutputChannelMap(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_PutAudioStreamData(SDL_AudioStream *stream, const void *buf, int len) */
WasmEdge_Result WasmEdgeSDL_SDL_PutAudioStreamData(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetAudioStreamData(SDL_AudioStream *stream, void *buf, int len) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamData(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetAudioStreamAvailable(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamAvailable(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetAudioStreamQueued(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioStreamQueued(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_FlushAudioStream(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_FlushAudioStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ClearAudioStream(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_ClearAudioStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_PauseAudioStreamDevice(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_PauseAudioStreamDevice(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ResumeAudioStreamDevice(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_ResumeAudioStreamDevice(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_AudioStreamDevicePaused(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_AudioStreamDevicePaused(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_LockAudioStream(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_LockAudioStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_UnlockAudioStream(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_UnlockAudioStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioStreamGetCallback(SDL_AudioStream *stream, SDL_AudioStreamCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioStreamGetCallback(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioStreamPutCallback(SDL_AudioStream *stream, SDL_AudioStreamCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioStreamPutCallback(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_DestroyAudioStream(SDL_AudioStream *stream) */
WasmEdge_Result WasmEdgeSDL_SDL_DestroyAudioStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_AudioStream * SDL_OpenAudioDeviceStream(SDL_AudioDeviceID devid, const SDL_AudioSpec *spec, SDL_AudioStreamCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenAudioDeviceStream(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetAudioPostmixCallback(SDL_AudioDeviceID devid, SDL_AudioPostmixCallback callback, void *userdata) */
WasmEdge_Result WasmEdgeSDL_SDL_SetAudioPostmixCallback(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_LoadWAV_IO(SDL_IOStream *src, bool closeio, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len) */
WasmEdge_Result WasmEdgeSDL_SDL_LoadWAV_IO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_LoadWAV(const char *path, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len) */
WasmEdge_Result WasmEdgeSDL_SDL_LoadWAV(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_MixAudio(Uint8 *dst, const Uint8 *src, SDL_AudioFormat format, Uint32 len, float volume) */
WasmEdge_Result WasmEdgeSDL_SDL_MixAudio(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ConvertAudioSamples(const SDL_AudioSpec *src_spec, const Uint8 *src_data, int src_len, const SDL_AudioSpec *dst_spec, Uint8 **dst_data, int *dst_len) */
WasmEdge_Result WasmEdgeSDL_SDL_ConvertAudioSamples(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetAudioFormatName(SDL_AudioFormat format) */
WasmEdge_Result WasmEdgeSDL_SDL_GetAudioFormatName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetSilenceValueForFormat(SDL_AudioFormat format) */
WasmEdge_Result WasmEdgeSDL_SDL_GetSilenceValueForFormat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

