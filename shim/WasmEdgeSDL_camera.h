WasmEdge_Result WasmEdgeSDL_SDL_GetNumCameraDrivers(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameraDriver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCurrentCameraDriver(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameras(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameraSupportedFormats(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameraName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameraPosition(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_OpenCamera(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameraPermissionState(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameraID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameraProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetCameraFormat(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_AcquireCameraFrame(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_ReleaseCameraFrame(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_CloseCamera(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

