WasmEdge_Result WasmEdgeSDL_SDL_PumpEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_PeepEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_HasEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_HasEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_FlushEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_FlushEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_PollEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_WaitEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_WaitEventTimeout(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_PushEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_SetEventFilter(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetEventFilter(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_AddEventWatch(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_RemoveEventWatch(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_FilterEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_SetEventEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_EventEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_RegisterEvents(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetWindowFromEvent(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

