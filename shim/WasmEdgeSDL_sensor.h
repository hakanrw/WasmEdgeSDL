WasmEdge_Result WasmEdgeSDL_SDL_GetSensors(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorNameForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorTypeForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorNonPortableTypeForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_OpenSensor(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorFromID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorType(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorNonPortableType(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetSensorData(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_CloseSensor(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_UpdateSensors(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

