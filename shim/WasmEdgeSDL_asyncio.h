WasmEdge_Result WasmEdgeSDL_SDL_AsyncIOFromFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetAsyncIOSize(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_ReadAsyncIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_WriteAsyncIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_CloseAsyncIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_CreateAsyncIOQueue(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_DestroyAsyncIOQueue(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_GetAsyncIOResult(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_WaitAsyncIOResult(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_SignalAsyncIOQueue(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

WasmEdge_Result WasmEdgeSDL_SDL_LoadFileAsync(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out);

