#include "WasmEdgeSDL_shim.h"
#include "WasmEdgeSDL_all.h"
#include <SDL3/SDL.h>

/* The creation function of creating the module instance. */
WasmEdge_ModuleInstanceContext *
CreateSDLModule(const struct WasmEdge_ModuleDescriptor *Desc) { 

  /* Exported module name of this module instance. */
  WasmEdge_String ModuleName =
      WasmEdge_StringCreateByCString("WasmEdgeSDL"); 
  WasmEdge_ModuleInstanceContext *Mod =
      WasmEdge_ModuleInstanceCreate(ModuleName);
  WasmEdge_StringDelete(ModuleName);

  WasmEdge_String FuncName;
  WasmEdge_FunctionTypeContext *FType;
  WasmEdge_FunctionInstanceContext *FuncCxt;

  /* EXPORT_START */
  
  /* EXPORT WasmEdgeSDL_SDL_GetDefaultAssertionHandler */
  /* SDL_AssertionHandler SDL_GetDefaultAssertionHandler(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDefaultAssertionHandler[1], ReturnTypes_SDL_GetDefaultAssertionHandler[1];

  ReturnTypes_SDL_GetDefaultAssertionHandler[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDefaultAssertionHandler, 0, ReturnTypes_SDL_GetDefaultAssertionHandler, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDefaultAssertionHandler"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDefaultAssertionHandler, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDefaultAssertionHandler */

  /* EXPORT WasmEdgeSDL_SDL_GetAssertionHandler */
  /* SDL_AssertionHandler SDL_GetAssertionHandler(void **puserdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAssertionHandler[1], ReturnTypes_SDL_GetAssertionHandler[1];
  ParamTypes_SDL_GetAssertionHandler[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAssertionHandler[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAssertionHandler, 1, ReturnTypes_SDL_GetAssertionHandler, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAssertionHandler"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAssertionHandler, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAssertionHandler */

  /* EXPORT WasmEdgeSDL_SDL_GetAssertionReport */
  /* const SDL_AssertData * SDL_GetAssertionReport(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAssertionReport[1], ReturnTypes_SDL_GetAssertionReport[1];

  ReturnTypes_SDL_GetAssertionReport[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAssertionReport, 0, ReturnTypes_SDL_GetAssertionReport, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAssertionReport"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAssertionReport, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAssertionReport */

  /* EXPORT WasmEdgeSDL_SDL_ResetAssertionReport */
  /* void SDL_ResetAssertionReport(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ResetAssertionReport[1], ReturnTypes_SDL_ResetAssertionReport[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ResetAssertionReport, 0, ReturnTypes_SDL_ResetAssertionReport, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ResetAssertionReport"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ResetAssertionReport, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ResetAssertionReport */

  /* EXPORT WasmEdgeSDL_SDL_AsyncIOFromFile */
  /* SDL_AsyncIO * SDL_AsyncIOFromFile(const char *file, const char *mode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AsyncIOFromFile[2], ReturnTypes_SDL_AsyncIOFromFile[1];
  ParamTypes_SDL_AsyncIOFromFile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AsyncIOFromFile[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AsyncIOFromFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AsyncIOFromFile, 2, ReturnTypes_SDL_AsyncIOFromFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AsyncIOFromFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AsyncIOFromFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AsyncIOFromFile */

  /* EXPORT WasmEdgeSDL_SDL_GetAsyncIOSize */
  /* Sint64 SDL_GetAsyncIOSize(SDL_AsyncIO *asyncio) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAsyncIOSize[1], ReturnTypes_SDL_GetAsyncIOSize[1];
  ParamTypes_SDL_GetAsyncIOSize[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAsyncIOSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAsyncIOSize, 1, ReturnTypes_SDL_GetAsyncIOSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAsyncIOSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAsyncIOSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAsyncIOSize */

  /* EXPORT WasmEdgeSDL_SDL_ReadAsyncIO */
  /* bool SDL_ReadAsyncIO(SDL_AsyncIO *asyncio, void *ptr, Uint64 offset, Uint64 size, SDL_AsyncIOQueue *queue, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadAsyncIO[6], ReturnTypes_SDL_ReadAsyncIO[1];
  ParamTypes_SDL_ReadAsyncIO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadAsyncIO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadAsyncIO[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadAsyncIO[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadAsyncIO[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadAsyncIO[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadAsyncIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadAsyncIO, 6, ReturnTypes_SDL_ReadAsyncIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadAsyncIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadAsyncIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadAsyncIO */

  /* EXPORT WasmEdgeSDL_SDL_WriteAsyncIO */
  /* bool SDL_WriteAsyncIO(SDL_AsyncIO *asyncio, void *ptr, Uint64 offset, Uint64 size, SDL_AsyncIOQueue *queue, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteAsyncIO[6], ReturnTypes_SDL_WriteAsyncIO[1];
  ParamTypes_SDL_WriteAsyncIO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteAsyncIO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteAsyncIO[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteAsyncIO[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteAsyncIO[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteAsyncIO[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteAsyncIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteAsyncIO, 6, ReturnTypes_SDL_WriteAsyncIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteAsyncIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteAsyncIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteAsyncIO */

  /* EXPORT WasmEdgeSDL_SDL_CloseAsyncIO */
  /* bool SDL_CloseAsyncIO(SDL_AsyncIO *asyncio, bool flush, SDL_AsyncIOQueue *queue, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseAsyncIO[4], ReturnTypes_SDL_CloseAsyncIO[1];
  ParamTypes_SDL_CloseAsyncIO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CloseAsyncIO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CloseAsyncIO[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CloseAsyncIO[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CloseAsyncIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseAsyncIO, 4, ReturnTypes_SDL_CloseAsyncIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseAsyncIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseAsyncIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseAsyncIO */

  /* EXPORT WasmEdgeSDL_SDL_CreateAsyncIOQueue */
  /* SDL_AsyncIOQueue * SDL_CreateAsyncIOQueue(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateAsyncIOQueue[1], ReturnTypes_SDL_CreateAsyncIOQueue[1];

  ReturnTypes_SDL_CreateAsyncIOQueue[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateAsyncIOQueue, 0, ReturnTypes_SDL_CreateAsyncIOQueue, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateAsyncIOQueue"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateAsyncIOQueue, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateAsyncIOQueue */

  /* EXPORT WasmEdgeSDL_SDL_DestroyAsyncIOQueue */
  /* void SDL_DestroyAsyncIOQueue(SDL_AsyncIOQueue *queue) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyAsyncIOQueue[1], ReturnTypes_SDL_DestroyAsyncIOQueue[1];
  ParamTypes_SDL_DestroyAsyncIOQueue[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyAsyncIOQueue, 1, ReturnTypes_SDL_DestroyAsyncIOQueue, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyAsyncIOQueue"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyAsyncIOQueue, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyAsyncIOQueue */

  /* EXPORT WasmEdgeSDL_SDL_GetAsyncIOResult */
  /* bool SDL_GetAsyncIOResult(SDL_AsyncIOQueue *queue, SDL_AsyncIOOutcome *outcome) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAsyncIOResult[2], ReturnTypes_SDL_GetAsyncIOResult[1];
  ParamTypes_SDL_GetAsyncIOResult[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAsyncIOResult[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAsyncIOResult[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAsyncIOResult, 2, ReturnTypes_SDL_GetAsyncIOResult, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAsyncIOResult"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAsyncIOResult, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAsyncIOResult */

  /* EXPORT WasmEdgeSDL_SDL_WaitAsyncIOResult */
  /* bool SDL_WaitAsyncIOResult(SDL_AsyncIOQueue *queue, SDL_AsyncIOOutcome *outcome, Sint32 timeoutMS) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WaitAsyncIOResult[3], ReturnTypes_SDL_WaitAsyncIOResult[1];
  ParamTypes_SDL_WaitAsyncIOResult[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WaitAsyncIOResult[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WaitAsyncIOResult[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WaitAsyncIOResult[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WaitAsyncIOResult, 3, ReturnTypes_SDL_WaitAsyncIOResult, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WaitAsyncIOResult"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WaitAsyncIOResult, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WaitAsyncIOResult */

  /* EXPORT WasmEdgeSDL_SDL_SignalAsyncIOQueue */
  /* void SDL_SignalAsyncIOQueue(SDL_AsyncIOQueue *queue) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SignalAsyncIOQueue[1], ReturnTypes_SDL_SignalAsyncIOQueue[1];
  ParamTypes_SDL_SignalAsyncIOQueue[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SignalAsyncIOQueue, 1, ReturnTypes_SDL_SignalAsyncIOQueue, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SignalAsyncIOQueue"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SignalAsyncIOQueue, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SignalAsyncIOQueue */

  /* EXPORT WasmEdgeSDL_SDL_LoadFileAsync */
  /* bool SDL_LoadFileAsync(const char *file, SDL_AsyncIOQueue *queue, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadFileAsync[3], ReturnTypes_SDL_LoadFileAsync[1];
  ParamTypes_SDL_LoadFileAsync[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadFileAsync[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadFileAsync[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadFileAsync[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadFileAsync, 3, ReturnTypes_SDL_LoadFileAsync, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadFileAsync"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadFileAsync, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadFileAsync */

  /* EXPORT WasmEdgeSDL_SDL_TryLockSpinlock */
  /* bool SDL_TryLockSpinlock(SDL_SpinLock *lock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TryLockSpinlock[1], ReturnTypes_SDL_TryLockSpinlock[1];
  ParamTypes_SDL_TryLockSpinlock[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TryLockSpinlock[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TryLockSpinlock, 1, ReturnTypes_SDL_TryLockSpinlock, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TryLockSpinlock"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TryLockSpinlock, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TryLockSpinlock */

  /* EXPORT WasmEdgeSDL_SDL_LockSpinlock */
  /* void SDL_LockSpinlock(SDL_SpinLock *lock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockSpinlock[1], ReturnTypes_SDL_LockSpinlock[1];
  ParamTypes_SDL_LockSpinlock[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockSpinlock, 1, ReturnTypes_SDL_LockSpinlock, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockSpinlock"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockSpinlock, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockSpinlock */

  /* EXPORT WasmEdgeSDL_SDL_UnlockSpinlock */
  /* void SDL_UnlockSpinlock(SDL_SpinLock *lock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnlockSpinlock[1], ReturnTypes_SDL_UnlockSpinlock[1];
  ParamTypes_SDL_UnlockSpinlock[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnlockSpinlock, 1, ReturnTypes_SDL_UnlockSpinlock, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnlockSpinlock"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnlockSpinlock, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnlockSpinlock */

  /* EXPORT WasmEdgeSDL_SDL_MemoryBarrierReleaseFunction */
  /* void SDL_MemoryBarrierReleaseFunction(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MemoryBarrierReleaseFunction[1], ReturnTypes_SDL_MemoryBarrierReleaseFunction[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MemoryBarrierReleaseFunction, 0, ReturnTypes_SDL_MemoryBarrierReleaseFunction, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MemoryBarrierReleaseFunction"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MemoryBarrierReleaseFunction, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MemoryBarrierReleaseFunction */

  /* EXPORT WasmEdgeSDL_SDL_MemoryBarrierAcquireFunction */
  /* void SDL_MemoryBarrierAcquireFunction(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MemoryBarrierAcquireFunction[1], ReturnTypes_SDL_MemoryBarrierAcquireFunction[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MemoryBarrierAcquireFunction, 0, ReturnTypes_SDL_MemoryBarrierAcquireFunction, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MemoryBarrierAcquireFunction"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MemoryBarrierAcquireFunction, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MemoryBarrierAcquireFunction */

  /* EXPORT WasmEdgeSDL_SDL_CompareAndSwapAtomicInt */
  /* bool SDL_CompareAndSwapAtomicInt(SDL_AtomicInt *a, int oldval, int newval) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CompareAndSwapAtomicInt[3], ReturnTypes_SDL_CompareAndSwapAtomicInt[1];
  ParamTypes_SDL_CompareAndSwapAtomicInt[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CompareAndSwapAtomicInt[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CompareAndSwapAtomicInt[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CompareAndSwapAtomicInt[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CompareAndSwapAtomicInt, 3, ReturnTypes_SDL_CompareAndSwapAtomicInt, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CompareAndSwapAtomicInt"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CompareAndSwapAtomicInt, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CompareAndSwapAtomicInt */

  /* EXPORT WasmEdgeSDL_SDL_SetAtomicInt */
  /* int SDL_SetAtomicInt(SDL_AtomicInt *a, int v) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAtomicInt[2], ReturnTypes_SDL_SetAtomicInt[1];
  ParamTypes_SDL_SetAtomicInt[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAtomicInt[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAtomicInt[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAtomicInt, 2, ReturnTypes_SDL_SetAtomicInt, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAtomicInt"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAtomicInt, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAtomicInt */

  /* EXPORT WasmEdgeSDL_SDL_GetAtomicInt */
  /* int SDL_GetAtomicInt(SDL_AtomicInt *a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAtomicInt[1], ReturnTypes_SDL_GetAtomicInt[1];
  ParamTypes_SDL_GetAtomicInt[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAtomicInt[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAtomicInt, 1, ReturnTypes_SDL_GetAtomicInt, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAtomicInt"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAtomicInt, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAtomicInt */

  /* EXPORT WasmEdgeSDL_SDL_AddAtomicInt */
  /* int SDL_AddAtomicInt(SDL_AtomicInt *a, int v) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddAtomicInt[2], ReturnTypes_SDL_AddAtomicInt[1];
  ParamTypes_SDL_AddAtomicInt[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddAtomicInt[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddAtomicInt[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddAtomicInt, 2, ReturnTypes_SDL_AddAtomicInt, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddAtomicInt"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddAtomicInt, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddAtomicInt */

  /* EXPORT WasmEdgeSDL_SDL_CompareAndSwapAtomicU32 */
  /* bool SDL_CompareAndSwapAtomicU32(SDL_AtomicU32 *a, Uint32 oldval, Uint32 newval) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CompareAndSwapAtomicU32[3], ReturnTypes_SDL_CompareAndSwapAtomicU32[1];
  ParamTypes_SDL_CompareAndSwapAtomicU32[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CompareAndSwapAtomicU32[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CompareAndSwapAtomicU32[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CompareAndSwapAtomicU32[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CompareAndSwapAtomicU32, 3, ReturnTypes_SDL_CompareAndSwapAtomicU32, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CompareAndSwapAtomicU32"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CompareAndSwapAtomicU32, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CompareAndSwapAtomicU32 */

  /* EXPORT WasmEdgeSDL_SDL_SetAtomicU32 */
  /* Uint32 SDL_SetAtomicU32(SDL_AtomicU32 *a, Uint32 v) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAtomicU32[2], ReturnTypes_SDL_SetAtomicU32[1];
  ParamTypes_SDL_SetAtomicU32[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAtomicU32[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAtomicU32[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAtomicU32, 2, ReturnTypes_SDL_SetAtomicU32, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAtomicU32"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAtomicU32, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAtomicU32 */

  /* EXPORT WasmEdgeSDL_SDL_GetAtomicU32 */
  /* Uint32 SDL_GetAtomicU32(SDL_AtomicU32 *a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAtomicU32[1], ReturnTypes_SDL_GetAtomicU32[1];
  ParamTypes_SDL_GetAtomicU32[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAtomicU32[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAtomicU32, 1, ReturnTypes_SDL_GetAtomicU32, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAtomicU32"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAtomicU32, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAtomicU32 */

  /* EXPORT WasmEdgeSDL_SDL_CompareAndSwapAtomicPointer */
  /* bool SDL_CompareAndSwapAtomicPointer(void **a, void *oldval, void *newval) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CompareAndSwapAtomicPointer[3], ReturnTypes_SDL_CompareAndSwapAtomicPointer[1];
  ParamTypes_SDL_CompareAndSwapAtomicPointer[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CompareAndSwapAtomicPointer[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CompareAndSwapAtomicPointer[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CompareAndSwapAtomicPointer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CompareAndSwapAtomicPointer, 3, ReturnTypes_SDL_CompareAndSwapAtomicPointer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CompareAndSwapAtomicPointer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CompareAndSwapAtomicPointer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CompareAndSwapAtomicPointer */

  /* EXPORT WasmEdgeSDL_SDL_SetAtomicPointer */
  /* void * SDL_SetAtomicPointer(void **a, void *v) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAtomicPointer[2], ReturnTypes_SDL_SetAtomicPointer[1];
  ParamTypes_SDL_SetAtomicPointer[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAtomicPointer[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAtomicPointer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAtomicPointer, 2, ReturnTypes_SDL_SetAtomicPointer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAtomicPointer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAtomicPointer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAtomicPointer */

  /* EXPORT WasmEdgeSDL_SDL_GetAtomicPointer */
  /* void * SDL_GetAtomicPointer(void **a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAtomicPointer[1], ReturnTypes_SDL_GetAtomicPointer[1];
  ParamTypes_SDL_GetAtomicPointer[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAtomicPointer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAtomicPointer, 1, ReturnTypes_SDL_GetAtomicPointer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAtomicPointer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAtomicPointer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAtomicPointer */

  /* EXPORT WasmEdgeSDL_SDL_GetNumAudioDrivers */
  /* int SDL_GetNumAudioDrivers(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumAudioDrivers[1], ReturnTypes_SDL_GetNumAudioDrivers[1];

  ReturnTypes_SDL_GetNumAudioDrivers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumAudioDrivers, 0, ReturnTypes_SDL_GetNumAudioDrivers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumAudioDrivers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumAudioDrivers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumAudioDrivers */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioDriver */
  /* const char * SDL_GetAudioDriver(int index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioDriver[1], ReturnTypes_SDL_GetAudioDriver[1];
  ParamTypes_SDL_GetAudioDriver[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioDriver, 1, ReturnTypes_SDL_GetAudioDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioDriver */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentAudioDriver */
  /* const char * SDL_GetCurrentAudioDriver(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentAudioDriver[1], ReturnTypes_SDL_GetCurrentAudioDriver[1];

  ReturnTypes_SDL_GetCurrentAudioDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentAudioDriver, 0, ReturnTypes_SDL_GetCurrentAudioDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentAudioDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentAudioDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentAudioDriver */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioPlaybackDevices */
  /* SDL_AudioDeviceID * SDL_GetAudioPlaybackDevices(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioPlaybackDevices[1], ReturnTypes_SDL_GetAudioPlaybackDevices[1];
  ParamTypes_SDL_GetAudioPlaybackDevices[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioPlaybackDevices[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioPlaybackDevices, 1, ReturnTypes_SDL_GetAudioPlaybackDevices, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioPlaybackDevices"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioPlaybackDevices, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioPlaybackDevices */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioRecordingDevices */
  /* SDL_AudioDeviceID * SDL_GetAudioRecordingDevices(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioRecordingDevices[1], ReturnTypes_SDL_GetAudioRecordingDevices[1];
  ParamTypes_SDL_GetAudioRecordingDevices[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioRecordingDevices[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioRecordingDevices, 1, ReturnTypes_SDL_GetAudioRecordingDevices, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioRecordingDevices"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioRecordingDevices, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioRecordingDevices */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioDeviceName */
  /* const char * SDL_GetAudioDeviceName(SDL_AudioDeviceID devid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioDeviceName[1], ReturnTypes_SDL_GetAudioDeviceName[1];
  ParamTypes_SDL_GetAudioDeviceName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioDeviceName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioDeviceName, 1, ReturnTypes_SDL_GetAudioDeviceName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioDeviceName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioDeviceName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioDeviceName */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioDeviceFormat */
  /* bool SDL_GetAudioDeviceFormat(SDL_AudioDeviceID devid, SDL_AudioSpec *spec, int *sample_frames) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioDeviceFormat[3], ReturnTypes_SDL_GetAudioDeviceFormat[1];
  ParamTypes_SDL_GetAudioDeviceFormat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioDeviceFormat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioDeviceFormat[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioDeviceFormat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioDeviceFormat, 3, ReturnTypes_SDL_GetAudioDeviceFormat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioDeviceFormat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioDeviceFormat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioDeviceFormat */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioDeviceChannelMap */
  /* int * SDL_GetAudioDeviceChannelMap(SDL_AudioDeviceID devid, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioDeviceChannelMap[2], ReturnTypes_SDL_GetAudioDeviceChannelMap[1];
  ParamTypes_SDL_GetAudioDeviceChannelMap[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioDeviceChannelMap[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioDeviceChannelMap[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioDeviceChannelMap, 2, ReturnTypes_SDL_GetAudioDeviceChannelMap, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioDeviceChannelMap"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioDeviceChannelMap, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioDeviceChannelMap */

  /* EXPORT WasmEdgeSDL_SDL_OpenAudioDevice */
  /* SDL_AudioDeviceID SDL_OpenAudioDevice(SDL_AudioDeviceID devid, const SDL_AudioSpec *spec) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenAudioDevice[2], ReturnTypes_SDL_OpenAudioDevice[1];
  ParamTypes_SDL_OpenAudioDevice[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenAudioDevice[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenAudioDevice[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenAudioDevice, 2, ReturnTypes_SDL_OpenAudioDevice, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenAudioDevice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenAudioDevice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenAudioDevice */

  /* EXPORT WasmEdgeSDL_SDL_IsAudioDevicePhysical */
  /* bool SDL_IsAudioDevicePhysical(SDL_AudioDeviceID devid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsAudioDevicePhysical[1], ReturnTypes_SDL_IsAudioDevicePhysical[1];
  ParamTypes_SDL_IsAudioDevicePhysical[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IsAudioDevicePhysical[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsAudioDevicePhysical, 1, ReturnTypes_SDL_IsAudioDevicePhysical, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsAudioDevicePhysical"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsAudioDevicePhysical, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsAudioDevicePhysical */

  /* EXPORT WasmEdgeSDL_SDL_IsAudioDevicePlayback */
  /* bool SDL_IsAudioDevicePlayback(SDL_AudioDeviceID devid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsAudioDevicePlayback[1], ReturnTypes_SDL_IsAudioDevicePlayback[1];
  ParamTypes_SDL_IsAudioDevicePlayback[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IsAudioDevicePlayback[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsAudioDevicePlayback, 1, ReturnTypes_SDL_IsAudioDevicePlayback, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsAudioDevicePlayback"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsAudioDevicePlayback, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsAudioDevicePlayback */

  /* EXPORT WasmEdgeSDL_SDL_PauseAudioDevice */
  /* bool SDL_PauseAudioDevice(SDL_AudioDeviceID devid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PauseAudioDevice[1], ReturnTypes_SDL_PauseAudioDevice[1];
  ParamTypes_SDL_PauseAudioDevice[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PauseAudioDevice[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PauseAudioDevice, 1, ReturnTypes_SDL_PauseAudioDevice, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PauseAudioDevice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PauseAudioDevice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PauseAudioDevice */

  /* EXPORT WasmEdgeSDL_SDL_ResumeAudioDevice */
  /* bool SDL_ResumeAudioDevice(SDL_AudioDeviceID devid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ResumeAudioDevice[1], ReturnTypes_SDL_ResumeAudioDevice[1];
  ParamTypes_SDL_ResumeAudioDevice[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ResumeAudioDevice[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ResumeAudioDevice, 1, ReturnTypes_SDL_ResumeAudioDevice, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ResumeAudioDevice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ResumeAudioDevice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ResumeAudioDevice */

  /* EXPORT WasmEdgeSDL_SDL_AudioDevicePaused */
  /* bool SDL_AudioDevicePaused(SDL_AudioDeviceID devid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AudioDevicePaused[1], ReturnTypes_SDL_AudioDevicePaused[1];
  ParamTypes_SDL_AudioDevicePaused[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AudioDevicePaused[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AudioDevicePaused, 1, ReturnTypes_SDL_AudioDevicePaused, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AudioDevicePaused"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AudioDevicePaused, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AudioDevicePaused */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioDeviceGain */
  /* float SDL_GetAudioDeviceGain(SDL_AudioDeviceID devid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioDeviceGain[1], ReturnTypes_SDL_GetAudioDeviceGain[1];
  ParamTypes_SDL_GetAudioDeviceGain[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioDeviceGain[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioDeviceGain, 1, ReturnTypes_SDL_GetAudioDeviceGain, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioDeviceGain"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioDeviceGain, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioDeviceGain */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioDeviceGain */
  /* bool SDL_SetAudioDeviceGain(SDL_AudioDeviceID devid, float gain) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioDeviceGain[2], ReturnTypes_SDL_SetAudioDeviceGain[1];
  ParamTypes_SDL_SetAudioDeviceGain[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioDeviceGain[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioDeviceGain[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioDeviceGain, 2, ReturnTypes_SDL_SetAudioDeviceGain, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioDeviceGain"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioDeviceGain, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioDeviceGain */

  /* EXPORT WasmEdgeSDL_SDL_CloseAudioDevice */
  /* void SDL_CloseAudioDevice(SDL_AudioDeviceID devid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseAudioDevice[1], ReturnTypes_SDL_CloseAudioDevice[1];
  ParamTypes_SDL_CloseAudioDevice[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseAudioDevice, 1, ReturnTypes_SDL_CloseAudioDevice, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseAudioDevice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseAudioDevice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseAudioDevice */

  /* EXPORT WasmEdgeSDL_SDL_BindAudioStreams */
  /* bool SDL_BindAudioStreams(SDL_AudioDeviceID devid, SDL_AudioStream * const *streams, int num_streams) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BindAudioStreams[3], ReturnTypes_SDL_BindAudioStreams[1];
  ParamTypes_SDL_BindAudioStreams[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BindAudioStreams[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BindAudioStreams[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BindAudioStreams[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BindAudioStreams, 3, ReturnTypes_SDL_BindAudioStreams, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BindAudioStreams"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BindAudioStreams, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BindAudioStreams */

  /* EXPORT WasmEdgeSDL_SDL_BindAudioStream */
  /* bool SDL_BindAudioStream(SDL_AudioDeviceID devid, SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BindAudioStream[2], ReturnTypes_SDL_BindAudioStream[1];
  ParamTypes_SDL_BindAudioStream[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BindAudioStream[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BindAudioStream[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BindAudioStream, 2, ReturnTypes_SDL_BindAudioStream, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BindAudioStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BindAudioStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BindAudioStream */

  /* EXPORT WasmEdgeSDL_SDL_UnbindAudioStreams */
  /* void SDL_UnbindAudioStreams(SDL_AudioStream * const *streams, int num_streams) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnbindAudioStreams[2], ReturnTypes_SDL_UnbindAudioStreams[1];
  ParamTypes_SDL_UnbindAudioStreams[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UnbindAudioStreams[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnbindAudioStreams, 2, ReturnTypes_SDL_UnbindAudioStreams, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnbindAudioStreams"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnbindAudioStreams, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnbindAudioStreams */

  /* EXPORT WasmEdgeSDL_SDL_UnbindAudioStream */
  /* void SDL_UnbindAudioStream(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnbindAudioStream[1], ReturnTypes_SDL_UnbindAudioStream[1];
  ParamTypes_SDL_UnbindAudioStream[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnbindAudioStream, 1, ReturnTypes_SDL_UnbindAudioStream, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnbindAudioStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnbindAudioStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnbindAudioStream */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamDevice */
  /* SDL_AudioDeviceID SDL_GetAudioStreamDevice(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamDevice[1], ReturnTypes_SDL_GetAudioStreamDevice[1];
  ParamTypes_SDL_GetAudioStreamDevice[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamDevice[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamDevice, 1, ReturnTypes_SDL_GetAudioStreamDevice, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamDevice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamDevice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamDevice */

  /* EXPORT WasmEdgeSDL_SDL_CreateAudioStream */
  /* SDL_AudioStream * SDL_CreateAudioStream(const SDL_AudioSpec *src_spec, const SDL_AudioSpec *dst_spec) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateAudioStream[2], ReturnTypes_SDL_CreateAudioStream[1];
  ParamTypes_SDL_CreateAudioStream[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateAudioStream[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateAudioStream[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateAudioStream, 2, ReturnTypes_SDL_CreateAudioStream, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateAudioStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateAudioStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateAudioStream */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamProperties */
  /* SDL_PropertiesID SDL_GetAudioStreamProperties(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamProperties[1], ReturnTypes_SDL_GetAudioStreamProperties[1];
  ParamTypes_SDL_GetAudioStreamProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamProperties, 1, ReturnTypes_SDL_GetAudioStreamProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamFormat */
  /* bool SDL_GetAudioStreamFormat(SDL_AudioStream *stream, SDL_AudioSpec *src_spec, SDL_AudioSpec *dst_spec) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamFormat[3], ReturnTypes_SDL_GetAudioStreamFormat[1];
  ParamTypes_SDL_GetAudioStreamFormat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioStreamFormat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioStreamFormat[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamFormat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamFormat, 3, ReturnTypes_SDL_GetAudioStreamFormat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamFormat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamFormat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamFormat */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioStreamFormat */
  /* bool SDL_SetAudioStreamFormat(SDL_AudioStream *stream, const SDL_AudioSpec *src_spec, const SDL_AudioSpec *dst_spec) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioStreamFormat[3], ReturnTypes_SDL_SetAudioStreamFormat[1];
  ParamTypes_SDL_SetAudioStreamFormat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamFormat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamFormat[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioStreamFormat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioStreamFormat, 3, ReturnTypes_SDL_SetAudioStreamFormat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioStreamFormat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioStreamFormat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioStreamFormat */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamFrequencyRatio */
  /* float SDL_GetAudioStreamFrequencyRatio(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamFrequencyRatio[1], ReturnTypes_SDL_GetAudioStreamFrequencyRatio[1];
  ParamTypes_SDL_GetAudioStreamFrequencyRatio[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamFrequencyRatio[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamFrequencyRatio, 1, ReturnTypes_SDL_GetAudioStreamFrequencyRatio, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamFrequencyRatio"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamFrequencyRatio, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamFrequencyRatio */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioStreamFrequencyRatio */
  /* bool SDL_SetAudioStreamFrequencyRatio(SDL_AudioStream *stream, float ratio) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioStreamFrequencyRatio[2], ReturnTypes_SDL_SetAudioStreamFrequencyRatio[1];
  ParamTypes_SDL_SetAudioStreamFrequencyRatio[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamFrequencyRatio[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioStreamFrequencyRatio[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioStreamFrequencyRatio, 2, ReturnTypes_SDL_SetAudioStreamFrequencyRatio, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioStreamFrequencyRatio"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioStreamFrequencyRatio, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioStreamFrequencyRatio */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamGain */
  /* float SDL_GetAudioStreamGain(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamGain[1], ReturnTypes_SDL_GetAudioStreamGain[1];
  ParamTypes_SDL_GetAudioStreamGain[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamGain[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamGain, 1, ReturnTypes_SDL_GetAudioStreamGain, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamGain"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamGain, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamGain */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioStreamGain */
  /* bool SDL_SetAudioStreamGain(SDL_AudioStream *stream, float gain) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioStreamGain[2], ReturnTypes_SDL_SetAudioStreamGain[1];
  ParamTypes_SDL_SetAudioStreamGain[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamGain[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioStreamGain[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioStreamGain, 2, ReturnTypes_SDL_SetAudioStreamGain, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioStreamGain"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioStreamGain, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioStreamGain */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamInputChannelMap */
  /* int * SDL_GetAudioStreamInputChannelMap(SDL_AudioStream *stream, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamInputChannelMap[2], ReturnTypes_SDL_GetAudioStreamInputChannelMap[1];
  ParamTypes_SDL_GetAudioStreamInputChannelMap[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioStreamInputChannelMap[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamInputChannelMap[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamInputChannelMap, 2, ReturnTypes_SDL_GetAudioStreamInputChannelMap, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamInputChannelMap"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamInputChannelMap, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamInputChannelMap */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamOutputChannelMap */
  /* int * SDL_GetAudioStreamOutputChannelMap(SDL_AudioStream *stream, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamOutputChannelMap[2], ReturnTypes_SDL_GetAudioStreamOutputChannelMap[1];
  ParamTypes_SDL_GetAudioStreamOutputChannelMap[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioStreamOutputChannelMap[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamOutputChannelMap[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamOutputChannelMap, 2, ReturnTypes_SDL_GetAudioStreamOutputChannelMap, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamOutputChannelMap"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamOutputChannelMap, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamOutputChannelMap */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioStreamInputChannelMap */
  /* bool SDL_SetAudioStreamInputChannelMap(SDL_AudioStream *stream, const int *chmap, int count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioStreamInputChannelMap[3], ReturnTypes_SDL_SetAudioStreamInputChannelMap[1];
  ParamTypes_SDL_SetAudioStreamInputChannelMap[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamInputChannelMap[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamInputChannelMap[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioStreamInputChannelMap[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioStreamInputChannelMap, 3, ReturnTypes_SDL_SetAudioStreamInputChannelMap, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioStreamInputChannelMap"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioStreamInputChannelMap, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioStreamInputChannelMap */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioStreamOutputChannelMap */
  /* bool SDL_SetAudioStreamOutputChannelMap(SDL_AudioStream *stream, const int *chmap, int count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioStreamOutputChannelMap[3], ReturnTypes_SDL_SetAudioStreamOutputChannelMap[1];
  ParamTypes_SDL_SetAudioStreamOutputChannelMap[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamOutputChannelMap[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamOutputChannelMap[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioStreamOutputChannelMap[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioStreamOutputChannelMap, 3, ReturnTypes_SDL_SetAudioStreamOutputChannelMap, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioStreamOutputChannelMap"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioStreamOutputChannelMap, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioStreamOutputChannelMap */

  /* EXPORT WasmEdgeSDL_SDL_PutAudioStreamData */
  /* bool SDL_PutAudioStreamData(SDL_AudioStream *stream, const void *buf, int len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PutAudioStreamData[3], ReturnTypes_SDL_PutAudioStreamData[1];
  ParamTypes_SDL_PutAudioStreamData[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PutAudioStreamData[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PutAudioStreamData[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PutAudioStreamData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PutAudioStreamData, 3, ReturnTypes_SDL_PutAudioStreamData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PutAudioStreamData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PutAudioStreamData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PutAudioStreamData */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamData */
  /* int SDL_GetAudioStreamData(SDL_AudioStream *stream, void *buf, int len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamData[3], ReturnTypes_SDL_GetAudioStreamData[1];
  ParamTypes_SDL_GetAudioStreamData[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioStreamData[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetAudioStreamData[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamData, 3, ReturnTypes_SDL_GetAudioStreamData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamData */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamAvailable */
  /* int SDL_GetAudioStreamAvailable(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamAvailable[1], ReturnTypes_SDL_GetAudioStreamAvailable[1];
  ParamTypes_SDL_GetAudioStreamAvailable[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamAvailable[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamAvailable, 1, ReturnTypes_SDL_GetAudioStreamAvailable, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamAvailable"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamAvailable, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamAvailable */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioStreamQueued */
  /* int SDL_GetAudioStreamQueued(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioStreamQueued[1], ReturnTypes_SDL_GetAudioStreamQueued[1];
  ParamTypes_SDL_GetAudioStreamQueued[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioStreamQueued[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioStreamQueued, 1, ReturnTypes_SDL_GetAudioStreamQueued, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioStreamQueued"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioStreamQueued, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioStreamQueued */

  /* EXPORT WasmEdgeSDL_SDL_FlushAudioStream */
  /* bool SDL_FlushAudioStream(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FlushAudioStream[1], ReturnTypes_SDL_FlushAudioStream[1];
  ParamTypes_SDL_FlushAudioStream[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_FlushAudioStream[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FlushAudioStream, 1, ReturnTypes_SDL_FlushAudioStream, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FlushAudioStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FlushAudioStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FlushAudioStream */

  /* EXPORT WasmEdgeSDL_SDL_ClearAudioStream */
  /* bool SDL_ClearAudioStream(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ClearAudioStream[1], ReturnTypes_SDL_ClearAudioStream[1];
  ParamTypes_SDL_ClearAudioStream[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ClearAudioStream[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ClearAudioStream, 1, ReturnTypes_SDL_ClearAudioStream, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ClearAudioStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ClearAudioStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ClearAudioStream */

  /* EXPORT WasmEdgeSDL_SDL_PauseAudioStreamDevice */
  /* bool SDL_PauseAudioStreamDevice(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PauseAudioStreamDevice[1], ReturnTypes_SDL_PauseAudioStreamDevice[1];
  ParamTypes_SDL_PauseAudioStreamDevice[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PauseAudioStreamDevice[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PauseAudioStreamDevice, 1, ReturnTypes_SDL_PauseAudioStreamDevice, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PauseAudioStreamDevice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PauseAudioStreamDevice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PauseAudioStreamDevice */

  /* EXPORT WasmEdgeSDL_SDL_ResumeAudioStreamDevice */
  /* bool SDL_ResumeAudioStreamDevice(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ResumeAudioStreamDevice[1], ReturnTypes_SDL_ResumeAudioStreamDevice[1];
  ParamTypes_SDL_ResumeAudioStreamDevice[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ResumeAudioStreamDevice[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ResumeAudioStreamDevice, 1, ReturnTypes_SDL_ResumeAudioStreamDevice, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ResumeAudioStreamDevice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ResumeAudioStreamDevice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ResumeAudioStreamDevice */

  /* EXPORT WasmEdgeSDL_SDL_AudioStreamDevicePaused */
  /* bool SDL_AudioStreamDevicePaused(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AudioStreamDevicePaused[1], ReturnTypes_SDL_AudioStreamDevicePaused[1];
  ParamTypes_SDL_AudioStreamDevicePaused[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AudioStreamDevicePaused[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AudioStreamDevicePaused, 1, ReturnTypes_SDL_AudioStreamDevicePaused, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AudioStreamDevicePaused"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AudioStreamDevicePaused, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AudioStreamDevicePaused */

  /* EXPORT WasmEdgeSDL_SDL_LockAudioStream */
  /* bool SDL_LockAudioStream(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockAudioStream[1], ReturnTypes_SDL_LockAudioStream[1];
  ParamTypes_SDL_LockAudioStream[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LockAudioStream[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockAudioStream, 1, ReturnTypes_SDL_LockAudioStream, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockAudioStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockAudioStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockAudioStream */

  /* EXPORT WasmEdgeSDL_SDL_UnlockAudioStream */
  /* bool SDL_UnlockAudioStream(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnlockAudioStream[1], ReturnTypes_SDL_UnlockAudioStream[1];
  ParamTypes_SDL_UnlockAudioStream[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_UnlockAudioStream[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnlockAudioStream, 1, ReturnTypes_SDL_UnlockAudioStream, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnlockAudioStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnlockAudioStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnlockAudioStream */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioStreamGetCallback */
  /* bool SDL_SetAudioStreamGetCallback(SDL_AudioStream *stream, SDL_AudioStreamCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioStreamGetCallback[3], ReturnTypes_SDL_SetAudioStreamGetCallback[1];
  ParamTypes_SDL_SetAudioStreamGetCallback[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamGetCallback[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamGetCallback[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioStreamGetCallback[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioStreamGetCallback, 3, ReturnTypes_SDL_SetAudioStreamGetCallback, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioStreamGetCallback"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioStreamGetCallback, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioStreamGetCallback */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioStreamPutCallback */
  /* bool SDL_SetAudioStreamPutCallback(SDL_AudioStream *stream, SDL_AudioStreamCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioStreamPutCallback[3], ReturnTypes_SDL_SetAudioStreamPutCallback[1];
  ParamTypes_SDL_SetAudioStreamPutCallback[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamPutCallback[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioStreamPutCallback[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioStreamPutCallback[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioStreamPutCallback, 3, ReturnTypes_SDL_SetAudioStreamPutCallback, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioStreamPutCallback"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioStreamPutCallback, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioStreamPutCallback */

  /* EXPORT WasmEdgeSDL_SDL_DestroyAudioStream */
  /* void SDL_DestroyAudioStream(SDL_AudioStream *stream) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyAudioStream[1], ReturnTypes_SDL_DestroyAudioStream[1];
  ParamTypes_SDL_DestroyAudioStream[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyAudioStream, 1, ReturnTypes_SDL_DestroyAudioStream, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyAudioStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyAudioStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyAudioStream */

  /* EXPORT WasmEdgeSDL_SDL_OpenAudioDeviceStream */
  /* SDL_AudioStream * SDL_OpenAudioDeviceStream(SDL_AudioDeviceID devid, const SDL_AudioSpec *spec, SDL_AudioStreamCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenAudioDeviceStream[4], ReturnTypes_SDL_OpenAudioDeviceStream[1];
  ParamTypes_SDL_OpenAudioDeviceStream[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenAudioDeviceStream[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenAudioDeviceStream[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenAudioDeviceStream[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenAudioDeviceStream[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenAudioDeviceStream, 4, ReturnTypes_SDL_OpenAudioDeviceStream, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenAudioDeviceStream"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenAudioDeviceStream, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenAudioDeviceStream */

  /* EXPORT WasmEdgeSDL_SDL_SetAudioPostmixCallback */
  /* bool SDL_SetAudioPostmixCallback(SDL_AudioDeviceID devid, SDL_AudioPostmixCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAudioPostmixCallback[3], ReturnTypes_SDL_SetAudioPostmixCallback[1];
  ParamTypes_SDL_SetAudioPostmixCallback[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioPostmixCallback[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAudioPostmixCallback[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAudioPostmixCallback[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAudioPostmixCallback, 3, ReturnTypes_SDL_SetAudioPostmixCallback, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAudioPostmixCallback"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAudioPostmixCallback, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAudioPostmixCallback */

  /* EXPORT WasmEdgeSDL_SDL_LoadWAV_IO */
  /* bool SDL_LoadWAV_IO(SDL_IOStream *src, bool closeio, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadWAV_IO[5], ReturnTypes_SDL_LoadWAV_IO[1];
  ParamTypes_SDL_LoadWAV_IO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadWAV_IO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadWAV_IO[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadWAV_IO[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadWAV_IO[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadWAV_IO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadWAV_IO, 5, ReturnTypes_SDL_LoadWAV_IO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadWAV_IO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadWAV_IO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadWAV_IO */

  /* EXPORT WasmEdgeSDL_SDL_LoadWAV */
  /* bool SDL_LoadWAV(const char *path, SDL_AudioSpec *spec, Uint8 **audio_buf, Uint32 *audio_len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadWAV[4], ReturnTypes_SDL_LoadWAV[1];
  ParamTypes_SDL_LoadWAV[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadWAV[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadWAV[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadWAV[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadWAV[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadWAV, 4, ReturnTypes_SDL_LoadWAV, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadWAV"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadWAV, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadWAV */

  /* EXPORT WasmEdgeSDL_SDL_MixAudio */
  /* bool SDL_MixAudio(Uint8 *dst, const Uint8 *src, SDL_AudioFormat format, Uint32 len, float volume) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MixAudio[5], ReturnTypes_SDL_MixAudio[1];
  ParamTypes_SDL_MixAudio[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MixAudio[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MixAudio[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MixAudio[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MixAudio[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_MixAudio[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MixAudio, 5, ReturnTypes_SDL_MixAudio, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MixAudio"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MixAudio, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MixAudio */

  /* EXPORT WasmEdgeSDL_SDL_ConvertAudioSamples */
  /* bool SDL_ConvertAudioSamples(const SDL_AudioSpec *src_spec, const Uint8 *src_data, int src_len, const SDL_AudioSpec *dst_spec, Uint8 **dst_data, int *dst_len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ConvertAudioSamples[6], ReturnTypes_SDL_ConvertAudioSamples[1];
  ParamTypes_SDL_ConvertAudioSamples[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertAudioSamples[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertAudioSamples[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertAudioSamples[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertAudioSamples[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertAudioSamples[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ConvertAudioSamples[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ConvertAudioSamples, 6, ReturnTypes_SDL_ConvertAudioSamples, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ConvertAudioSamples"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ConvertAudioSamples, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ConvertAudioSamples */

  /* EXPORT WasmEdgeSDL_SDL_GetAudioFormatName */
  /* const char * SDL_GetAudioFormatName(SDL_AudioFormat format) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAudioFormatName[1], ReturnTypes_SDL_GetAudioFormatName[1];
  ParamTypes_SDL_GetAudioFormatName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAudioFormatName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAudioFormatName, 1, ReturnTypes_SDL_GetAudioFormatName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAudioFormatName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAudioFormatName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAudioFormatName */

  /* EXPORT WasmEdgeSDL_SDL_GetSilenceValueForFormat */
  /* int SDL_GetSilenceValueForFormat(SDL_AudioFormat format) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSilenceValueForFormat[1], ReturnTypes_SDL_GetSilenceValueForFormat[1];
  ParamTypes_SDL_GetSilenceValueForFormat[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSilenceValueForFormat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSilenceValueForFormat, 1, ReturnTypes_SDL_GetSilenceValueForFormat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSilenceValueForFormat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSilenceValueForFormat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSilenceValueForFormat */

  /* EXPORT WasmEdgeSDL_SDL_GetNumCameraDrivers */
  /* int SDL_GetNumCameraDrivers(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumCameraDrivers[1], ReturnTypes_SDL_GetNumCameraDrivers[1];

  ReturnTypes_SDL_GetNumCameraDrivers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumCameraDrivers, 0, ReturnTypes_SDL_GetNumCameraDrivers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumCameraDrivers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumCameraDrivers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumCameraDrivers */

  /* EXPORT WasmEdgeSDL_SDL_GetCameraDriver */
  /* const char * SDL_GetCameraDriver(int index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameraDriver[1], ReturnTypes_SDL_GetCameraDriver[1];
  ParamTypes_SDL_GetCameraDriver[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameraDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameraDriver, 1, ReturnTypes_SDL_GetCameraDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameraDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameraDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameraDriver */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentCameraDriver */
  /* const char * SDL_GetCurrentCameraDriver(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentCameraDriver[1], ReturnTypes_SDL_GetCurrentCameraDriver[1];

  ReturnTypes_SDL_GetCurrentCameraDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentCameraDriver, 0, ReturnTypes_SDL_GetCurrentCameraDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentCameraDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentCameraDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentCameraDriver */

  /* EXPORT WasmEdgeSDL_SDL_GetCameras */
  /* SDL_CameraID * SDL_GetCameras(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameras[1], ReturnTypes_SDL_GetCameras[1];
  ParamTypes_SDL_GetCameras[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameras[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameras, 1, ReturnTypes_SDL_GetCameras, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameras"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameras, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameras */

  /* EXPORT WasmEdgeSDL_SDL_GetCameraSupportedFormats */
  /* SDL_CameraSpec ** SDL_GetCameraSupportedFormats(SDL_CameraID instance_id, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameraSupportedFormats[2], ReturnTypes_SDL_GetCameraSupportedFormats[1];
  ParamTypes_SDL_GetCameraSupportedFormats[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetCameraSupportedFormats[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameraSupportedFormats[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameraSupportedFormats, 2, ReturnTypes_SDL_GetCameraSupportedFormats, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameraSupportedFormats"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameraSupportedFormats, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameraSupportedFormats */

  /* EXPORT WasmEdgeSDL_SDL_GetCameraName */
  /* const char * SDL_GetCameraName(SDL_CameraID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameraName[1], ReturnTypes_SDL_GetCameraName[1];
  ParamTypes_SDL_GetCameraName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameraName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameraName, 1, ReturnTypes_SDL_GetCameraName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameraName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameraName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameraName */

  /* EXPORT WasmEdgeSDL_SDL_GetCameraPosition */
  /* SDL_CameraPosition SDL_GetCameraPosition(SDL_CameraID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameraPosition[1], ReturnTypes_SDL_GetCameraPosition[1];
  ParamTypes_SDL_GetCameraPosition[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameraPosition[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameraPosition, 1, ReturnTypes_SDL_GetCameraPosition, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameraPosition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameraPosition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameraPosition */

  /* EXPORT WasmEdgeSDL_SDL_OpenCamera */
  /* SDL_Camera * SDL_OpenCamera(SDL_CameraID instance_id, const SDL_CameraSpec *spec) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenCamera[2], ReturnTypes_SDL_OpenCamera[1];
  ParamTypes_SDL_OpenCamera[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenCamera[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenCamera[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenCamera, 2, ReturnTypes_SDL_OpenCamera, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenCamera"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenCamera, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenCamera */

  /* EXPORT WasmEdgeSDL_SDL_GetCameraPermissionState */
  /* int SDL_GetCameraPermissionState(SDL_Camera *camera) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameraPermissionState[1], ReturnTypes_SDL_GetCameraPermissionState[1];
  ParamTypes_SDL_GetCameraPermissionState[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameraPermissionState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameraPermissionState, 1, ReturnTypes_SDL_GetCameraPermissionState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameraPermissionState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameraPermissionState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameraPermissionState */

  /* EXPORT WasmEdgeSDL_SDL_GetCameraID */
  /* SDL_CameraID SDL_GetCameraID(SDL_Camera *camera) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameraID[1], ReturnTypes_SDL_GetCameraID[1];
  ParamTypes_SDL_GetCameraID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameraID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameraID, 1, ReturnTypes_SDL_GetCameraID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameraID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameraID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameraID */

  /* EXPORT WasmEdgeSDL_SDL_GetCameraProperties */
  /* SDL_PropertiesID SDL_GetCameraProperties(SDL_Camera *camera) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameraProperties[1], ReturnTypes_SDL_GetCameraProperties[1];
  ParamTypes_SDL_GetCameraProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameraProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameraProperties, 1, ReturnTypes_SDL_GetCameraProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameraProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameraProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameraProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetCameraFormat */
  /* bool SDL_GetCameraFormat(SDL_Camera *camera, SDL_CameraSpec *spec) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCameraFormat[2], ReturnTypes_SDL_GetCameraFormat[1];
  ParamTypes_SDL_GetCameraFormat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetCameraFormat[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCameraFormat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCameraFormat, 2, ReturnTypes_SDL_GetCameraFormat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCameraFormat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCameraFormat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCameraFormat */

  /* EXPORT WasmEdgeSDL_SDL_AcquireCameraFrame */
  /* SDL_Surface * SDL_AcquireCameraFrame(SDL_Camera *camera, Uint64 *timestampNS) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AcquireCameraFrame[2], ReturnTypes_SDL_AcquireCameraFrame[1];
  ParamTypes_SDL_AcquireCameraFrame[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AcquireCameraFrame[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AcquireCameraFrame[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AcquireCameraFrame, 2, ReturnTypes_SDL_AcquireCameraFrame, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AcquireCameraFrame"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AcquireCameraFrame, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AcquireCameraFrame */

  /* EXPORT WasmEdgeSDL_SDL_ReleaseCameraFrame */
  /* void SDL_ReleaseCameraFrame(SDL_Camera *camera, SDL_Surface *frame) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReleaseCameraFrame[2], ReturnTypes_SDL_ReleaseCameraFrame[1];
  ParamTypes_SDL_ReleaseCameraFrame[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReleaseCameraFrame[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReleaseCameraFrame, 2, ReturnTypes_SDL_ReleaseCameraFrame, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReleaseCameraFrame"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReleaseCameraFrame, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReleaseCameraFrame */

  /* EXPORT WasmEdgeSDL_SDL_CloseCamera */
  /* void SDL_CloseCamera(SDL_Camera *camera) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseCamera[1], ReturnTypes_SDL_CloseCamera[1];
  ParamTypes_SDL_CloseCamera[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseCamera, 1, ReturnTypes_SDL_CloseCamera, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseCamera"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseCamera, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseCamera */

  /* EXPORT WasmEdgeSDL_SDL_SetClipboardText */
  /* bool SDL_SetClipboardText(const char *text) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetClipboardText[1], ReturnTypes_SDL_SetClipboardText[1];
  ParamTypes_SDL_SetClipboardText[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetClipboardText[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetClipboardText, 1, ReturnTypes_SDL_SetClipboardText, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetClipboardText"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetClipboardText, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetClipboardText */

  /* EXPORT WasmEdgeSDL_SDL_GetClipboardText */
  /* char * SDL_GetClipboardText(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetClipboardText[1], ReturnTypes_SDL_GetClipboardText[1];

  ReturnTypes_SDL_GetClipboardText[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetClipboardText, 0, ReturnTypes_SDL_GetClipboardText, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetClipboardText"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetClipboardText, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetClipboardText */

  /* EXPORT WasmEdgeSDL_SDL_HasClipboardText */
  /* bool SDL_HasClipboardText(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasClipboardText[1], ReturnTypes_SDL_HasClipboardText[1];

  ReturnTypes_SDL_HasClipboardText[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasClipboardText, 0, ReturnTypes_SDL_HasClipboardText, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasClipboardText"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasClipboardText, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasClipboardText */

  /* EXPORT WasmEdgeSDL_SDL_SetPrimarySelectionText */
  /* bool SDL_SetPrimarySelectionText(const char *text) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetPrimarySelectionText[1], ReturnTypes_SDL_SetPrimarySelectionText[1];
  ParamTypes_SDL_SetPrimarySelectionText[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetPrimarySelectionText[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetPrimarySelectionText, 1, ReturnTypes_SDL_SetPrimarySelectionText, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetPrimarySelectionText"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetPrimarySelectionText, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetPrimarySelectionText */

  /* EXPORT WasmEdgeSDL_SDL_GetPrimarySelectionText */
  /* char * SDL_GetPrimarySelectionText(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPrimarySelectionText[1], ReturnTypes_SDL_GetPrimarySelectionText[1];

  ReturnTypes_SDL_GetPrimarySelectionText[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPrimarySelectionText, 0, ReturnTypes_SDL_GetPrimarySelectionText, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPrimarySelectionText"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPrimarySelectionText, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPrimarySelectionText */

  /* EXPORT WasmEdgeSDL_SDL_HasPrimarySelectionText */
  /* bool SDL_HasPrimarySelectionText(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasPrimarySelectionText[1], ReturnTypes_SDL_HasPrimarySelectionText[1];

  ReturnTypes_SDL_HasPrimarySelectionText[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasPrimarySelectionText, 0, ReturnTypes_SDL_HasPrimarySelectionText, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasPrimarySelectionText"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasPrimarySelectionText, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasPrimarySelectionText */

  /* EXPORT WasmEdgeSDL_SDL_SetClipboardData */
  /* bool SDL_SetClipboardData(SDL_ClipboardDataCallback callback, SDL_ClipboardCleanupCallback cleanup, void *userdata, const char **mime_types, size_t num_mime_types) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetClipboardData[5], ReturnTypes_SDL_SetClipboardData[1];
  ParamTypes_SDL_SetClipboardData[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetClipboardData[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetClipboardData[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetClipboardData[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetClipboardData[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetClipboardData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetClipboardData, 5, ReturnTypes_SDL_SetClipboardData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetClipboardData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetClipboardData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetClipboardData */

  /* EXPORT WasmEdgeSDL_SDL_ClearClipboardData */
  /* bool SDL_ClearClipboardData(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ClearClipboardData[1], ReturnTypes_SDL_ClearClipboardData[1];

  ReturnTypes_SDL_ClearClipboardData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ClearClipboardData, 0, ReturnTypes_SDL_ClearClipboardData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ClearClipboardData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ClearClipboardData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ClearClipboardData */

  /* EXPORT WasmEdgeSDL_SDL_GetClipboardData */
  /* void * SDL_GetClipboardData(const char *mime_type, size_t *size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetClipboardData[2], ReturnTypes_SDL_GetClipboardData[1];
  ParamTypes_SDL_GetClipboardData[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetClipboardData[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetClipboardData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetClipboardData, 2, ReturnTypes_SDL_GetClipboardData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetClipboardData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetClipboardData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetClipboardData */

  /* EXPORT WasmEdgeSDL_SDL_HasClipboardData */
  /* bool SDL_HasClipboardData(const char *mime_type) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasClipboardData[1], ReturnTypes_SDL_HasClipboardData[1];
  ParamTypes_SDL_HasClipboardData[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HasClipboardData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasClipboardData, 1, ReturnTypes_SDL_HasClipboardData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasClipboardData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasClipboardData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasClipboardData */

  /* EXPORT WasmEdgeSDL_SDL_GetClipboardMimeTypes */
  /* char ** SDL_GetClipboardMimeTypes(size_t *num_mime_types) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetClipboardMimeTypes[1], ReturnTypes_SDL_GetClipboardMimeTypes[1];
  ParamTypes_SDL_GetClipboardMimeTypes[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetClipboardMimeTypes[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetClipboardMimeTypes, 1, ReturnTypes_SDL_GetClipboardMimeTypes, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetClipboardMimeTypes"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetClipboardMimeTypes, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetClipboardMimeTypes */

  /* EXPORT WasmEdgeSDL_SDL_GetNumLogicalCPUCores */
  /* int SDL_GetNumLogicalCPUCores(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumLogicalCPUCores[1], ReturnTypes_SDL_GetNumLogicalCPUCores[1];

  ReturnTypes_SDL_GetNumLogicalCPUCores[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumLogicalCPUCores, 0, ReturnTypes_SDL_GetNumLogicalCPUCores, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumLogicalCPUCores"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumLogicalCPUCores, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumLogicalCPUCores */

  /* EXPORT WasmEdgeSDL_SDL_GetCPUCacheLineSize */
  /* int SDL_GetCPUCacheLineSize(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCPUCacheLineSize[1], ReturnTypes_SDL_GetCPUCacheLineSize[1];

  ReturnTypes_SDL_GetCPUCacheLineSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCPUCacheLineSize, 0, ReturnTypes_SDL_GetCPUCacheLineSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCPUCacheLineSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCPUCacheLineSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCPUCacheLineSize */

  /* EXPORT WasmEdgeSDL_SDL_HasAltiVec */
  /* bool SDL_HasAltiVec(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasAltiVec[1], ReturnTypes_SDL_HasAltiVec[1];

  ReturnTypes_SDL_HasAltiVec[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasAltiVec, 0, ReturnTypes_SDL_HasAltiVec, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasAltiVec"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasAltiVec, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasAltiVec */

  /* EXPORT WasmEdgeSDL_SDL_HasMMX */
  /* bool SDL_HasMMX(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasMMX[1], ReturnTypes_SDL_HasMMX[1];

  ReturnTypes_SDL_HasMMX[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasMMX, 0, ReturnTypes_SDL_HasMMX, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasMMX"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasMMX, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasMMX */

  /* EXPORT WasmEdgeSDL_SDL_HasSSE */
  /* bool SDL_HasSSE(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasSSE[1], ReturnTypes_SDL_HasSSE[1];

  ReturnTypes_SDL_HasSSE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasSSE, 0, ReturnTypes_SDL_HasSSE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasSSE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasSSE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasSSE */

  /* EXPORT WasmEdgeSDL_SDL_HasSSE2 */
  /* bool SDL_HasSSE2(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasSSE2[1], ReturnTypes_SDL_HasSSE2[1];

  ReturnTypes_SDL_HasSSE2[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasSSE2, 0, ReturnTypes_SDL_HasSSE2, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasSSE2"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasSSE2, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasSSE2 */

  /* EXPORT WasmEdgeSDL_SDL_HasSSE3 */
  /* bool SDL_HasSSE3(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasSSE3[1], ReturnTypes_SDL_HasSSE3[1];

  ReturnTypes_SDL_HasSSE3[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasSSE3, 0, ReturnTypes_SDL_HasSSE3, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasSSE3"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasSSE3, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasSSE3 */

  /* EXPORT WasmEdgeSDL_SDL_HasSSE41 */
  /* bool SDL_HasSSE41(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasSSE41[1], ReturnTypes_SDL_HasSSE41[1];

  ReturnTypes_SDL_HasSSE41[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasSSE41, 0, ReturnTypes_SDL_HasSSE41, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasSSE41"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasSSE41, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasSSE41 */

  /* EXPORT WasmEdgeSDL_SDL_HasSSE42 */
  /* bool SDL_HasSSE42(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasSSE42[1], ReturnTypes_SDL_HasSSE42[1];

  ReturnTypes_SDL_HasSSE42[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasSSE42, 0, ReturnTypes_SDL_HasSSE42, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasSSE42"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasSSE42, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasSSE42 */

  /* EXPORT WasmEdgeSDL_SDL_HasAVX */
  /* bool SDL_HasAVX(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasAVX[1], ReturnTypes_SDL_HasAVX[1];

  ReturnTypes_SDL_HasAVX[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasAVX, 0, ReturnTypes_SDL_HasAVX, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasAVX"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasAVX, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasAVX */

  /* EXPORT WasmEdgeSDL_SDL_HasAVX2 */
  /* bool SDL_HasAVX2(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasAVX2[1], ReturnTypes_SDL_HasAVX2[1];

  ReturnTypes_SDL_HasAVX2[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasAVX2, 0, ReturnTypes_SDL_HasAVX2, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasAVX2"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasAVX2, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasAVX2 */

  /* EXPORT WasmEdgeSDL_SDL_HasAVX512F */
  /* bool SDL_HasAVX512F(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasAVX512F[1], ReturnTypes_SDL_HasAVX512F[1];

  ReturnTypes_SDL_HasAVX512F[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasAVX512F, 0, ReturnTypes_SDL_HasAVX512F, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasAVX512F"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasAVX512F, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasAVX512F */

  /* EXPORT WasmEdgeSDL_SDL_HasARMSIMD */
  /* bool SDL_HasARMSIMD(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasARMSIMD[1], ReturnTypes_SDL_HasARMSIMD[1];

  ReturnTypes_SDL_HasARMSIMD[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasARMSIMD, 0, ReturnTypes_SDL_HasARMSIMD, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasARMSIMD"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasARMSIMD, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasARMSIMD */

  /* EXPORT WasmEdgeSDL_SDL_HasNEON */
  /* bool SDL_HasNEON(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasNEON[1], ReturnTypes_SDL_HasNEON[1];

  ReturnTypes_SDL_HasNEON[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasNEON, 0, ReturnTypes_SDL_HasNEON, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasNEON"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasNEON, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasNEON */

  /* EXPORT WasmEdgeSDL_SDL_HasLSX */
  /* bool SDL_HasLSX(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasLSX[1], ReturnTypes_SDL_HasLSX[1];

  ReturnTypes_SDL_HasLSX[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasLSX, 0, ReturnTypes_SDL_HasLSX, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasLSX"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasLSX, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasLSX */

  /* EXPORT WasmEdgeSDL_SDL_HasLASX */
  /* bool SDL_HasLASX(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasLASX[1], ReturnTypes_SDL_HasLASX[1];

  ReturnTypes_SDL_HasLASX[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasLASX, 0, ReturnTypes_SDL_HasLASX, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasLASX"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasLASX, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasLASX */

  /* EXPORT WasmEdgeSDL_SDL_GetSystemRAM */
  /* int SDL_GetSystemRAM(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSystemRAM[1], ReturnTypes_SDL_GetSystemRAM[1];

  ReturnTypes_SDL_GetSystemRAM[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSystemRAM, 0, ReturnTypes_SDL_GetSystemRAM, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSystemRAM"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSystemRAM, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSystemRAM */

  /* EXPORT WasmEdgeSDL_SDL_GetSIMDAlignment */
  /* size_t SDL_GetSIMDAlignment(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSIMDAlignment[1], ReturnTypes_SDL_GetSIMDAlignment[1];

  ReturnTypes_SDL_GetSIMDAlignment[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSIMDAlignment, 0, ReturnTypes_SDL_GetSIMDAlignment, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSIMDAlignment"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSIMDAlignment, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSIMDAlignment */

  /* EXPORT WasmEdgeSDL_SDL_ShowOpenFileDialog */
  /* void SDL_ShowOpenFileDialog(SDL_DialogFileCallback callback, void *userdata, SDL_Window *window, const SDL_DialogFileFilter *filters, int nfilters, const char *default_location, bool allow_many) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowOpenFileDialog[7], ReturnTypes_SDL_ShowOpenFileDialog[1];
  ParamTypes_SDL_ShowOpenFileDialog[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFileDialog[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFileDialog[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFileDialog[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFileDialog[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFileDialog[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFileDialog[6] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowOpenFileDialog, 7, ReturnTypes_SDL_ShowOpenFileDialog, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowOpenFileDialog"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowOpenFileDialog, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowOpenFileDialog */

  /* EXPORT WasmEdgeSDL_SDL_ShowSaveFileDialog */
  /* void SDL_ShowSaveFileDialog(SDL_DialogFileCallback callback, void *userdata, SDL_Window *window, const SDL_DialogFileFilter *filters, int nfilters, const char *default_location) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowSaveFileDialog[6], ReturnTypes_SDL_ShowSaveFileDialog[1];
  ParamTypes_SDL_ShowSaveFileDialog[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowSaveFileDialog[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowSaveFileDialog[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowSaveFileDialog[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowSaveFileDialog[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowSaveFileDialog[5] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowSaveFileDialog, 6, ReturnTypes_SDL_ShowSaveFileDialog, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowSaveFileDialog"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowSaveFileDialog, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowSaveFileDialog */

  /* EXPORT WasmEdgeSDL_SDL_ShowOpenFolderDialog */
  /* void SDL_ShowOpenFolderDialog(SDL_DialogFileCallback callback, void *userdata, SDL_Window *window, const char *default_location, bool allow_many) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowOpenFolderDialog[5], ReturnTypes_SDL_ShowOpenFolderDialog[1];
  ParamTypes_SDL_ShowOpenFolderDialog[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFolderDialog[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFolderDialog[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFolderDialog[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowOpenFolderDialog[4] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowOpenFolderDialog, 5, ReturnTypes_SDL_ShowOpenFolderDialog, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowOpenFolderDialog"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowOpenFolderDialog, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowOpenFolderDialog */

  /* EXPORT WasmEdgeSDL_SDL_ShowFileDialogWithProperties */
  /* void SDL_ShowFileDialogWithProperties(SDL_FileDialogType type, SDL_DialogFileCallback callback, void *userdata, SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowFileDialogWithProperties[4], ReturnTypes_SDL_ShowFileDialogWithProperties[1];
  ParamTypes_SDL_ShowFileDialogWithProperties[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowFileDialogWithProperties[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowFileDialogWithProperties[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowFileDialogWithProperties[3] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowFileDialogWithProperties, 4, ReturnTypes_SDL_ShowFileDialogWithProperties, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowFileDialogWithProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowFileDialogWithProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowFileDialogWithProperties */

  /* EXPORT WasmEdgeSDL_SDL_SetError */
  /* bool SDL_SetError(SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetError[2], ReturnTypes_SDL_SetError[1];
  ParamTypes_SDL_SetError[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetError[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetError[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetError, 2, ReturnTypes_SDL_SetError, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetError"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetError, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetError */

  /* EXPORT WasmEdgeSDL_SDL_SetErrorV */
  /* bool SDL_SetErrorV(SDL_PRINTF_FORMAT_STRING const char *fmt, va_list ap) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetErrorV[2], ReturnTypes_SDL_SetErrorV[1];
  ParamTypes_SDL_SetErrorV[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetErrorV[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetErrorV[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetErrorV, 2, ReturnTypes_SDL_SetErrorV, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetErrorV"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetErrorV, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetErrorV */

  /* EXPORT WasmEdgeSDL_SDL_OutOfMemory */
  /* bool SDL_OutOfMemory(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OutOfMemory[1], ReturnTypes_SDL_OutOfMemory[1];

  ReturnTypes_SDL_OutOfMemory[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OutOfMemory, 0, ReturnTypes_SDL_OutOfMemory, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OutOfMemory"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OutOfMemory, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OutOfMemory */

  /* EXPORT WasmEdgeSDL_SDL_GetError */
  /* const char * SDL_GetError(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetError[1], ReturnTypes_SDL_GetError[1];

  ReturnTypes_SDL_GetError[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetError, 0, ReturnTypes_SDL_GetError, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetError"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetError, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetError */

  /* EXPORT WasmEdgeSDL_SDL_ClearError */
  /* bool SDL_ClearError(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ClearError[1], ReturnTypes_SDL_ClearError[1];

  ReturnTypes_SDL_ClearError[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ClearError, 0, ReturnTypes_SDL_ClearError, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ClearError"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ClearError, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ClearError */

  /* EXPORT WasmEdgeSDL_SDL_PumpEvents */
  /* void SDL_PumpEvents(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PumpEvents[1], ReturnTypes_SDL_PumpEvents[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PumpEvents, 0, ReturnTypes_SDL_PumpEvents, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PumpEvents"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PumpEvents, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PumpEvents */

  /* EXPORT WasmEdgeSDL_SDL_PeepEvents */
  /* int SDL_PeepEvents(SDL_Event *events, int numevents, SDL_EventAction action, Uint32 minType, Uint32 maxType) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PeepEvents[5], ReturnTypes_SDL_PeepEvents[1];
  ParamTypes_SDL_PeepEvents[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PeepEvents[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PeepEvents[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PeepEvents[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PeepEvents[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PeepEvents[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PeepEvents, 5, ReturnTypes_SDL_PeepEvents, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PeepEvents"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PeepEvents, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PeepEvents */

  /* EXPORT WasmEdgeSDL_SDL_HasEvent */
  /* bool SDL_HasEvent(Uint32 type) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasEvent[1], ReturnTypes_SDL_HasEvent[1];
  ParamTypes_SDL_HasEvent[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HasEvent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasEvent, 1, ReturnTypes_SDL_HasEvent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasEvent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasEvent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasEvent */

  /* EXPORT WasmEdgeSDL_SDL_HasEvents */
  /* bool SDL_HasEvents(Uint32 minType, Uint32 maxType) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasEvents[2], ReturnTypes_SDL_HasEvents[1];
  ParamTypes_SDL_HasEvents[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_HasEvents[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HasEvents[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasEvents, 2, ReturnTypes_SDL_HasEvents, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasEvents"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasEvents, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasEvents */

  /* EXPORT WasmEdgeSDL_SDL_FlushEvent */
  /* void SDL_FlushEvent(Uint32 type) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FlushEvent[1], ReturnTypes_SDL_FlushEvent[1];
  ParamTypes_SDL_FlushEvent[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FlushEvent, 1, ReturnTypes_SDL_FlushEvent, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FlushEvent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FlushEvent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FlushEvent */

  /* EXPORT WasmEdgeSDL_SDL_FlushEvents */
  /* void SDL_FlushEvents(Uint32 minType, Uint32 maxType) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FlushEvents[2], ReturnTypes_SDL_FlushEvents[1];
  ParamTypes_SDL_FlushEvents[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FlushEvents[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FlushEvents, 2, ReturnTypes_SDL_FlushEvents, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FlushEvents"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FlushEvents, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FlushEvents */

  /* EXPORT WasmEdgeSDL_SDL_PollEvent */
  /* bool SDL_PollEvent(SDL_Event *event) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PollEvent[1], ReturnTypes_SDL_PollEvent[1];
  ParamTypes_SDL_PollEvent[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PollEvent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PollEvent, 1, ReturnTypes_SDL_PollEvent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PollEvent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PollEvent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PollEvent */

  /* EXPORT WasmEdgeSDL_SDL_WaitEvent */
  /* bool SDL_WaitEvent(SDL_Event *event) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WaitEvent[1], ReturnTypes_SDL_WaitEvent[1];
  ParamTypes_SDL_WaitEvent[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WaitEvent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WaitEvent, 1, ReturnTypes_SDL_WaitEvent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WaitEvent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WaitEvent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WaitEvent */

  /* EXPORT WasmEdgeSDL_SDL_WaitEventTimeout */
  /* bool SDL_WaitEventTimeout(SDL_Event *event, Sint32 timeoutMS) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WaitEventTimeout[2], ReturnTypes_SDL_WaitEventTimeout[1];
  ParamTypes_SDL_WaitEventTimeout[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WaitEventTimeout[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WaitEventTimeout[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WaitEventTimeout, 2, ReturnTypes_SDL_WaitEventTimeout, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WaitEventTimeout"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WaitEventTimeout, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WaitEventTimeout */

  /* EXPORT WasmEdgeSDL_SDL_PushEvent */
  /* bool SDL_PushEvent(SDL_Event *event) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PushEvent[1], ReturnTypes_SDL_PushEvent[1];
  ParamTypes_SDL_PushEvent[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PushEvent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PushEvent, 1, ReturnTypes_SDL_PushEvent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PushEvent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PushEvent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PushEvent */

  /* EXPORT WasmEdgeSDL_SDL_SetEventFilter */
  /* void SDL_SetEventFilter(SDL_EventFilter filter, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetEventFilter[2], ReturnTypes_SDL_SetEventFilter[1];
  ParamTypes_SDL_SetEventFilter[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetEventFilter[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetEventFilter, 2, ReturnTypes_SDL_SetEventFilter, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetEventFilter"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetEventFilter, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetEventFilter */

  /* EXPORT WasmEdgeSDL_SDL_GetEventFilter */
  /* bool SDL_GetEventFilter(SDL_EventFilter *filter, void **userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetEventFilter[2], ReturnTypes_SDL_GetEventFilter[1];
  ParamTypes_SDL_GetEventFilter[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetEventFilter[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetEventFilter[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetEventFilter, 2, ReturnTypes_SDL_GetEventFilter, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetEventFilter"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetEventFilter, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetEventFilter */

  /* EXPORT WasmEdgeSDL_SDL_AddEventWatch */
  /* bool SDL_AddEventWatch(SDL_EventFilter filter, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddEventWatch[2], ReturnTypes_SDL_AddEventWatch[1];
  ParamTypes_SDL_AddEventWatch[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddEventWatch[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddEventWatch[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddEventWatch, 2, ReturnTypes_SDL_AddEventWatch, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddEventWatch"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddEventWatch, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddEventWatch */

  /* EXPORT WasmEdgeSDL_SDL_RemoveEventWatch */
  /* void SDL_RemoveEventWatch(SDL_EventFilter filter, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RemoveEventWatch[2], ReturnTypes_SDL_RemoveEventWatch[1];
  ParamTypes_SDL_RemoveEventWatch[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RemoveEventWatch[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RemoveEventWatch, 2, ReturnTypes_SDL_RemoveEventWatch, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RemoveEventWatch"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RemoveEventWatch, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RemoveEventWatch */

  /* EXPORT WasmEdgeSDL_SDL_FilterEvents */
  /* void SDL_FilterEvents(SDL_EventFilter filter, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FilterEvents[2], ReturnTypes_SDL_FilterEvents[1];
  ParamTypes_SDL_FilterEvents[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FilterEvents[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FilterEvents, 2, ReturnTypes_SDL_FilterEvents, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FilterEvents"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FilterEvents, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FilterEvents */

  /* EXPORT WasmEdgeSDL_SDL_SetEventEnabled */
  /* void SDL_SetEventEnabled(Uint32 type, bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetEventEnabled[2], ReturnTypes_SDL_SetEventEnabled[1];
  ParamTypes_SDL_SetEventEnabled[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetEventEnabled[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetEventEnabled, 2, ReturnTypes_SDL_SetEventEnabled, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetEventEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetEventEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetEventEnabled */

  /* EXPORT WasmEdgeSDL_SDL_EventEnabled */
  /* bool SDL_EventEnabled(Uint32 type) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EventEnabled[1], ReturnTypes_SDL_EventEnabled[1];
  ParamTypes_SDL_EventEnabled[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_EventEnabled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EventEnabled, 1, ReturnTypes_SDL_EventEnabled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EventEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EventEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EventEnabled */

  /* EXPORT WasmEdgeSDL_SDL_RegisterEvents */
  /* Uint32 SDL_RegisterEvents(int numevents) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RegisterEvents[1], ReturnTypes_SDL_RegisterEvents[1];
  ParamTypes_SDL_RegisterEvents[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RegisterEvents[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RegisterEvents, 1, ReturnTypes_SDL_RegisterEvents, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RegisterEvents"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RegisterEvents, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RegisterEvents */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowFromEvent */
  /* SDL_Window * SDL_GetWindowFromEvent(const SDL_Event *event) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowFromEvent[1], ReturnTypes_SDL_GetWindowFromEvent[1];
  ParamTypes_SDL_GetWindowFromEvent[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowFromEvent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowFromEvent, 1, ReturnTypes_SDL_GetWindowFromEvent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowFromEvent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowFromEvent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowFromEvent */

  /* EXPORT WasmEdgeSDL_SDL_GetBasePath */
  /* const char * SDL_GetBasePath(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetBasePath[1], ReturnTypes_SDL_GetBasePath[1];

  ReturnTypes_SDL_GetBasePath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetBasePath, 0, ReturnTypes_SDL_GetBasePath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetBasePath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetBasePath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetBasePath */

  /* EXPORT WasmEdgeSDL_SDL_GetPrefPath */
  /* char * SDL_GetPrefPath(const char *org, const char *app) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPrefPath[2], ReturnTypes_SDL_GetPrefPath[1];
  ParamTypes_SDL_GetPrefPath[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPrefPath[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPrefPath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPrefPath, 2, ReturnTypes_SDL_GetPrefPath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPrefPath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPrefPath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPrefPath */

  /* EXPORT WasmEdgeSDL_SDL_GetUserFolder */
  /* const char * SDL_GetUserFolder(SDL_Folder folder) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetUserFolder[1], ReturnTypes_SDL_GetUserFolder[1];
  ParamTypes_SDL_GetUserFolder[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetUserFolder[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetUserFolder, 1, ReturnTypes_SDL_GetUserFolder, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetUserFolder"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetUserFolder, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetUserFolder */

  /* EXPORT WasmEdgeSDL_SDL_CreateDirectory */
  /* bool SDL_CreateDirectory(const char *path) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateDirectory[1], ReturnTypes_SDL_CreateDirectory[1];
  ParamTypes_SDL_CreateDirectory[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateDirectory[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateDirectory, 1, ReturnTypes_SDL_CreateDirectory, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateDirectory"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateDirectory, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateDirectory */

  /* EXPORT WasmEdgeSDL_SDL_EnumerateDirectory */
  /* bool SDL_EnumerateDirectory(const char *path, SDL_EnumerateDirectoryCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EnumerateDirectory[3], ReturnTypes_SDL_EnumerateDirectory[1];
  ParamTypes_SDL_EnumerateDirectory[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnumerateDirectory[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnumerateDirectory[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_EnumerateDirectory[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EnumerateDirectory, 3, ReturnTypes_SDL_EnumerateDirectory, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EnumerateDirectory"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EnumerateDirectory, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EnumerateDirectory */

  /* EXPORT WasmEdgeSDL_SDL_RemovePath */
  /* bool SDL_RemovePath(const char *path) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RemovePath[1], ReturnTypes_SDL_RemovePath[1];
  ParamTypes_SDL_RemovePath[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RemovePath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RemovePath, 1, ReturnTypes_SDL_RemovePath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RemovePath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RemovePath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RemovePath */

  /* EXPORT WasmEdgeSDL_SDL_RenamePath */
  /* bool SDL_RenamePath(const char *oldpath, const char *newpath) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenamePath[2], ReturnTypes_SDL_RenamePath[1];
  ParamTypes_SDL_RenamePath[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenamePath[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenamePath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenamePath, 2, ReturnTypes_SDL_RenamePath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenamePath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenamePath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenamePath */

  /* EXPORT WasmEdgeSDL_SDL_CopyFile */
  /* bool SDL_CopyFile(const char *oldpath, const char *newpath) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CopyFile[2], ReturnTypes_SDL_CopyFile[1];
  ParamTypes_SDL_CopyFile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CopyFile[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CopyFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CopyFile, 2, ReturnTypes_SDL_CopyFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CopyFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CopyFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CopyFile */

  /* EXPORT WasmEdgeSDL_SDL_GetPathInfo */
  /* bool SDL_GetPathInfo(const char *path, SDL_PathInfo *info) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPathInfo[2], ReturnTypes_SDL_GetPathInfo[1];
  ParamTypes_SDL_GetPathInfo[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPathInfo[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPathInfo[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPathInfo, 2, ReturnTypes_SDL_GetPathInfo, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPathInfo"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPathInfo, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPathInfo */

  /* EXPORT WasmEdgeSDL_SDL_GlobDirectory */
  /* char ** SDL_GlobDirectory(const char *path, const char *pattern, SDL_GlobFlags flags, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GlobDirectory[4], ReturnTypes_SDL_GlobDirectory[1];
  ParamTypes_SDL_GlobDirectory[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GlobDirectory[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GlobDirectory[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GlobDirectory[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GlobDirectory[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GlobDirectory, 4, ReturnTypes_SDL_GlobDirectory, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GlobDirectory"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GlobDirectory, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GlobDirectory */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentDirectory */
  /* char * SDL_GetCurrentDirectory(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentDirectory[1], ReturnTypes_SDL_GetCurrentDirectory[1];

  ReturnTypes_SDL_GetCurrentDirectory[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentDirectory, 0, ReturnTypes_SDL_GetCurrentDirectory, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentDirectory"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentDirectory, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentDirectory */

  /* EXPORT WasmEdgeSDL_SDL_AddGamepadMapping */
  /* int SDL_AddGamepadMapping(const char *mapping) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddGamepadMapping[1], ReturnTypes_SDL_AddGamepadMapping[1];
  ParamTypes_SDL_AddGamepadMapping[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddGamepadMapping[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddGamepadMapping, 1, ReturnTypes_SDL_AddGamepadMapping, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddGamepadMapping"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddGamepadMapping, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddGamepadMapping */

  /* EXPORT WasmEdgeSDL_SDL_AddGamepadMappingsFromIO */
  /* int SDL_AddGamepadMappingsFromIO(SDL_IOStream *src, bool closeio) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddGamepadMappingsFromIO[2], ReturnTypes_SDL_AddGamepadMappingsFromIO[1];
  ParamTypes_SDL_AddGamepadMappingsFromIO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddGamepadMappingsFromIO[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddGamepadMappingsFromIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddGamepadMappingsFromIO, 2, ReturnTypes_SDL_AddGamepadMappingsFromIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddGamepadMappingsFromIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddGamepadMappingsFromIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddGamepadMappingsFromIO */

  /* EXPORT WasmEdgeSDL_SDL_AddGamepadMappingsFromFile */
  /* int SDL_AddGamepadMappingsFromFile(const char *file) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddGamepadMappingsFromFile[1], ReturnTypes_SDL_AddGamepadMappingsFromFile[1];
  ParamTypes_SDL_AddGamepadMappingsFromFile[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddGamepadMappingsFromFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddGamepadMappingsFromFile, 1, ReturnTypes_SDL_AddGamepadMappingsFromFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddGamepadMappingsFromFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddGamepadMappingsFromFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddGamepadMappingsFromFile */

  /* EXPORT WasmEdgeSDL_SDL_ReloadGamepadMappings */
  /* bool SDL_ReloadGamepadMappings(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReloadGamepadMappings[1], ReturnTypes_SDL_ReloadGamepadMappings[1];

  ReturnTypes_SDL_ReloadGamepadMappings[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReloadGamepadMappings, 0, ReturnTypes_SDL_ReloadGamepadMappings, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReloadGamepadMappings"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReloadGamepadMappings, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReloadGamepadMappings */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadMappings */
  /* char ** SDL_GetGamepadMappings(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadMappings[1], ReturnTypes_SDL_GetGamepadMappings[1];
  ParamTypes_SDL_GetGamepadMappings[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadMappings[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadMappings, 1, ReturnTypes_SDL_GetGamepadMappings, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadMappings"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadMappings, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadMappings */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadMappingForGUID */
  /* char * SDL_GetGamepadMappingForGUID(SDL_GUID guid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadMappingForGUID[1], ReturnTypes_SDL_GetGamepadMappingForGUID[1];
  ParamTypes_SDL_GetGamepadMappingForGUID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadMappingForGUID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadMappingForGUID, 1, ReturnTypes_SDL_GetGamepadMappingForGUID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadMappingForGUID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadMappingForGUID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadMappingForGUID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadMapping */
  /* char * SDL_GetGamepadMapping(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadMapping[1], ReturnTypes_SDL_GetGamepadMapping[1];
  ParamTypes_SDL_GetGamepadMapping[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadMapping[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadMapping, 1, ReturnTypes_SDL_GetGamepadMapping, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadMapping"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadMapping, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadMapping */

  /* EXPORT WasmEdgeSDL_SDL_SetGamepadMapping */
  /* bool SDL_SetGamepadMapping(SDL_JoystickID instance_id, const char *mapping) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetGamepadMapping[2], ReturnTypes_SDL_SetGamepadMapping[1];
  ParamTypes_SDL_SetGamepadMapping[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetGamepadMapping[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetGamepadMapping[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetGamepadMapping, 2, ReturnTypes_SDL_SetGamepadMapping, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetGamepadMapping"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetGamepadMapping, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetGamepadMapping */

  /* EXPORT WasmEdgeSDL_SDL_HasGamepad */
  /* bool SDL_HasGamepad(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasGamepad[1], ReturnTypes_SDL_HasGamepad[1];

  ReturnTypes_SDL_HasGamepad[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasGamepad, 0, ReturnTypes_SDL_HasGamepad, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasGamepad"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasGamepad, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasGamepad */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepads */
  /* SDL_JoystickID * SDL_GetGamepads(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepads[1], ReturnTypes_SDL_GetGamepads[1];
  ParamTypes_SDL_GetGamepads[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepads[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepads, 1, ReturnTypes_SDL_GetGamepads, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepads"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepads, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepads */

  /* EXPORT WasmEdgeSDL_SDL_IsGamepad */
  /* bool SDL_IsGamepad(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsGamepad[1], ReturnTypes_SDL_IsGamepad[1];
  ParamTypes_SDL_IsGamepad[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IsGamepad[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsGamepad, 1, ReturnTypes_SDL_IsGamepad, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsGamepad"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsGamepad, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsGamepad */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadNameForID */
  /* const char * SDL_GetGamepadNameForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadNameForID[1], ReturnTypes_SDL_GetGamepadNameForID[1];
  ParamTypes_SDL_GetGamepadNameForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadNameForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadNameForID, 1, ReturnTypes_SDL_GetGamepadNameForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadNameForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadNameForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadNameForID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadPathForID */
  /* const char * SDL_GetGamepadPathForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadPathForID[1], ReturnTypes_SDL_GetGamepadPathForID[1];
  ParamTypes_SDL_GetGamepadPathForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadPathForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadPathForID, 1, ReturnTypes_SDL_GetGamepadPathForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadPathForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadPathForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadPathForID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadPlayerIndexForID */
  /* int SDL_GetGamepadPlayerIndexForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadPlayerIndexForID[1], ReturnTypes_SDL_GetGamepadPlayerIndexForID[1];
  ParamTypes_SDL_GetGamepadPlayerIndexForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadPlayerIndexForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadPlayerIndexForID, 1, ReturnTypes_SDL_GetGamepadPlayerIndexForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadPlayerIndexForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadPlayerIndexForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadPlayerIndexForID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadGUIDForID */
  /* SDL_GUID SDL_GetGamepadGUIDForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadGUIDForID[1], ReturnTypes_SDL_GetGamepadGUIDForID[1];
  ParamTypes_SDL_GetGamepadGUIDForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadGUIDForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadGUIDForID, 1, ReturnTypes_SDL_GetGamepadGUIDForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadGUIDForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadGUIDForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadGUIDForID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadVendorForID */
  /* Uint16 SDL_GetGamepadVendorForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadVendorForID[1], ReturnTypes_SDL_GetGamepadVendorForID[1];
  ParamTypes_SDL_GetGamepadVendorForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadVendorForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadVendorForID, 1, ReturnTypes_SDL_GetGamepadVendorForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadVendorForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadVendorForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadVendorForID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadProductForID */
  /* Uint16 SDL_GetGamepadProductForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadProductForID[1], ReturnTypes_SDL_GetGamepadProductForID[1];
  ParamTypes_SDL_GetGamepadProductForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadProductForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadProductForID, 1, ReturnTypes_SDL_GetGamepadProductForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadProductForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadProductForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadProductForID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadProductVersionForID */
  /* Uint16 SDL_GetGamepadProductVersionForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadProductVersionForID[1], ReturnTypes_SDL_GetGamepadProductVersionForID[1];
  ParamTypes_SDL_GetGamepadProductVersionForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadProductVersionForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadProductVersionForID, 1, ReturnTypes_SDL_GetGamepadProductVersionForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadProductVersionForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadProductVersionForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadProductVersionForID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadTypeForID */
  /* SDL_GamepadType SDL_GetGamepadTypeForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadTypeForID[1], ReturnTypes_SDL_GetGamepadTypeForID[1];
  ParamTypes_SDL_GetGamepadTypeForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadTypeForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadTypeForID, 1, ReturnTypes_SDL_GetGamepadTypeForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadTypeForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadTypeForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadTypeForID */

  /* EXPORT WasmEdgeSDL_SDL_GetRealGamepadTypeForID */
  /* SDL_GamepadType SDL_GetRealGamepadTypeForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRealGamepadTypeForID[1], ReturnTypes_SDL_GetRealGamepadTypeForID[1];
  ParamTypes_SDL_GetRealGamepadTypeForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRealGamepadTypeForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRealGamepadTypeForID, 1, ReturnTypes_SDL_GetRealGamepadTypeForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRealGamepadTypeForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRealGamepadTypeForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRealGamepadTypeForID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadMappingForID */
  /* char * SDL_GetGamepadMappingForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadMappingForID[1], ReturnTypes_SDL_GetGamepadMappingForID[1];
  ParamTypes_SDL_GetGamepadMappingForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadMappingForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadMappingForID, 1, ReturnTypes_SDL_GetGamepadMappingForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadMappingForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadMappingForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadMappingForID */

  /* EXPORT WasmEdgeSDL_SDL_OpenGamepad */
  /* SDL_Gamepad * SDL_OpenGamepad(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenGamepad[1], ReturnTypes_SDL_OpenGamepad[1];
  ParamTypes_SDL_OpenGamepad[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenGamepad[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenGamepad, 1, ReturnTypes_SDL_OpenGamepad, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenGamepad"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenGamepad, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenGamepad */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadFromID */
  /* SDL_Gamepad * SDL_GetGamepadFromID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadFromID[1], ReturnTypes_SDL_GetGamepadFromID[1];
  ParamTypes_SDL_GetGamepadFromID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadFromID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadFromID, 1, ReturnTypes_SDL_GetGamepadFromID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadFromID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadFromID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadFromID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadFromPlayerIndex */
  /* SDL_Gamepad * SDL_GetGamepadFromPlayerIndex(int player_index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadFromPlayerIndex[1], ReturnTypes_SDL_GetGamepadFromPlayerIndex[1];
  ParamTypes_SDL_GetGamepadFromPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadFromPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadFromPlayerIndex, 1, ReturnTypes_SDL_GetGamepadFromPlayerIndex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadFromPlayerIndex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadFromPlayerIndex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadFromPlayerIndex */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadProperties */
  /* SDL_PropertiesID SDL_GetGamepadProperties(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadProperties[1], ReturnTypes_SDL_GetGamepadProperties[1];
  ParamTypes_SDL_GetGamepadProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadProperties, 1, ReturnTypes_SDL_GetGamepadProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadID */
  /* SDL_JoystickID SDL_GetGamepadID(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadID[1], ReturnTypes_SDL_GetGamepadID[1];
  ParamTypes_SDL_GetGamepadID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadID, 1, ReturnTypes_SDL_GetGamepadID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadID */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadName */
  /* const char * SDL_GetGamepadName(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadName[1], ReturnTypes_SDL_GetGamepadName[1];
  ParamTypes_SDL_GetGamepadName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadName, 1, ReturnTypes_SDL_GetGamepadName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadName */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadPath */
  /* const char * SDL_GetGamepadPath(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadPath[1], ReturnTypes_SDL_GetGamepadPath[1];
  ParamTypes_SDL_GetGamepadPath[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadPath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadPath, 1, ReturnTypes_SDL_GetGamepadPath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadPath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadPath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadPath */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadType */
  /* SDL_GamepadType SDL_GetGamepadType(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadType[1], ReturnTypes_SDL_GetGamepadType[1];
  ParamTypes_SDL_GetGamepadType[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadType, 1, ReturnTypes_SDL_GetGamepadType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadType */

  /* EXPORT WasmEdgeSDL_SDL_GetRealGamepadType */
  /* SDL_GamepadType SDL_GetRealGamepadType(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRealGamepadType[1], ReturnTypes_SDL_GetRealGamepadType[1];
  ParamTypes_SDL_GetRealGamepadType[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRealGamepadType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRealGamepadType, 1, ReturnTypes_SDL_GetRealGamepadType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRealGamepadType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRealGamepadType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRealGamepadType */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadPlayerIndex */
  /* int SDL_GetGamepadPlayerIndex(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadPlayerIndex[1], ReturnTypes_SDL_GetGamepadPlayerIndex[1];
  ParamTypes_SDL_GetGamepadPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadPlayerIndex, 1, ReturnTypes_SDL_GetGamepadPlayerIndex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadPlayerIndex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadPlayerIndex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadPlayerIndex */

  /* EXPORT WasmEdgeSDL_SDL_SetGamepadPlayerIndex */
  /* bool SDL_SetGamepadPlayerIndex(SDL_Gamepad *gamepad, int player_index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetGamepadPlayerIndex[2], ReturnTypes_SDL_SetGamepadPlayerIndex[1];
  ParamTypes_SDL_SetGamepadPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetGamepadPlayerIndex[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetGamepadPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetGamepadPlayerIndex, 2, ReturnTypes_SDL_SetGamepadPlayerIndex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetGamepadPlayerIndex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetGamepadPlayerIndex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetGamepadPlayerIndex */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadVendor */
  /* Uint16 SDL_GetGamepadVendor(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadVendor[1], ReturnTypes_SDL_GetGamepadVendor[1];
  ParamTypes_SDL_GetGamepadVendor[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadVendor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadVendor, 1, ReturnTypes_SDL_GetGamepadVendor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadVendor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadVendor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadVendor */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadProduct */
  /* Uint16 SDL_GetGamepadProduct(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadProduct[1], ReturnTypes_SDL_GetGamepadProduct[1];
  ParamTypes_SDL_GetGamepadProduct[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadProduct[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadProduct, 1, ReturnTypes_SDL_GetGamepadProduct, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadProduct"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadProduct, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadProduct */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadProductVersion */
  /* Uint16 SDL_GetGamepadProductVersion(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadProductVersion[1], ReturnTypes_SDL_GetGamepadProductVersion[1];
  ParamTypes_SDL_GetGamepadProductVersion[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadProductVersion[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadProductVersion, 1, ReturnTypes_SDL_GetGamepadProductVersion, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadProductVersion"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadProductVersion, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadProductVersion */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadFirmwareVersion */
  /* Uint16 SDL_GetGamepadFirmwareVersion(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadFirmwareVersion[1], ReturnTypes_SDL_GetGamepadFirmwareVersion[1];
  ParamTypes_SDL_GetGamepadFirmwareVersion[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadFirmwareVersion[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadFirmwareVersion, 1, ReturnTypes_SDL_GetGamepadFirmwareVersion, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadFirmwareVersion"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadFirmwareVersion, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadFirmwareVersion */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadSerial */
  /* const char * SDL_GetGamepadSerial(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadSerial[1], ReturnTypes_SDL_GetGamepadSerial[1];
  ParamTypes_SDL_GetGamepadSerial[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadSerial[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadSerial, 1, ReturnTypes_SDL_GetGamepadSerial, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadSerial"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadSerial, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadSerial */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadSteamHandle */
  /* Uint64 SDL_GetGamepadSteamHandle(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadSteamHandle[1], ReturnTypes_SDL_GetGamepadSteamHandle[1];
  ParamTypes_SDL_GetGamepadSteamHandle[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadSteamHandle[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadSteamHandle, 1, ReturnTypes_SDL_GetGamepadSteamHandle, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadSteamHandle"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadSteamHandle, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadSteamHandle */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadConnectionState */
  /* SDL_JoystickConnectionState SDL_GetGamepadConnectionState(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadConnectionState[1], ReturnTypes_SDL_GetGamepadConnectionState[1];
  ParamTypes_SDL_GetGamepadConnectionState[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadConnectionState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadConnectionState, 1, ReturnTypes_SDL_GetGamepadConnectionState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadConnectionState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadConnectionState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadConnectionState */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadPowerInfo */
  /* SDL_PowerState SDL_GetGamepadPowerInfo(SDL_Gamepad *gamepad, int *percent) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadPowerInfo[2], ReturnTypes_SDL_GetGamepadPowerInfo[1];
  ParamTypes_SDL_GetGamepadPowerInfo[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadPowerInfo[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadPowerInfo[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadPowerInfo, 2, ReturnTypes_SDL_GetGamepadPowerInfo, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadPowerInfo"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadPowerInfo, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadPowerInfo */

  /* EXPORT WasmEdgeSDL_SDL_GamepadConnected */
  /* bool SDL_GamepadConnected(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GamepadConnected[1], ReturnTypes_SDL_GamepadConnected[1];
  ParamTypes_SDL_GamepadConnected[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GamepadConnected[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GamepadConnected, 1, ReturnTypes_SDL_GamepadConnected, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GamepadConnected"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GamepadConnected, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GamepadConnected */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadJoystick */
  /* SDL_Joystick * SDL_GetGamepadJoystick(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadJoystick[1], ReturnTypes_SDL_GetGamepadJoystick[1];
  ParamTypes_SDL_GetGamepadJoystick[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadJoystick[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadJoystick, 1, ReturnTypes_SDL_GetGamepadJoystick, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadJoystick"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadJoystick, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadJoystick */

  /* EXPORT WasmEdgeSDL_SDL_SetGamepadEventsEnabled */
  /* void SDL_SetGamepadEventsEnabled(bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetGamepadEventsEnabled[1], ReturnTypes_SDL_SetGamepadEventsEnabled[1];
  ParamTypes_SDL_SetGamepadEventsEnabled[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetGamepadEventsEnabled, 1, ReturnTypes_SDL_SetGamepadEventsEnabled, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetGamepadEventsEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetGamepadEventsEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetGamepadEventsEnabled */

  /* EXPORT WasmEdgeSDL_SDL_GamepadEventsEnabled */
  /* bool SDL_GamepadEventsEnabled(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GamepadEventsEnabled[1], ReturnTypes_SDL_GamepadEventsEnabled[1];

  ReturnTypes_SDL_GamepadEventsEnabled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GamepadEventsEnabled, 0, ReturnTypes_SDL_GamepadEventsEnabled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GamepadEventsEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GamepadEventsEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GamepadEventsEnabled */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadBindings */
  /* SDL_GamepadBinding ** SDL_GetGamepadBindings(SDL_Gamepad *gamepad, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadBindings[2], ReturnTypes_SDL_GetGamepadBindings[1];
  ParamTypes_SDL_GetGamepadBindings[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadBindings[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadBindings[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadBindings, 2, ReturnTypes_SDL_GetGamepadBindings, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadBindings"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadBindings, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadBindings */

  /* EXPORT WasmEdgeSDL_SDL_UpdateGamepads */
  /* void SDL_UpdateGamepads(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UpdateGamepads[1], ReturnTypes_SDL_UpdateGamepads[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UpdateGamepads, 0, ReturnTypes_SDL_UpdateGamepads, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UpdateGamepads"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UpdateGamepads, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UpdateGamepads */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadTypeFromString */
  /* SDL_GamepadType SDL_GetGamepadTypeFromString(const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadTypeFromString[1], ReturnTypes_SDL_GetGamepadTypeFromString[1];
  ParamTypes_SDL_GetGamepadTypeFromString[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadTypeFromString[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadTypeFromString, 1, ReturnTypes_SDL_GetGamepadTypeFromString, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadTypeFromString"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadTypeFromString, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadTypeFromString */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadStringForType */
  /* const char * SDL_GetGamepadStringForType(SDL_GamepadType type) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadStringForType[1], ReturnTypes_SDL_GetGamepadStringForType[1];
  ParamTypes_SDL_GetGamepadStringForType[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadStringForType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadStringForType, 1, ReturnTypes_SDL_GetGamepadStringForType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadStringForType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadStringForType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadStringForType */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadAxisFromString */
  /* SDL_GamepadAxis SDL_GetGamepadAxisFromString(const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadAxisFromString[1], ReturnTypes_SDL_GetGamepadAxisFromString[1];
  ParamTypes_SDL_GetGamepadAxisFromString[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadAxisFromString[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadAxisFromString, 1, ReturnTypes_SDL_GetGamepadAxisFromString, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadAxisFromString"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadAxisFromString, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadAxisFromString */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadStringForAxis */
  /* const char * SDL_GetGamepadStringForAxis(SDL_GamepadAxis axis) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadStringForAxis[1], ReturnTypes_SDL_GetGamepadStringForAxis[1];
  ParamTypes_SDL_GetGamepadStringForAxis[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadStringForAxis[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadStringForAxis, 1, ReturnTypes_SDL_GetGamepadStringForAxis, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadStringForAxis"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadStringForAxis, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadStringForAxis */

  /* EXPORT WasmEdgeSDL_SDL_GamepadHasAxis */
  /* bool SDL_GamepadHasAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GamepadHasAxis[2], ReturnTypes_SDL_GamepadHasAxis[1];
  ParamTypes_SDL_GamepadHasAxis[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GamepadHasAxis[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GamepadHasAxis[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GamepadHasAxis, 2, ReturnTypes_SDL_GamepadHasAxis, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GamepadHasAxis"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GamepadHasAxis, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GamepadHasAxis */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadAxis */
  /* Sint16 SDL_GetGamepadAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadAxis[2], ReturnTypes_SDL_GetGamepadAxis[1];
  ParamTypes_SDL_GetGamepadAxis[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadAxis[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadAxis[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadAxis, 2, ReturnTypes_SDL_GetGamepadAxis, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadAxis"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadAxis, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadAxis */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadButtonFromString */
  /* SDL_GamepadButton SDL_GetGamepadButtonFromString(const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadButtonFromString[1], ReturnTypes_SDL_GetGamepadButtonFromString[1];
  ParamTypes_SDL_GetGamepadButtonFromString[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadButtonFromString[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadButtonFromString, 1, ReturnTypes_SDL_GetGamepadButtonFromString, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadButtonFromString"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadButtonFromString, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadButtonFromString */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadStringForButton */
  /* const char * SDL_GetGamepadStringForButton(SDL_GamepadButton button) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadStringForButton[1], ReturnTypes_SDL_GetGamepadStringForButton[1];
  ParamTypes_SDL_GetGamepadStringForButton[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadStringForButton[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadStringForButton, 1, ReturnTypes_SDL_GetGamepadStringForButton, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadStringForButton"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadStringForButton, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadStringForButton */

  /* EXPORT WasmEdgeSDL_SDL_GamepadHasButton */
  /* bool SDL_GamepadHasButton(SDL_Gamepad *gamepad, SDL_GamepadButton button) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GamepadHasButton[2], ReturnTypes_SDL_GamepadHasButton[1];
  ParamTypes_SDL_GamepadHasButton[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GamepadHasButton[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GamepadHasButton[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GamepadHasButton, 2, ReturnTypes_SDL_GamepadHasButton, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GamepadHasButton"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GamepadHasButton, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GamepadHasButton */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadButton */
  /* bool SDL_GetGamepadButton(SDL_Gamepad *gamepad, SDL_GamepadButton button) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadButton[2], ReturnTypes_SDL_GetGamepadButton[1];
  ParamTypes_SDL_GetGamepadButton[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadButton[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadButton[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadButton, 2, ReturnTypes_SDL_GetGamepadButton, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadButton"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadButton, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadButton */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadButtonLabelForType */
  /* SDL_GamepadButtonLabel SDL_GetGamepadButtonLabelForType(SDL_GamepadType type, SDL_GamepadButton button) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadButtonLabelForType[2], ReturnTypes_SDL_GetGamepadButtonLabelForType[1];
  ParamTypes_SDL_GetGamepadButtonLabelForType[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadButtonLabelForType[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadButtonLabelForType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadButtonLabelForType, 2, ReturnTypes_SDL_GetGamepadButtonLabelForType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadButtonLabelForType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadButtonLabelForType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadButtonLabelForType */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadButtonLabel */
  /* SDL_GamepadButtonLabel SDL_GetGamepadButtonLabel(SDL_Gamepad *gamepad, SDL_GamepadButton button) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadButtonLabel[2], ReturnTypes_SDL_GetGamepadButtonLabel[1];
  ParamTypes_SDL_GetGamepadButtonLabel[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadButtonLabel[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadButtonLabel[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadButtonLabel, 2, ReturnTypes_SDL_GetGamepadButtonLabel, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadButtonLabel"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadButtonLabel, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadButtonLabel */

  /* EXPORT WasmEdgeSDL_SDL_GetNumGamepadTouchpads */
  /* int SDL_GetNumGamepadTouchpads(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumGamepadTouchpads[1], ReturnTypes_SDL_GetNumGamepadTouchpads[1];
  ParamTypes_SDL_GetNumGamepadTouchpads[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNumGamepadTouchpads[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumGamepadTouchpads, 1, ReturnTypes_SDL_GetNumGamepadTouchpads, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumGamepadTouchpads"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumGamepadTouchpads, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumGamepadTouchpads */

  /* EXPORT WasmEdgeSDL_SDL_GetNumGamepadTouchpadFingers */
  /* int SDL_GetNumGamepadTouchpadFingers(SDL_Gamepad *gamepad, int touchpad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumGamepadTouchpadFingers[2], ReturnTypes_SDL_GetNumGamepadTouchpadFingers[1];
  ParamTypes_SDL_GetNumGamepadTouchpadFingers[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetNumGamepadTouchpadFingers[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNumGamepadTouchpadFingers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumGamepadTouchpadFingers, 2, ReturnTypes_SDL_GetNumGamepadTouchpadFingers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumGamepadTouchpadFingers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumGamepadTouchpadFingers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumGamepadTouchpadFingers */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadTouchpadFinger */
  /* bool SDL_GetGamepadTouchpadFinger(SDL_Gamepad *gamepad, int touchpad, int finger, bool *down, float *x, float *y, float *pressure) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadTouchpadFinger[7], ReturnTypes_SDL_GetGamepadTouchpadFinger[1];
  ParamTypes_SDL_GetGamepadTouchpadFinger[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadTouchpadFinger[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadTouchpadFinger[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadTouchpadFinger[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadTouchpadFinger[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadTouchpadFinger[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadTouchpadFinger[6] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadTouchpadFinger[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadTouchpadFinger, 7, ReturnTypes_SDL_GetGamepadTouchpadFinger, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadTouchpadFinger"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadTouchpadFinger, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadTouchpadFinger */

  /* EXPORT WasmEdgeSDL_SDL_GamepadHasSensor */
  /* bool SDL_GamepadHasSensor(SDL_Gamepad *gamepad, SDL_SensorType type) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GamepadHasSensor[2], ReturnTypes_SDL_GamepadHasSensor[1];
  ParamTypes_SDL_GamepadHasSensor[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GamepadHasSensor[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GamepadHasSensor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GamepadHasSensor, 2, ReturnTypes_SDL_GamepadHasSensor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GamepadHasSensor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GamepadHasSensor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GamepadHasSensor */

  /* EXPORT WasmEdgeSDL_SDL_SetGamepadSensorEnabled */
  /* bool SDL_SetGamepadSensorEnabled(SDL_Gamepad *gamepad, SDL_SensorType type, bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetGamepadSensorEnabled[3], ReturnTypes_SDL_SetGamepadSensorEnabled[1];
  ParamTypes_SDL_SetGamepadSensorEnabled[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetGamepadSensorEnabled[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetGamepadSensorEnabled[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetGamepadSensorEnabled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetGamepadSensorEnabled, 3, ReturnTypes_SDL_SetGamepadSensorEnabled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetGamepadSensorEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetGamepadSensorEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetGamepadSensorEnabled */

  /* EXPORT WasmEdgeSDL_SDL_GamepadSensorEnabled */
  /* bool SDL_GamepadSensorEnabled(SDL_Gamepad *gamepad, SDL_SensorType type) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GamepadSensorEnabled[2], ReturnTypes_SDL_GamepadSensorEnabled[1];
  ParamTypes_SDL_GamepadSensorEnabled[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GamepadSensorEnabled[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GamepadSensorEnabled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GamepadSensorEnabled, 2, ReturnTypes_SDL_GamepadSensorEnabled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GamepadSensorEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GamepadSensorEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GamepadSensorEnabled */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadSensorDataRate */
  /* float SDL_GetGamepadSensorDataRate(SDL_Gamepad *gamepad, SDL_SensorType type) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadSensorDataRate[2], ReturnTypes_SDL_GetGamepadSensorDataRate[1];
  ParamTypes_SDL_GetGamepadSensorDataRate[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadSensorDataRate[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadSensorDataRate[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadSensorDataRate, 2, ReturnTypes_SDL_GetGamepadSensorDataRate, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadSensorDataRate"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadSensorDataRate, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadSensorDataRate */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadSensorData */
  /* bool SDL_GetGamepadSensorData(SDL_Gamepad *gamepad, SDL_SensorType type, float *data, int num_values) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadSensorData[4], ReturnTypes_SDL_GetGamepadSensorData[1];
  ParamTypes_SDL_GetGamepadSensorData[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadSensorData[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadSensorData[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadSensorData[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadSensorData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadSensorData, 4, ReturnTypes_SDL_GetGamepadSensorData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadSensorData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadSensorData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadSensorData */

  /* EXPORT WasmEdgeSDL_SDL_RumbleGamepad */
  /* bool SDL_RumbleGamepad(SDL_Gamepad *gamepad, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RumbleGamepad[4], ReturnTypes_SDL_RumbleGamepad[1];
  ParamTypes_SDL_RumbleGamepad[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleGamepad[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleGamepad[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleGamepad[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RumbleGamepad[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RumbleGamepad, 4, ReturnTypes_SDL_RumbleGamepad, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RumbleGamepad"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RumbleGamepad, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RumbleGamepad */

  /* EXPORT WasmEdgeSDL_SDL_RumbleGamepadTriggers */
  /* bool SDL_RumbleGamepadTriggers(SDL_Gamepad *gamepad, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RumbleGamepadTriggers[4], ReturnTypes_SDL_RumbleGamepadTriggers[1];
  ParamTypes_SDL_RumbleGamepadTriggers[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleGamepadTriggers[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleGamepadTriggers[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleGamepadTriggers[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RumbleGamepadTriggers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RumbleGamepadTriggers, 4, ReturnTypes_SDL_RumbleGamepadTriggers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RumbleGamepadTriggers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RumbleGamepadTriggers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RumbleGamepadTriggers */

  /* EXPORT WasmEdgeSDL_SDL_SetGamepadLED */
  /* bool SDL_SetGamepadLED(SDL_Gamepad *gamepad, Uint8 red, Uint8 green, Uint8 blue) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetGamepadLED[4], ReturnTypes_SDL_SetGamepadLED[1];
  ParamTypes_SDL_SetGamepadLED[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetGamepadLED[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetGamepadLED[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetGamepadLED[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetGamepadLED[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetGamepadLED, 4, ReturnTypes_SDL_SetGamepadLED, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetGamepadLED"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetGamepadLED, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetGamepadLED */

  /* EXPORT WasmEdgeSDL_SDL_SendGamepadEffect */
  /* bool SDL_SendGamepadEffect(SDL_Gamepad *gamepad, const void *data, int size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SendGamepadEffect[3], ReturnTypes_SDL_SendGamepadEffect[1];
  ParamTypes_SDL_SendGamepadEffect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendGamepadEffect[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendGamepadEffect[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SendGamepadEffect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SendGamepadEffect, 3, ReturnTypes_SDL_SendGamepadEffect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SendGamepadEffect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SendGamepadEffect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SendGamepadEffect */

  /* EXPORT WasmEdgeSDL_SDL_CloseGamepad */
  /* void SDL_CloseGamepad(SDL_Gamepad *gamepad) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseGamepad[1], ReturnTypes_SDL_CloseGamepad[1];
  ParamTypes_SDL_CloseGamepad[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseGamepad, 1, ReturnTypes_SDL_CloseGamepad, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseGamepad"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseGamepad, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseGamepad */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadAppleSFSymbolsNameForButton */
  /* const char * SDL_GetGamepadAppleSFSymbolsNameForButton(SDL_Gamepad *gamepad, SDL_GamepadButton button) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadAppleSFSymbolsNameForButton[2], ReturnTypes_SDL_GetGamepadAppleSFSymbolsNameForButton[1];
  ParamTypes_SDL_GetGamepadAppleSFSymbolsNameForButton[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadAppleSFSymbolsNameForButton[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadAppleSFSymbolsNameForButton[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadAppleSFSymbolsNameForButton, 2, ReturnTypes_SDL_GetGamepadAppleSFSymbolsNameForButton, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadAppleSFSymbolsNameForButton"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadAppleSFSymbolsNameForButton, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadAppleSFSymbolsNameForButton */

  /* EXPORT WasmEdgeSDL_SDL_GetGamepadAppleSFSymbolsNameForAxis */
  /* const char * SDL_GetGamepadAppleSFSymbolsNameForAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGamepadAppleSFSymbolsNameForAxis[2], ReturnTypes_SDL_GetGamepadAppleSFSymbolsNameForAxis[1];
  ParamTypes_SDL_GetGamepadAppleSFSymbolsNameForAxis[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGamepadAppleSFSymbolsNameForAxis[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGamepadAppleSFSymbolsNameForAxis[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGamepadAppleSFSymbolsNameForAxis, 2, ReturnTypes_SDL_GetGamepadAppleSFSymbolsNameForAxis, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGamepadAppleSFSymbolsNameForAxis"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGamepadAppleSFSymbolsNameForAxis, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGamepadAppleSFSymbolsNameForAxis */

  /* EXPORT WasmEdgeSDL_SDL_DestroyGPUDevice */
  /* void SDL_DestroyGPUDevice(SDL_GPUDevice *device) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyGPUDevice[1], ReturnTypes_SDL_DestroyGPUDevice[1];
  ParamTypes_SDL_DestroyGPUDevice[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyGPUDevice, 1, ReturnTypes_SDL_DestroyGPUDevice, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyGPUDevice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyGPUDevice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyGPUDevice */

  /* EXPORT WasmEdgeSDL_SDL_GetNumGPUDrivers */
  /* int SDL_GetNumGPUDrivers(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumGPUDrivers[1], ReturnTypes_SDL_GetNumGPUDrivers[1];

  ReturnTypes_SDL_GetNumGPUDrivers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumGPUDrivers, 0, ReturnTypes_SDL_GetNumGPUDrivers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumGPUDrivers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumGPUDrivers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumGPUDrivers */

  /* EXPORT WasmEdgeSDL_SDL_GetGPUDriver */
  /* const char * SDL_GetGPUDriver(int index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGPUDriver[1], ReturnTypes_SDL_GetGPUDriver[1];
  ParamTypes_SDL_GetGPUDriver[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGPUDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGPUDriver, 1, ReturnTypes_SDL_GetGPUDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGPUDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGPUDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGPUDriver */

  /* EXPORT WasmEdgeSDL_SDL_GetGPUDeviceDriver */
  /* const char * SDL_GetGPUDeviceDriver(SDL_GPUDevice *device) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGPUDeviceDriver[1], ReturnTypes_SDL_GetGPUDeviceDriver[1];
  ParamTypes_SDL_GetGPUDeviceDriver[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGPUDeviceDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGPUDeviceDriver, 1, ReturnTypes_SDL_GetGPUDeviceDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGPUDeviceDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGPUDeviceDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGPUDeviceDriver */

  /* EXPORT WasmEdgeSDL_SDL_GetGPUShaderFormats */
  /* SDL_GPUShaderFormat SDL_GetGPUShaderFormats(SDL_GPUDevice *device) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGPUShaderFormats[1], ReturnTypes_SDL_GetGPUShaderFormats[1];
  ParamTypes_SDL_GetGPUShaderFormats[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGPUShaderFormats[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGPUShaderFormats, 1, ReturnTypes_SDL_GetGPUShaderFormats, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGPUShaderFormats"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGPUShaderFormats, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGPUShaderFormats */

  /* EXPORT WasmEdgeSDL_SDL_GDKSuspendGPU */
  /* void SDL_GDKSuspendGPU(SDL_GPUDevice *device) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GDKSuspendGPU[1], ReturnTypes_SDL_GDKSuspendGPU[1];
  ParamTypes_SDL_GDKSuspendGPU[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GDKSuspendGPU, 1, ReturnTypes_SDL_GDKSuspendGPU, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GDKSuspendGPU"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GDKSuspendGPU, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GDKSuspendGPU */

  /* EXPORT WasmEdgeSDL_SDL_GDKResumeGPU */
  /* void SDL_GDKResumeGPU(SDL_GPUDevice *device) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GDKResumeGPU[1], ReturnTypes_SDL_GDKResumeGPU[1];
  ParamTypes_SDL_GDKResumeGPU[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GDKResumeGPU, 1, ReturnTypes_SDL_GDKResumeGPU, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GDKResumeGPU"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GDKResumeGPU, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GDKResumeGPU */

  /* EXPORT WasmEdgeSDL_SDL_GUIDToString */
  /* void SDL_GUIDToString(SDL_GUID guid, char *pszGUID, int cbGUID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GUIDToString[3], ReturnTypes_SDL_GUIDToString[1];
  ParamTypes_SDL_GUIDToString[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GUIDToString[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GUIDToString[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GUIDToString, 3, ReturnTypes_SDL_GUIDToString, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GUIDToString"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GUIDToString, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GUIDToString */

  /* EXPORT WasmEdgeSDL_SDL_StringToGUID */
  /* SDL_GUID SDL_StringToGUID(const char *pchGUID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StringToGUID[1], ReturnTypes_SDL_StringToGUID[1];
  ParamTypes_SDL_StringToGUID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StringToGUID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StringToGUID, 1, ReturnTypes_SDL_StringToGUID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StringToGUID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StringToGUID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StringToGUID */

  /* EXPORT WasmEdgeSDL_SDL_GetHaptics */
  /* SDL_HapticID * SDL_GetHaptics(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHaptics[1], ReturnTypes_SDL_GetHaptics[1];
  ParamTypes_SDL_GetHaptics[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHaptics[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHaptics, 1, ReturnTypes_SDL_GetHaptics, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHaptics"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHaptics, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHaptics */

  /* EXPORT WasmEdgeSDL_SDL_GetHapticNameForID */
  /* const char * SDL_GetHapticNameForID(SDL_HapticID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHapticNameForID[1], ReturnTypes_SDL_GetHapticNameForID[1];
  ParamTypes_SDL_GetHapticNameForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHapticNameForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHapticNameForID, 1, ReturnTypes_SDL_GetHapticNameForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHapticNameForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHapticNameForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHapticNameForID */

  /* EXPORT WasmEdgeSDL_SDL_OpenHaptic */
  /* SDL_Haptic * SDL_OpenHaptic(SDL_HapticID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenHaptic[1], ReturnTypes_SDL_OpenHaptic[1];
  ParamTypes_SDL_OpenHaptic[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenHaptic[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenHaptic, 1, ReturnTypes_SDL_OpenHaptic, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenHaptic"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenHaptic, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenHaptic */

  /* EXPORT WasmEdgeSDL_SDL_GetHapticFromID */
  /* SDL_Haptic * SDL_GetHapticFromID(SDL_HapticID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHapticFromID[1], ReturnTypes_SDL_GetHapticFromID[1];
  ParamTypes_SDL_GetHapticFromID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHapticFromID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHapticFromID, 1, ReturnTypes_SDL_GetHapticFromID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHapticFromID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHapticFromID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHapticFromID */

  /* EXPORT WasmEdgeSDL_SDL_GetHapticID */
  /* SDL_HapticID SDL_GetHapticID(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHapticID[1], ReturnTypes_SDL_GetHapticID[1];
  ParamTypes_SDL_GetHapticID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHapticID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHapticID, 1, ReturnTypes_SDL_GetHapticID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHapticID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHapticID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHapticID */

  /* EXPORT WasmEdgeSDL_SDL_GetHapticName */
  /* const char * SDL_GetHapticName(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHapticName[1], ReturnTypes_SDL_GetHapticName[1];
  ParamTypes_SDL_GetHapticName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHapticName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHapticName, 1, ReturnTypes_SDL_GetHapticName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHapticName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHapticName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHapticName */

  /* EXPORT WasmEdgeSDL_SDL_IsMouseHaptic */
  /* bool SDL_IsMouseHaptic(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsMouseHaptic[1], ReturnTypes_SDL_IsMouseHaptic[1];

  ReturnTypes_SDL_IsMouseHaptic[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsMouseHaptic, 0, ReturnTypes_SDL_IsMouseHaptic, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsMouseHaptic"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsMouseHaptic, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsMouseHaptic */

  /* EXPORT WasmEdgeSDL_SDL_OpenHapticFromMouse */
  /* SDL_Haptic * SDL_OpenHapticFromMouse(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenHapticFromMouse[1], ReturnTypes_SDL_OpenHapticFromMouse[1];

  ReturnTypes_SDL_OpenHapticFromMouse[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenHapticFromMouse, 0, ReturnTypes_SDL_OpenHapticFromMouse, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenHapticFromMouse"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenHapticFromMouse, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenHapticFromMouse */

  /* EXPORT WasmEdgeSDL_SDL_IsJoystickHaptic */
  /* bool SDL_IsJoystickHaptic(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsJoystickHaptic[1], ReturnTypes_SDL_IsJoystickHaptic[1];
  ParamTypes_SDL_IsJoystickHaptic[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IsJoystickHaptic[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsJoystickHaptic, 1, ReturnTypes_SDL_IsJoystickHaptic, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsJoystickHaptic"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsJoystickHaptic, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsJoystickHaptic */

  /* EXPORT WasmEdgeSDL_SDL_OpenHapticFromJoystick */
  /* SDL_Haptic * SDL_OpenHapticFromJoystick(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenHapticFromJoystick[1], ReturnTypes_SDL_OpenHapticFromJoystick[1];
  ParamTypes_SDL_OpenHapticFromJoystick[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenHapticFromJoystick[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenHapticFromJoystick, 1, ReturnTypes_SDL_OpenHapticFromJoystick, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenHapticFromJoystick"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenHapticFromJoystick, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenHapticFromJoystick */

  /* EXPORT WasmEdgeSDL_SDL_CloseHaptic */
  /* void SDL_CloseHaptic(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseHaptic[1], ReturnTypes_SDL_CloseHaptic[1];
  ParamTypes_SDL_CloseHaptic[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseHaptic, 1, ReturnTypes_SDL_CloseHaptic, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseHaptic"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseHaptic, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseHaptic */

  /* EXPORT WasmEdgeSDL_SDL_GetMaxHapticEffects */
  /* int SDL_GetMaxHapticEffects(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetMaxHapticEffects[1], ReturnTypes_SDL_GetMaxHapticEffects[1];
  ParamTypes_SDL_GetMaxHapticEffects[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetMaxHapticEffects[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetMaxHapticEffects, 1, ReturnTypes_SDL_GetMaxHapticEffects, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetMaxHapticEffects"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetMaxHapticEffects, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetMaxHapticEffects */

  /* EXPORT WasmEdgeSDL_SDL_GetMaxHapticEffectsPlaying */
  /* int SDL_GetMaxHapticEffectsPlaying(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetMaxHapticEffectsPlaying[1], ReturnTypes_SDL_GetMaxHapticEffectsPlaying[1];
  ParamTypes_SDL_GetMaxHapticEffectsPlaying[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetMaxHapticEffectsPlaying[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetMaxHapticEffectsPlaying, 1, ReturnTypes_SDL_GetMaxHapticEffectsPlaying, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetMaxHapticEffectsPlaying"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetMaxHapticEffectsPlaying, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetMaxHapticEffectsPlaying */

  /* EXPORT WasmEdgeSDL_SDL_GetHapticFeatures */
  /* Uint32 SDL_GetHapticFeatures(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHapticFeatures[1], ReturnTypes_SDL_GetHapticFeatures[1];
  ParamTypes_SDL_GetHapticFeatures[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHapticFeatures[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHapticFeatures, 1, ReturnTypes_SDL_GetHapticFeatures, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHapticFeatures"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHapticFeatures, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHapticFeatures */

  /* EXPORT WasmEdgeSDL_SDL_GetNumHapticAxes */
  /* int SDL_GetNumHapticAxes(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumHapticAxes[1], ReturnTypes_SDL_GetNumHapticAxes[1];
  ParamTypes_SDL_GetNumHapticAxes[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNumHapticAxes[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumHapticAxes, 1, ReturnTypes_SDL_GetNumHapticAxes, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumHapticAxes"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumHapticAxes, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumHapticAxes */

  /* EXPORT WasmEdgeSDL_SDL_HapticEffectSupported */
  /* bool SDL_HapticEffectSupported(SDL_Haptic *haptic, const SDL_HapticEffect *effect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HapticEffectSupported[2], ReturnTypes_SDL_HapticEffectSupported[1];
  ParamTypes_SDL_HapticEffectSupported[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_HapticEffectSupported[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HapticEffectSupported[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HapticEffectSupported, 2, ReturnTypes_SDL_HapticEffectSupported, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HapticEffectSupported"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HapticEffectSupported, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HapticEffectSupported */

  /* EXPORT WasmEdgeSDL_SDL_CreateHapticEffect */
  /* int SDL_CreateHapticEffect(SDL_Haptic *haptic, const SDL_HapticEffect *effect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateHapticEffect[2], ReturnTypes_SDL_CreateHapticEffect[1];
  ParamTypes_SDL_CreateHapticEffect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateHapticEffect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateHapticEffect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateHapticEffect, 2, ReturnTypes_SDL_CreateHapticEffect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateHapticEffect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateHapticEffect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateHapticEffect */

  /* EXPORT WasmEdgeSDL_SDL_UpdateHapticEffect */
  /* bool SDL_UpdateHapticEffect(SDL_Haptic *haptic, int effect, const SDL_HapticEffect *data) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UpdateHapticEffect[3], ReturnTypes_SDL_UpdateHapticEffect[1];
  ParamTypes_SDL_UpdateHapticEffect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UpdateHapticEffect[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UpdateHapticEffect[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_UpdateHapticEffect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UpdateHapticEffect, 3, ReturnTypes_SDL_UpdateHapticEffect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UpdateHapticEffect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UpdateHapticEffect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UpdateHapticEffect */

  /* EXPORT WasmEdgeSDL_SDL_RunHapticEffect */
  /* bool SDL_RunHapticEffect(SDL_Haptic *haptic, int effect, Uint32 iterations) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RunHapticEffect[3], ReturnTypes_SDL_RunHapticEffect[1];
  ParamTypes_SDL_RunHapticEffect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RunHapticEffect[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RunHapticEffect[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RunHapticEffect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RunHapticEffect, 3, ReturnTypes_SDL_RunHapticEffect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RunHapticEffect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RunHapticEffect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RunHapticEffect */

  /* EXPORT WasmEdgeSDL_SDL_StopHapticEffect */
  /* bool SDL_StopHapticEffect(SDL_Haptic *haptic, int effect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StopHapticEffect[2], ReturnTypes_SDL_StopHapticEffect[1];
  ParamTypes_SDL_StopHapticEffect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_StopHapticEffect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StopHapticEffect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StopHapticEffect, 2, ReturnTypes_SDL_StopHapticEffect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StopHapticEffect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StopHapticEffect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StopHapticEffect */

  /* EXPORT WasmEdgeSDL_SDL_DestroyHapticEffect */
  /* void SDL_DestroyHapticEffect(SDL_Haptic *haptic, int effect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyHapticEffect[2], ReturnTypes_SDL_DestroyHapticEffect[1];
  ParamTypes_SDL_DestroyHapticEffect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_DestroyHapticEffect[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyHapticEffect, 2, ReturnTypes_SDL_DestroyHapticEffect, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyHapticEffect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyHapticEffect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyHapticEffect */

  /* EXPORT WasmEdgeSDL_SDL_GetHapticEffectStatus */
  /* bool SDL_GetHapticEffectStatus(SDL_Haptic *haptic, int effect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHapticEffectStatus[2], ReturnTypes_SDL_GetHapticEffectStatus[1];
  ParamTypes_SDL_GetHapticEffectStatus[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetHapticEffectStatus[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHapticEffectStatus[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHapticEffectStatus, 2, ReturnTypes_SDL_GetHapticEffectStatus, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHapticEffectStatus"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHapticEffectStatus, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHapticEffectStatus */

  /* EXPORT WasmEdgeSDL_SDL_SetHapticGain */
  /* bool SDL_SetHapticGain(SDL_Haptic *haptic, int gain) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetHapticGain[2], ReturnTypes_SDL_SetHapticGain[1];
  ParamTypes_SDL_SetHapticGain[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetHapticGain[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetHapticGain[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetHapticGain, 2, ReturnTypes_SDL_SetHapticGain, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetHapticGain"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetHapticGain, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetHapticGain */

  /* EXPORT WasmEdgeSDL_SDL_SetHapticAutocenter */
  /* bool SDL_SetHapticAutocenter(SDL_Haptic *haptic, int autocenter) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetHapticAutocenter[2], ReturnTypes_SDL_SetHapticAutocenter[1];
  ParamTypes_SDL_SetHapticAutocenter[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetHapticAutocenter[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetHapticAutocenter[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetHapticAutocenter, 2, ReturnTypes_SDL_SetHapticAutocenter, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetHapticAutocenter"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetHapticAutocenter, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetHapticAutocenter */

  /* EXPORT WasmEdgeSDL_SDL_PauseHaptic */
  /* bool SDL_PauseHaptic(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PauseHaptic[1], ReturnTypes_SDL_PauseHaptic[1];
  ParamTypes_SDL_PauseHaptic[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PauseHaptic[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PauseHaptic, 1, ReturnTypes_SDL_PauseHaptic, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PauseHaptic"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PauseHaptic, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PauseHaptic */

  /* EXPORT WasmEdgeSDL_SDL_ResumeHaptic */
  /* bool SDL_ResumeHaptic(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ResumeHaptic[1], ReturnTypes_SDL_ResumeHaptic[1];
  ParamTypes_SDL_ResumeHaptic[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ResumeHaptic[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ResumeHaptic, 1, ReturnTypes_SDL_ResumeHaptic, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ResumeHaptic"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ResumeHaptic, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ResumeHaptic */

  /* EXPORT WasmEdgeSDL_SDL_StopHapticEffects */
  /* bool SDL_StopHapticEffects(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StopHapticEffects[1], ReturnTypes_SDL_StopHapticEffects[1];
  ParamTypes_SDL_StopHapticEffects[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StopHapticEffects[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StopHapticEffects, 1, ReturnTypes_SDL_StopHapticEffects, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StopHapticEffects"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StopHapticEffects, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StopHapticEffects */

  /* EXPORT WasmEdgeSDL_SDL_HapticRumbleSupported */
  /* bool SDL_HapticRumbleSupported(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HapticRumbleSupported[1], ReturnTypes_SDL_HapticRumbleSupported[1];
  ParamTypes_SDL_HapticRumbleSupported[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HapticRumbleSupported[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HapticRumbleSupported, 1, ReturnTypes_SDL_HapticRumbleSupported, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HapticRumbleSupported"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HapticRumbleSupported, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HapticRumbleSupported */

  /* EXPORT WasmEdgeSDL_SDL_InitHapticRumble */
  /* bool SDL_InitHapticRumble(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_InitHapticRumble[1], ReturnTypes_SDL_InitHapticRumble[1];
  ParamTypes_SDL_InitHapticRumble[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_InitHapticRumble[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_InitHapticRumble, 1, ReturnTypes_SDL_InitHapticRumble, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_InitHapticRumble"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_InitHapticRumble, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_InitHapticRumble */

  /* EXPORT WasmEdgeSDL_SDL_PlayHapticRumble */
  /* bool SDL_PlayHapticRumble(SDL_Haptic *haptic, float strength, Uint32 length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PlayHapticRumble[3], ReturnTypes_SDL_PlayHapticRumble[1];
  ParamTypes_SDL_PlayHapticRumble[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PlayHapticRumble[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PlayHapticRumble[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PlayHapticRumble[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PlayHapticRumble, 3, ReturnTypes_SDL_PlayHapticRumble, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PlayHapticRumble"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PlayHapticRumble, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PlayHapticRumble */

  /* EXPORT WasmEdgeSDL_SDL_StopHapticRumble */
  /* bool SDL_StopHapticRumble(SDL_Haptic *haptic) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StopHapticRumble[1], ReturnTypes_SDL_StopHapticRumble[1];
  ParamTypes_SDL_StopHapticRumble[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StopHapticRumble[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StopHapticRumble, 1, ReturnTypes_SDL_StopHapticRumble, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StopHapticRumble"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StopHapticRumble, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StopHapticRumble */

  /* EXPORT WasmEdgeSDL_SDL_hid_init */
  /* int SDL_hid_init(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_init[1], ReturnTypes_SDL_hid_init[1];

  ReturnTypes_SDL_hid_init[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_init, 0, ReturnTypes_SDL_hid_init, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_init"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_init, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_init */

  /* EXPORT WasmEdgeSDL_SDL_hid_exit */
  /* int SDL_hid_exit(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_exit[1], ReturnTypes_SDL_hid_exit[1];

  ReturnTypes_SDL_hid_exit[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_exit, 0, ReturnTypes_SDL_hid_exit, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_exit"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_exit, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_exit */

  /* EXPORT WasmEdgeSDL_SDL_hid_device_change_count */
  /* Uint32 SDL_hid_device_change_count(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_device_change_count[1], ReturnTypes_SDL_hid_device_change_count[1];

  ReturnTypes_SDL_hid_device_change_count[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_device_change_count, 0, ReturnTypes_SDL_hid_device_change_count, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_device_change_count"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_device_change_count, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_device_change_count */

  /* EXPORT WasmEdgeSDL_SDL_hid_enumerate */
  /* SDL_hid_device_info * SDL_hid_enumerate(unsigned short vendor_id, unsigned short product_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_enumerate[2], ReturnTypes_SDL_hid_enumerate[1];
  ParamTypes_SDL_hid_enumerate[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_enumerate[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_enumerate[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_enumerate, 2, ReturnTypes_SDL_hid_enumerate, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_enumerate"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_enumerate, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_enumerate */

  /* EXPORT WasmEdgeSDL_SDL_hid_free_enumeration */
  /* void SDL_hid_free_enumeration(SDL_hid_device_info *devs) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_free_enumeration[1], ReturnTypes_SDL_hid_free_enumeration[1];
  ParamTypes_SDL_hid_free_enumeration[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_free_enumeration, 1, ReturnTypes_SDL_hid_free_enumeration, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_free_enumeration"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_free_enumeration, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_free_enumeration */

  /* EXPORT WasmEdgeSDL_SDL_hid_open */
  /* SDL_hid_device * SDL_hid_open(unsigned short vendor_id, unsigned short product_id, const wchar_t *serial_number) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_open[3], ReturnTypes_SDL_hid_open[1];
  ParamTypes_SDL_hid_open[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_open[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_open[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_open[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_open, 3, ReturnTypes_SDL_hid_open, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_open"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_open, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_open */

  /* EXPORT WasmEdgeSDL_SDL_hid_open_path */
  /* SDL_hid_device * SDL_hid_open_path(const char *path) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_open_path[1], ReturnTypes_SDL_hid_open_path[1];
  ParamTypes_SDL_hid_open_path[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_open_path[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_open_path, 1, ReturnTypes_SDL_hid_open_path, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_open_path"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_open_path, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_open_path */

  /* EXPORT WasmEdgeSDL_SDL_hid_write */
  /* int SDL_hid_write(SDL_hid_device *dev, const unsigned char *data, size_t length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_write[3], ReturnTypes_SDL_hid_write[1];
  ParamTypes_SDL_hid_write[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_write[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_write[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_write[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_write, 3, ReturnTypes_SDL_hid_write, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_write"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_write, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_write */

  /* EXPORT WasmEdgeSDL_SDL_hid_read_timeout */
  /* int SDL_hid_read_timeout(SDL_hid_device *dev, unsigned char *data, size_t length, int milliseconds) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_read_timeout[4], ReturnTypes_SDL_hid_read_timeout[1];
  ParamTypes_SDL_hid_read_timeout[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_read_timeout[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_read_timeout[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_read_timeout[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_read_timeout[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_read_timeout, 4, ReturnTypes_SDL_hid_read_timeout, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_read_timeout"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_read_timeout, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_read_timeout */

  /* EXPORT WasmEdgeSDL_SDL_hid_read */
  /* int SDL_hid_read(SDL_hid_device *dev, unsigned char *data, size_t length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_read[3], ReturnTypes_SDL_hid_read[1];
  ParamTypes_SDL_hid_read[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_read[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_read[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_read[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_read, 3, ReturnTypes_SDL_hid_read, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_read"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_read, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_read */

  /* EXPORT WasmEdgeSDL_SDL_hid_set_nonblocking */
  /* int SDL_hid_set_nonblocking(SDL_hid_device *dev, int nonblock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_set_nonblocking[2], ReturnTypes_SDL_hid_set_nonblocking[1];
  ParamTypes_SDL_hid_set_nonblocking[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_set_nonblocking[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_set_nonblocking[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_set_nonblocking, 2, ReturnTypes_SDL_hid_set_nonblocking, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_set_nonblocking"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_set_nonblocking, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_set_nonblocking */

  /* EXPORT WasmEdgeSDL_SDL_hid_send_feature_report */
  /* int SDL_hid_send_feature_report(SDL_hid_device *dev, const unsigned char *data, size_t length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_send_feature_report[3], ReturnTypes_SDL_hid_send_feature_report[1];
  ParamTypes_SDL_hid_send_feature_report[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_send_feature_report[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_send_feature_report[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_send_feature_report[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_send_feature_report, 3, ReturnTypes_SDL_hid_send_feature_report, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_send_feature_report"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_send_feature_report, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_send_feature_report */

  /* EXPORT WasmEdgeSDL_SDL_hid_get_feature_report */
  /* int SDL_hid_get_feature_report(SDL_hid_device *dev, unsigned char *data, size_t length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_get_feature_report[3], ReturnTypes_SDL_hid_get_feature_report[1];
  ParamTypes_SDL_hid_get_feature_report[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_feature_report[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_feature_report[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_get_feature_report[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_get_feature_report, 3, ReturnTypes_SDL_hid_get_feature_report, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_get_feature_report"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_get_feature_report, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_get_feature_report */

  /* EXPORT WasmEdgeSDL_SDL_hid_get_input_report */
  /* int SDL_hid_get_input_report(SDL_hid_device *dev, unsigned char *data, size_t length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_get_input_report[3], ReturnTypes_SDL_hid_get_input_report[1];
  ParamTypes_SDL_hid_get_input_report[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_input_report[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_input_report[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_get_input_report[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_get_input_report, 3, ReturnTypes_SDL_hid_get_input_report, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_get_input_report"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_get_input_report, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_get_input_report */

  /* EXPORT WasmEdgeSDL_SDL_hid_close */
  /* int SDL_hid_close(SDL_hid_device *dev) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_close[1], ReturnTypes_SDL_hid_close[1];
  ParamTypes_SDL_hid_close[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_close[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_close, 1, ReturnTypes_SDL_hid_close, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_close"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_close, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_close */

  /* EXPORT WasmEdgeSDL_SDL_hid_get_manufacturer_string */
  /* int SDL_hid_get_manufacturer_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_get_manufacturer_string[3], ReturnTypes_SDL_hid_get_manufacturer_string[1];
  ParamTypes_SDL_hid_get_manufacturer_string[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_manufacturer_string[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_manufacturer_string[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_get_manufacturer_string[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_get_manufacturer_string, 3, ReturnTypes_SDL_hid_get_manufacturer_string, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_get_manufacturer_string"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_get_manufacturer_string, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_get_manufacturer_string */

  /* EXPORT WasmEdgeSDL_SDL_hid_get_product_string */
  /* int SDL_hid_get_product_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_get_product_string[3], ReturnTypes_SDL_hid_get_product_string[1];
  ParamTypes_SDL_hid_get_product_string[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_product_string[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_product_string[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_get_product_string[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_get_product_string, 3, ReturnTypes_SDL_hid_get_product_string, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_get_product_string"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_get_product_string, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_get_product_string */

  /* EXPORT WasmEdgeSDL_SDL_hid_get_serial_number_string */
  /* int SDL_hid_get_serial_number_string(SDL_hid_device *dev, wchar_t *string, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_get_serial_number_string[3], ReturnTypes_SDL_hid_get_serial_number_string[1];
  ParamTypes_SDL_hid_get_serial_number_string[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_serial_number_string[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_serial_number_string[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_get_serial_number_string[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_get_serial_number_string, 3, ReturnTypes_SDL_hid_get_serial_number_string, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_get_serial_number_string"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_get_serial_number_string, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_get_serial_number_string */

  /* EXPORT WasmEdgeSDL_SDL_hid_get_indexed_string */
  /* int SDL_hid_get_indexed_string(SDL_hid_device *dev, int string_index, wchar_t *string, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_get_indexed_string[4], ReturnTypes_SDL_hid_get_indexed_string[1];
  ParamTypes_SDL_hid_get_indexed_string[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_indexed_string[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_indexed_string[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_indexed_string[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_get_indexed_string[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_get_indexed_string, 4, ReturnTypes_SDL_hid_get_indexed_string, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_get_indexed_string"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_get_indexed_string, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_get_indexed_string */

  /* EXPORT WasmEdgeSDL_SDL_hid_get_device_info */
  /* SDL_hid_device_info * SDL_hid_get_device_info(SDL_hid_device *dev) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_get_device_info[1], ReturnTypes_SDL_hid_get_device_info[1];
  ParamTypes_SDL_hid_get_device_info[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_get_device_info[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_get_device_info, 1, ReturnTypes_SDL_hid_get_device_info, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_get_device_info"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_get_device_info, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_get_device_info */

  /* EXPORT WasmEdgeSDL_SDL_hid_get_report_descriptor */
  /* int SDL_hid_get_report_descriptor(SDL_hid_device *dev, unsigned char *buf, size_t buf_size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_get_report_descriptor[3], ReturnTypes_SDL_hid_get_report_descriptor[1];
  ParamTypes_SDL_hid_get_report_descriptor[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_report_descriptor[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_hid_get_report_descriptor[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_hid_get_report_descriptor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_get_report_descriptor, 3, ReturnTypes_SDL_hid_get_report_descriptor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_get_report_descriptor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_get_report_descriptor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_get_report_descriptor */

  /* EXPORT WasmEdgeSDL_SDL_hid_ble_scan */
  /* void SDL_hid_ble_scan(bool active) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_hid_ble_scan[1], ReturnTypes_SDL_hid_ble_scan[1];
  ParamTypes_SDL_hid_ble_scan[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_hid_ble_scan, 1, ReturnTypes_SDL_hid_ble_scan, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_hid_ble_scan"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_hid_ble_scan, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_hid_ble_scan */

  /* EXPORT WasmEdgeSDL_SDL_SetHintWithPriority */
  /* bool SDL_SetHintWithPriority(const char *name, const char *value, SDL_HintPriority priority) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetHintWithPriority[3], ReturnTypes_SDL_SetHintWithPriority[1];
  ParamTypes_SDL_SetHintWithPriority[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetHintWithPriority[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetHintWithPriority[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetHintWithPriority[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetHintWithPriority, 3, ReturnTypes_SDL_SetHintWithPriority, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetHintWithPriority"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetHintWithPriority, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetHintWithPriority */

  /* EXPORT WasmEdgeSDL_SDL_SetHint */
  /* bool SDL_SetHint(const char *name, const char *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetHint[2], ReturnTypes_SDL_SetHint[1];
  ParamTypes_SDL_SetHint[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetHint[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetHint[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetHint, 2, ReturnTypes_SDL_SetHint, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetHint"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetHint, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetHint */

  /* EXPORT WasmEdgeSDL_SDL_ResetHint */
  /* bool SDL_ResetHint(const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ResetHint[1], ReturnTypes_SDL_ResetHint[1];
  ParamTypes_SDL_ResetHint[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ResetHint[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ResetHint, 1, ReturnTypes_SDL_ResetHint, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ResetHint"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ResetHint, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ResetHint */

  /* EXPORT WasmEdgeSDL_SDL_ResetHints */
  /* void SDL_ResetHints(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ResetHints[1], ReturnTypes_SDL_ResetHints[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ResetHints, 0, ReturnTypes_SDL_ResetHints, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ResetHints"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ResetHints, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ResetHints */

  /* EXPORT WasmEdgeSDL_SDL_GetHint */
  /* const char * SDL_GetHint(const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHint[1], ReturnTypes_SDL_GetHint[1];
  ParamTypes_SDL_GetHint[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHint[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHint, 1, ReturnTypes_SDL_GetHint, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHint"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHint, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHint */

  /* EXPORT WasmEdgeSDL_SDL_GetHintBoolean */
  /* bool SDL_GetHintBoolean(const char *name, bool default_value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetHintBoolean[2], ReturnTypes_SDL_GetHintBoolean[1];
  ParamTypes_SDL_GetHintBoolean[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetHintBoolean[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetHintBoolean[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetHintBoolean, 2, ReturnTypes_SDL_GetHintBoolean, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetHintBoolean"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetHintBoolean, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetHintBoolean */

  /* EXPORT WasmEdgeSDL_SDL_AddHintCallback */
  /* bool SDL_AddHintCallback(const char *name, SDL_HintCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddHintCallback[3], ReturnTypes_SDL_AddHintCallback[1];
  ParamTypes_SDL_AddHintCallback[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddHintCallback[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddHintCallback[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddHintCallback[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddHintCallback, 3, ReturnTypes_SDL_AddHintCallback, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddHintCallback"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddHintCallback, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddHintCallback */

  /* EXPORT WasmEdgeSDL_SDL_Init */
  /* bool SDL_Init(SDL_InitFlags flags) */
  WasmEdge_ValType ParamTypes_SDL_Init[1], ReturnTypes_SDL_Init[1];
  ParamTypes_SDL_Init[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_Init[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Init, 1, ReturnTypes_SDL_Init, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Init"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Init, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Init */

  /* EXPORT WasmEdgeSDL_SDL_InitSubSystem */
  /* bool SDL_InitSubSystem(SDL_InitFlags flags) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_InitSubSystem[1], ReturnTypes_SDL_InitSubSystem[1];
  ParamTypes_SDL_InitSubSystem[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_InitSubSystem[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_InitSubSystem, 1, ReturnTypes_SDL_InitSubSystem, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_InitSubSystem"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_InitSubSystem, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_InitSubSystem */

  /* EXPORT WasmEdgeSDL_SDL_QuitSubSystem */
  /* void SDL_QuitSubSystem(SDL_InitFlags flags) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_QuitSubSystem[1], ReturnTypes_SDL_QuitSubSystem[1];
  ParamTypes_SDL_QuitSubSystem[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_QuitSubSystem, 1, ReturnTypes_SDL_QuitSubSystem, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_QuitSubSystem"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_QuitSubSystem, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_QuitSubSystem */

  /* EXPORT WasmEdgeSDL_SDL_WasInit */
  /* SDL_InitFlags SDL_WasInit(SDL_InitFlags flags) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WasInit[1], ReturnTypes_SDL_WasInit[1];
  ParamTypes_SDL_WasInit[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WasInit[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WasInit, 1, ReturnTypes_SDL_WasInit, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WasInit"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WasInit, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WasInit */

  /* EXPORT WasmEdgeSDL_SDL_Quit */
  /* void SDL_Quit(void) */
  WasmEdge_ValType ParamTypes_SDL_Quit[1], ReturnTypes_SDL_Quit[1];
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Quit, 0, ReturnTypes_SDL_Quit, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Quit"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Quit, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Quit */

  /* EXPORT WasmEdgeSDL_SDL_IsMainThread */
  /* bool SDL_IsMainThread(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsMainThread[1], ReturnTypes_SDL_IsMainThread[1];

  ReturnTypes_SDL_IsMainThread[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsMainThread, 0, ReturnTypes_SDL_IsMainThread, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsMainThread"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsMainThread, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsMainThread */

  /* EXPORT WasmEdgeSDL_SDL_RunOnMainThread */
  /* bool SDL_RunOnMainThread(SDL_MainThreadCallback callback, void *userdata, bool wait_complete) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RunOnMainThread[3], ReturnTypes_SDL_RunOnMainThread[1];
  ParamTypes_SDL_RunOnMainThread[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RunOnMainThread[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RunOnMainThread[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RunOnMainThread[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RunOnMainThread, 3, ReturnTypes_SDL_RunOnMainThread, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RunOnMainThread"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RunOnMainThread, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RunOnMainThread */

  /* EXPORT WasmEdgeSDL_SDL_SetAppMetadata */
  /* bool SDL_SetAppMetadata(const char *appname, const char *appversion, const char *appidentifier) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAppMetadata[3], ReturnTypes_SDL_SetAppMetadata[1];
  ParamTypes_SDL_SetAppMetadata[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAppMetadata[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAppMetadata[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAppMetadata[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAppMetadata, 3, ReturnTypes_SDL_SetAppMetadata, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAppMetadata"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAppMetadata, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAppMetadata */

  /* EXPORT WasmEdgeSDL_SDL_SetAppMetadataProperty */
  /* bool SDL_SetAppMetadataProperty(const char *name, const char *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetAppMetadataProperty[2], ReturnTypes_SDL_SetAppMetadataProperty[1];
  ParamTypes_SDL_SetAppMetadataProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetAppMetadataProperty[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetAppMetadataProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetAppMetadataProperty, 2, ReturnTypes_SDL_SetAppMetadataProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetAppMetadataProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetAppMetadataProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetAppMetadataProperty */

  /* EXPORT WasmEdgeSDL_SDL_GetAppMetadataProperty */
  /* const char * SDL_GetAppMetadataProperty(const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAppMetadataProperty[1], ReturnTypes_SDL_GetAppMetadataProperty[1];
  ParamTypes_SDL_GetAppMetadataProperty[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetAppMetadataProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAppMetadataProperty, 1, ReturnTypes_SDL_GetAppMetadataProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAppMetadataProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAppMetadataProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAppMetadataProperty */

  /* EXPORT WasmEdgeSDL_SDL_IOFromFile */
  /* SDL_IOStream * SDL_IOFromFile(const char *file, const char *mode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IOFromFile[2], ReturnTypes_SDL_IOFromFile[1];
  ParamTypes_SDL_IOFromFile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_IOFromFile[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IOFromFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IOFromFile, 2, ReturnTypes_SDL_IOFromFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IOFromFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IOFromFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IOFromFile */

  /* EXPORT WasmEdgeSDL_SDL_IOFromMem */
  /* SDL_IOStream * SDL_IOFromMem(void *mem, size_t size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IOFromMem[2], ReturnTypes_SDL_IOFromMem[1];
  ParamTypes_SDL_IOFromMem[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_IOFromMem[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IOFromMem[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IOFromMem, 2, ReturnTypes_SDL_IOFromMem, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IOFromMem"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IOFromMem, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IOFromMem */

  /* EXPORT WasmEdgeSDL_SDL_IOFromConstMem */
  /* SDL_IOStream * SDL_IOFromConstMem(const void *mem, size_t size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IOFromConstMem[2], ReturnTypes_SDL_IOFromConstMem[1];
  ParamTypes_SDL_IOFromConstMem[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_IOFromConstMem[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IOFromConstMem[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IOFromConstMem, 2, ReturnTypes_SDL_IOFromConstMem, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IOFromConstMem"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IOFromConstMem, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IOFromConstMem */

  /* EXPORT WasmEdgeSDL_SDL_IOFromDynamicMem */
  /* SDL_IOStream * SDL_IOFromDynamicMem(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IOFromDynamicMem[1], ReturnTypes_SDL_IOFromDynamicMem[1];

  ReturnTypes_SDL_IOFromDynamicMem[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IOFromDynamicMem, 0, ReturnTypes_SDL_IOFromDynamicMem, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IOFromDynamicMem"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IOFromDynamicMem, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IOFromDynamicMem */

  /* EXPORT WasmEdgeSDL_SDL_OpenIO */
  /* SDL_IOStream * SDL_OpenIO(const SDL_IOStreamInterface *iface, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenIO[2], ReturnTypes_SDL_OpenIO[1];
  ParamTypes_SDL_OpenIO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenIO[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenIO, 2, ReturnTypes_SDL_OpenIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenIO */

  /* EXPORT WasmEdgeSDL_SDL_CloseIO */
  /* bool SDL_CloseIO(SDL_IOStream *context) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseIO[1], ReturnTypes_SDL_CloseIO[1];
  ParamTypes_SDL_CloseIO[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CloseIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseIO, 1, ReturnTypes_SDL_CloseIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseIO */

  /* EXPORT WasmEdgeSDL_SDL_GetIOProperties */
  /* SDL_PropertiesID SDL_GetIOProperties(SDL_IOStream *context) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetIOProperties[1], ReturnTypes_SDL_GetIOProperties[1];
  ParamTypes_SDL_GetIOProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetIOProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetIOProperties, 1, ReturnTypes_SDL_GetIOProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetIOProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetIOProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetIOProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetIOStatus */
  /* SDL_IOStatus SDL_GetIOStatus(SDL_IOStream *context) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetIOStatus[1], ReturnTypes_SDL_GetIOStatus[1];
  ParamTypes_SDL_GetIOStatus[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetIOStatus[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetIOStatus, 1, ReturnTypes_SDL_GetIOStatus, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetIOStatus"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetIOStatus, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetIOStatus */

  /* EXPORT WasmEdgeSDL_SDL_GetIOSize */
  /* Sint64 SDL_GetIOSize(SDL_IOStream *context) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetIOSize[1], ReturnTypes_SDL_GetIOSize[1];
  ParamTypes_SDL_GetIOSize[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetIOSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetIOSize, 1, ReturnTypes_SDL_GetIOSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetIOSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetIOSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetIOSize */

  /* EXPORT WasmEdgeSDL_SDL_SeekIO */
  /* Sint64 SDL_SeekIO(SDL_IOStream *context, Sint64 offset, SDL_IOWhence whence) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SeekIO[3], ReturnTypes_SDL_SeekIO[1];
  ParamTypes_SDL_SeekIO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SeekIO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SeekIO[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SeekIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SeekIO, 3, ReturnTypes_SDL_SeekIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SeekIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SeekIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SeekIO */

  /* EXPORT WasmEdgeSDL_SDL_TellIO */
  /* Sint64 SDL_TellIO(SDL_IOStream *context) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TellIO[1], ReturnTypes_SDL_TellIO[1];
  ParamTypes_SDL_TellIO[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TellIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TellIO, 1, ReturnTypes_SDL_TellIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TellIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TellIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TellIO */

  /* EXPORT WasmEdgeSDL_SDL_ReadIO */
  /* size_t SDL_ReadIO(SDL_IOStream *context, void *ptr, size_t size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadIO[3], ReturnTypes_SDL_ReadIO[1];
  ParamTypes_SDL_ReadIO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadIO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadIO[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadIO, 3, ReturnTypes_SDL_ReadIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadIO */

  /* EXPORT WasmEdgeSDL_SDL_WriteIO */
  /* size_t SDL_WriteIO(SDL_IOStream *context, const void *ptr, size_t size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteIO[3], ReturnTypes_SDL_WriteIO[1];
  ParamTypes_SDL_WriteIO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteIO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteIO[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteIO, 3, ReturnTypes_SDL_WriteIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteIO */

  /* EXPORT WasmEdgeSDL_SDL_IOprintf */
  /* size_t SDL_IOprintf(SDL_IOStream *context, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IOprintf[3], ReturnTypes_SDL_IOprintf[1];
  ParamTypes_SDL_IOprintf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_IOprintf[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_IOprintf[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IOprintf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IOprintf, 3, ReturnTypes_SDL_IOprintf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IOprintf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IOprintf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IOprintf */

  /* EXPORT WasmEdgeSDL_SDL_IOvprintf */
  /* size_t SDL_IOvprintf(SDL_IOStream *context, SDL_PRINTF_FORMAT_STRING const char *fmt, va_list ap) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IOvprintf[3], ReturnTypes_SDL_IOvprintf[1];
  ParamTypes_SDL_IOvprintf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_IOvprintf[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_IOvprintf[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IOvprintf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IOvprintf, 3, ReturnTypes_SDL_IOvprintf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IOvprintf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IOvprintf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IOvprintf */

  /* EXPORT WasmEdgeSDL_SDL_FlushIO */
  /* bool SDL_FlushIO(SDL_IOStream *context) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FlushIO[1], ReturnTypes_SDL_FlushIO[1];
  ParamTypes_SDL_FlushIO[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_FlushIO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FlushIO, 1, ReturnTypes_SDL_FlushIO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FlushIO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FlushIO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FlushIO */

  /* EXPORT WasmEdgeSDL_SDL_LoadFile_IO */
  /* void * SDL_LoadFile_IO(SDL_IOStream *src, size_t *datasize, bool closeio) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadFile_IO[3], ReturnTypes_SDL_LoadFile_IO[1];
  ParamTypes_SDL_LoadFile_IO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadFile_IO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadFile_IO[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadFile_IO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadFile_IO, 3, ReturnTypes_SDL_LoadFile_IO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadFile_IO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadFile_IO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadFile_IO */

  /* EXPORT WasmEdgeSDL_SDL_LoadFile */
  /* void * SDL_LoadFile(const char *file, size_t *datasize) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadFile[2], ReturnTypes_SDL_LoadFile[1];
  ParamTypes_SDL_LoadFile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadFile[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadFile, 2, ReturnTypes_SDL_LoadFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadFile */

  /* EXPORT WasmEdgeSDL_SDL_SaveFile_IO */
  /* bool SDL_SaveFile_IO(SDL_IOStream *src, const void *data, size_t datasize, bool closeio) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SaveFile_IO[4], ReturnTypes_SDL_SaveFile_IO[1];
  ParamTypes_SDL_SaveFile_IO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SaveFile_IO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SaveFile_IO[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SaveFile_IO[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SaveFile_IO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SaveFile_IO, 4, ReturnTypes_SDL_SaveFile_IO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SaveFile_IO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SaveFile_IO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SaveFile_IO */

  /* EXPORT WasmEdgeSDL_SDL_SaveFile */
  /* bool SDL_SaveFile(const char *file, const void *data, size_t datasize) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SaveFile[3], ReturnTypes_SDL_SaveFile[1];
  ParamTypes_SDL_SaveFile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SaveFile[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SaveFile[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SaveFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SaveFile, 3, ReturnTypes_SDL_SaveFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SaveFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SaveFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SaveFile */

  /* EXPORT WasmEdgeSDL_SDL_ReadU8 */
  /* bool SDL_ReadU8(SDL_IOStream *src, Uint8 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadU8[2], ReturnTypes_SDL_ReadU8[1];
  ParamTypes_SDL_ReadU8[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadU8[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadU8[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadU8, 2, ReturnTypes_SDL_ReadU8, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadU8"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadU8, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadU8 */

  /* EXPORT WasmEdgeSDL_SDL_ReadS8 */
  /* bool SDL_ReadS8(SDL_IOStream *src, Sint8 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadS8[2], ReturnTypes_SDL_ReadS8[1];
  ParamTypes_SDL_ReadS8[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadS8[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadS8[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadS8, 2, ReturnTypes_SDL_ReadS8, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadS8"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadS8, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadS8 */

  /* EXPORT WasmEdgeSDL_SDL_ReadU16LE */
  /* bool SDL_ReadU16LE(SDL_IOStream *src, Uint16 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadU16LE[2], ReturnTypes_SDL_ReadU16LE[1];
  ParamTypes_SDL_ReadU16LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadU16LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadU16LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadU16LE, 2, ReturnTypes_SDL_ReadU16LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadU16LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadU16LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadU16LE */

  /* EXPORT WasmEdgeSDL_SDL_ReadS16LE */
  /* bool SDL_ReadS16LE(SDL_IOStream *src, Sint16 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadS16LE[2], ReturnTypes_SDL_ReadS16LE[1];
  ParamTypes_SDL_ReadS16LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadS16LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadS16LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadS16LE, 2, ReturnTypes_SDL_ReadS16LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadS16LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadS16LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadS16LE */

  /* EXPORT WasmEdgeSDL_SDL_ReadU16BE */
  /* bool SDL_ReadU16BE(SDL_IOStream *src, Uint16 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadU16BE[2], ReturnTypes_SDL_ReadU16BE[1];
  ParamTypes_SDL_ReadU16BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadU16BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadU16BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadU16BE, 2, ReturnTypes_SDL_ReadU16BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadU16BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadU16BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadU16BE */

  /* EXPORT WasmEdgeSDL_SDL_ReadS16BE */
  /* bool SDL_ReadS16BE(SDL_IOStream *src, Sint16 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadS16BE[2], ReturnTypes_SDL_ReadS16BE[1];
  ParamTypes_SDL_ReadS16BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadS16BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadS16BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadS16BE, 2, ReturnTypes_SDL_ReadS16BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadS16BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadS16BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadS16BE */

  /* EXPORT WasmEdgeSDL_SDL_ReadU32LE */
  /* bool SDL_ReadU32LE(SDL_IOStream *src, Uint32 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadU32LE[2], ReturnTypes_SDL_ReadU32LE[1];
  ParamTypes_SDL_ReadU32LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadU32LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadU32LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadU32LE, 2, ReturnTypes_SDL_ReadU32LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadU32LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadU32LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadU32LE */

  /* EXPORT WasmEdgeSDL_SDL_ReadS32LE */
  /* bool SDL_ReadS32LE(SDL_IOStream *src, Sint32 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadS32LE[2], ReturnTypes_SDL_ReadS32LE[1];
  ParamTypes_SDL_ReadS32LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadS32LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadS32LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadS32LE, 2, ReturnTypes_SDL_ReadS32LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadS32LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadS32LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadS32LE */

  /* EXPORT WasmEdgeSDL_SDL_ReadU32BE */
  /* bool SDL_ReadU32BE(SDL_IOStream *src, Uint32 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadU32BE[2], ReturnTypes_SDL_ReadU32BE[1];
  ParamTypes_SDL_ReadU32BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadU32BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadU32BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadU32BE, 2, ReturnTypes_SDL_ReadU32BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadU32BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadU32BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadU32BE */

  /* EXPORT WasmEdgeSDL_SDL_ReadS32BE */
  /* bool SDL_ReadS32BE(SDL_IOStream *src, Sint32 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadS32BE[2], ReturnTypes_SDL_ReadS32BE[1];
  ParamTypes_SDL_ReadS32BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadS32BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadS32BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadS32BE, 2, ReturnTypes_SDL_ReadS32BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadS32BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadS32BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadS32BE */

  /* EXPORT WasmEdgeSDL_SDL_ReadU64LE */
  /* bool SDL_ReadU64LE(SDL_IOStream *src, Uint64 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadU64LE[2], ReturnTypes_SDL_ReadU64LE[1];
  ParamTypes_SDL_ReadU64LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadU64LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadU64LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadU64LE, 2, ReturnTypes_SDL_ReadU64LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadU64LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadU64LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadU64LE */

  /* EXPORT WasmEdgeSDL_SDL_ReadS64LE */
  /* bool SDL_ReadS64LE(SDL_IOStream *src, Sint64 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadS64LE[2], ReturnTypes_SDL_ReadS64LE[1];
  ParamTypes_SDL_ReadS64LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadS64LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadS64LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadS64LE, 2, ReturnTypes_SDL_ReadS64LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadS64LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadS64LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadS64LE */

  /* EXPORT WasmEdgeSDL_SDL_ReadU64BE */
  /* bool SDL_ReadU64BE(SDL_IOStream *src, Uint64 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadU64BE[2], ReturnTypes_SDL_ReadU64BE[1];
  ParamTypes_SDL_ReadU64BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadU64BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadU64BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadU64BE, 2, ReturnTypes_SDL_ReadU64BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadU64BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadU64BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadU64BE */

  /* EXPORT WasmEdgeSDL_SDL_ReadS64BE */
  /* bool SDL_ReadS64BE(SDL_IOStream *src, Sint64 *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadS64BE[2], ReturnTypes_SDL_ReadS64BE[1];
  ParamTypes_SDL_ReadS64BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadS64BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadS64BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadS64BE, 2, ReturnTypes_SDL_ReadS64BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadS64BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadS64BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadS64BE */

  /* EXPORT WasmEdgeSDL_SDL_WriteU8 */
  /* bool SDL_WriteU8(SDL_IOStream *dst, Uint8 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteU8[2], ReturnTypes_SDL_WriteU8[1];
  ParamTypes_SDL_WriteU8[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteU8[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteU8[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteU8, 2, ReturnTypes_SDL_WriteU8, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteU8"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteU8, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteU8 */

  /* EXPORT WasmEdgeSDL_SDL_WriteS8 */
  /* bool SDL_WriteS8(SDL_IOStream *dst, Sint8 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteS8[2], ReturnTypes_SDL_WriteS8[1];
  ParamTypes_SDL_WriteS8[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteS8[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteS8[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteS8, 2, ReturnTypes_SDL_WriteS8, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteS8"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteS8, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteS8 */

  /* EXPORT WasmEdgeSDL_SDL_WriteU16LE */
  /* bool SDL_WriteU16LE(SDL_IOStream *dst, Uint16 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteU16LE[2], ReturnTypes_SDL_WriteU16LE[1];
  ParamTypes_SDL_WriteU16LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteU16LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteU16LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteU16LE, 2, ReturnTypes_SDL_WriteU16LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteU16LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteU16LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteU16LE */

  /* EXPORT WasmEdgeSDL_SDL_WriteS16LE */
  /* bool SDL_WriteS16LE(SDL_IOStream *dst, Sint16 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteS16LE[2], ReturnTypes_SDL_WriteS16LE[1];
  ParamTypes_SDL_WriteS16LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteS16LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteS16LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteS16LE, 2, ReturnTypes_SDL_WriteS16LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteS16LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteS16LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteS16LE */

  /* EXPORT WasmEdgeSDL_SDL_WriteU16BE */
  /* bool SDL_WriteU16BE(SDL_IOStream *dst, Uint16 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteU16BE[2], ReturnTypes_SDL_WriteU16BE[1];
  ParamTypes_SDL_WriteU16BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteU16BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteU16BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteU16BE, 2, ReturnTypes_SDL_WriteU16BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteU16BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteU16BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteU16BE */

  /* EXPORT WasmEdgeSDL_SDL_WriteS16BE */
  /* bool SDL_WriteS16BE(SDL_IOStream *dst, Sint16 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteS16BE[2], ReturnTypes_SDL_WriteS16BE[1];
  ParamTypes_SDL_WriteS16BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteS16BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteS16BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteS16BE, 2, ReturnTypes_SDL_WriteS16BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteS16BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteS16BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteS16BE */

  /* EXPORT WasmEdgeSDL_SDL_WriteU32LE */
  /* bool SDL_WriteU32LE(SDL_IOStream *dst, Uint32 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteU32LE[2], ReturnTypes_SDL_WriteU32LE[1];
  ParamTypes_SDL_WriteU32LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteU32LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteU32LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteU32LE, 2, ReturnTypes_SDL_WriteU32LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteU32LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteU32LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteU32LE */

  /* EXPORT WasmEdgeSDL_SDL_WriteS32LE */
  /* bool SDL_WriteS32LE(SDL_IOStream *dst, Sint32 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteS32LE[2], ReturnTypes_SDL_WriteS32LE[1];
  ParamTypes_SDL_WriteS32LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteS32LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteS32LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteS32LE, 2, ReturnTypes_SDL_WriteS32LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteS32LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteS32LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteS32LE */

  /* EXPORT WasmEdgeSDL_SDL_WriteU32BE */
  /* bool SDL_WriteU32BE(SDL_IOStream *dst, Uint32 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteU32BE[2], ReturnTypes_SDL_WriteU32BE[1];
  ParamTypes_SDL_WriteU32BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteU32BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteU32BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteU32BE, 2, ReturnTypes_SDL_WriteU32BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteU32BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteU32BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteU32BE */

  /* EXPORT WasmEdgeSDL_SDL_WriteS32BE */
  /* bool SDL_WriteS32BE(SDL_IOStream *dst, Sint32 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteS32BE[2], ReturnTypes_SDL_WriteS32BE[1];
  ParamTypes_SDL_WriteS32BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteS32BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteS32BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteS32BE, 2, ReturnTypes_SDL_WriteS32BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteS32BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteS32BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteS32BE */

  /* EXPORT WasmEdgeSDL_SDL_WriteU64LE */
  /* bool SDL_WriteU64LE(SDL_IOStream *dst, Uint64 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteU64LE[2], ReturnTypes_SDL_WriteU64LE[1];
  ParamTypes_SDL_WriteU64LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteU64LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteU64LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteU64LE, 2, ReturnTypes_SDL_WriteU64LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteU64LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteU64LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteU64LE */

  /* EXPORT WasmEdgeSDL_SDL_WriteS64LE */
  /* bool SDL_WriteS64LE(SDL_IOStream *dst, Sint64 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteS64LE[2], ReturnTypes_SDL_WriteS64LE[1];
  ParamTypes_SDL_WriteS64LE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteS64LE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteS64LE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteS64LE, 2, ReturnTypes_SDL_WriteS64LE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteS64LE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteS64LE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteS64LE */

  /* EXPORT WasmEdgeSDL_SDL_WriteU64BE */
  /* bool SDL_WriteU64BE(SDL_IOStream *dst, Uint64 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteU64BE[2], ReturnTypes_SDL_WriteU64BE[1];
  ParamTypes_SDL_WriteU64BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteU64BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteU64BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteU64BE, 2, ReturnTypes_SDL_WriteU64BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteU64BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteU64BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteU64BE */

  /* EXPORT WasmEdgeSDL_SDL_WriteS64BE */
  /* bool SDL_WriteS64BE(SDL_IOStream *dst, Sint64 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteS64BE[2], ReturnTypes_SDL_WriteS64BE[1];
  ParamTypes_SDL_WriteS64BE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteS64BE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteS64BE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteS64BE, 2, ReturnTypes_SDL_WriteS64BE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteS64BE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteS64BE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteS64BE */

  /* EXPORT WasmEdgeSDL_SDL_LockJoysticks */
  /* void SDL_LockJoysticks(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockJoysticks[1], ReturnTypes_SDL_LockJoysticks[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockJoysticks, 0, ReturnTypes_SDL_LockJoysticks, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockJoysticks"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockJoysticks, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockJoysticks */

  /* EXPORT WasmEdgeSDL_SDL_UnlockJoysticks */
  /* void SDL_UnlockJoysticks(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnlockJoysticks[1], ReturnTypes_SDL_UnlockJoysticks[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnlockJoysticks, 0, ReturnTypes_SDL_UnlockJoysticks, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnlockJoysticks"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnlockJoysticks, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnlockJoysticks */

  /* EXPORT WasmEdgeSDL_SDL_HasJoystick */
  /* bool SDL_HasJoystick(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasJoystick[1], ReturnTypes_SDL_HasJoystick[1];

  ReturnTypes_SDL_HasJoystick[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasJoystick, 0, ReturnTypes_SDL_HasJoystick, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasJoystick"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasJoystick, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasJoystick */

  /* EXPORT WasmEdgeSDL_SDL_GetJoysticks */
  /* SDL_JoystickID * SDL_GetJoysticks(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoysticks[1], ReturnTypes_SDL_GetJoysticks[1];
  ParamTypes_SDL_GetJoysticks[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoysticks[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoysticks, 1, ReturnTypes_SDL_GetJoysticks, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoysticks"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoysticks, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoysticks */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickNameForID */
  /* const char * SDL_GetJoystickNameForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickNameForID[1], ReturnTypes_SDL_GetJoystickNameForID[1];
  ParamTypes_SDL_GetJoystickNameForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickNameForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickNameForID, 1, ReturnTypes_SDL_GetJoystickNameForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickNameForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickNameForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickNameForID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickPathForID */
  /* const char * SDL_GetJoystickPathForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickPathForID[1], ReturnTypes_SDL_GetJoystickPathForID[1];
  ParamTypes_SDL_GetJoystickPathForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickPathForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickPathForID, 1, ReturnTypes_SDL_GetJoystickPathForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickPathForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickPathForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickPathForID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickPlayerIndexForID */
  /* int SDL_GetJoystickPlayerIndexForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickPlayerIndexForID[1], ReturnTypes_SDL_GetJoystickPlayerIndexForID[1];
  ParamTypes_SDL_GetJoystickPlayerIndexForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickPlayerIndexForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickPlayerIndexForID, 1, ReturnTypes_SDL_GetJoystickPlayerIndexForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickPlayerIndexForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickPlayerIndexForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickPlayerIndexForID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickGUIDForID */
  /* SDL_GUID SDL_GetJoystickGUIDForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickGUIDForID[1], ReturnTypes_SDL_GetJoystickGUIDForID[1];
  ParamTypes_SDL_GetJoystickGUIDForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickGUIDForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickGUIDForID, 1, ReturnTypes_SDL_GetJoystickGUIDForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickGUIDForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickGUIDForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickGUIDForID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickVendorForID */
  /* Uint16 SDL_GetJoystickVendorForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickVendorForID[1], ReturnTypes_SDL_GetJoystickVendorForID[1];
  ParamTypes_SDL_GetJoystickVendorForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickVendorForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickVendorForID, 1, ReturnTypes_SDL_GetJoystickVendorForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickVendorForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickVendorForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickVendorForID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickProductForID */
  /* Uint16 SDL_GetJoystickProductForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickProductForID[1], ReturnTypes_SDL_GetJoystickProductForID[1];
  ParamTypes_SDL_GetJoystickProductForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickProductForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickProductForID, 1, ReturnTypes_SDL_GetJoystickProductForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickProductForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickProductForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickProductForID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickProductVersionForID */
  /* Uint16 SDL_GetJoystickProductVersionForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickProductVersionForID[1], ReturnTypes_SDL_GetJoystickProductVersionForID[1];
  ParamTypes_SDL_GetJoystickProductVersionForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickProductVersionForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickProductVersionForID, 1, ReturnTypes_SDL_GetJoystickProductVersionForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickProductVersionForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickProductVersionForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickProductVersionForID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickTypeForID */
  /* SDL_JoystickType SDL_GetJoystickTypeForID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickTypeForID[1], ReturnTypes_SDL_GetJoystickTypeForID[1];
  ParamTypes_SDL_GetJoystickTypeForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickTypeForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickTypeForID, 1, ReturnTypes_SDL_GetJoystickTypeForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickTypeForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickTypeForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickTypeForID */

  /* EXPORT WasmEdgeSDL_SDL_OpenJoystick */
  /* SDL_Joystick * SDL_OpenJoystick(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenJoystick[1], ReturnTypes_SDL_OpenJoystick[1];
  ParamTypes_SDL_OpenJoystick[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenJoystick[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenJoystick, 1, ReturnTypes_SDL_OpenJoystick, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenJoystick"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenJoystick, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenJoystick */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickFromID */
  /* SDL_Joystick * SDL_GetJoystickFromID(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickFromID[1], ReturnTypes_SDL_GetJoystickFromID[1];
  ParamTypes_SDL_GetJoystickFromID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickFromID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickFromID, 1, ReturnTypes_SDL_GetJoystickFromID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickFromID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickFromID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickFromID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickFromPlayerIndex */
  /* SDL_Joystick * SDL_GetJoystickFromPlayerIndex(int player_index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickFromPlayerIndex[1], ReturnTypes_SDL_GetJoystickFromPlayerIndex[1];
  ParamTypes_SDL_GetJoystickFromPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickFromPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickFromPlayerIndex, 1, ReturnTypes_SDL_GetJoystickFromPlayerIndex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickFromPlayerIndex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickFromPlayerIndex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickFromPlayerIndex */

  /* EXPORT WasmEdgeSDL_SDL_AttachVirtualJoystick */
  /* SDL_JoystickID SDL_AttachVirtualJoystick(const SDL_VirtualJoystickDesc *desc) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AttachVirtualJoystick[1], ReturnTypes_SDL_AttachVirtualJoystick[1];
  ParamTypes_SDL_AttachVirtualJoystick[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AttachVirtualJoystick[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AttachVirtualJoystick, 1, ReturnTypes_SDL_AttachVirtualJoystick, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AttachVirtualJoystick"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AttachVirtualJoystick, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AttachVirtualJoystick */

  /* EXPORT WasmEdgeSDL_SDL_DetachVirtualJoystick */
  /* bool SDL_DetachVirtualJoystick(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DetachVirtualJoystick[1], ReturnTypes_SDL_DetachVirtualJoystick[1];
  ParamTypes_SDL_DetachVirtualJoystick[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_DetachVirtualJoystick[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DetachVirtualJoystick, 1, ReturnTypes_SDL_DetachVirtualJoystick, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DetachVirtualJoystick"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DetachVirtualJoystick, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DetachVirtualJoystick */

  /* EXPORT WasmEdgeSDL_SDL_IsJoystickVirtual */
  /* bool SDL_IsJoystickVirtual(SDL_JoystickID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsJoystickVirtual[1], ReturnTypes_SDL_IsJoystickVirtual[1];
  ParamTypes_SDL_IsJoystickVirtual[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_IsJoystickVirtual[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsJoystickVirtual, 1, ReturnTypes_SDL_IsJoystickVirtual, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsJoystickVirtual"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsJoystickVirtual, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsJoystickVirtual */

  /* EXPORT WasmEdgeSDL_SDL_SetJoystickVirtualAxis */
  /* bool SDL_SetJoystickVirtualAxis(SDL_Joystick *joystick, int axis, Sint16 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetJoystickVirtualAxis[3], ReturnTypes_SDL_SetJoystickVirtualAxis[1];
  ParamTypes_SDL_SetJoystickVirtualAxis[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualAxis[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualAxis[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetJoystickVirtualAxis[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetJoystickVirtualAxis, 3, ReturnTypes_SDL_SetJoystickVirtualAxis, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetJoystickVirtualAxis"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetJoystickVirtualAxis, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetJoystickVirtualAxis */

  /* EXPORT WasmEdgeSDL_SDL_SetJoystickVirtualBall */
  /* bool SDL_SetJoystickVirtualBall(SDL_Joystick *joystick, int ball, Sint16 xrel, Sint16 yrel) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetJoystickVirtualBall[4], ReturnTypes_SDL_SetJoystickVirtualBall[1];
  ParamTypes_SDL_SetJoystickVirtualBall[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualBall[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualBall[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualBall[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetJoystickVirtualBall[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetJoystickVirtualBall, 4, ReturnTypes_SDL_SetJoystickVirtualBall, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetJoystickVirtualBall"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetJoystickVirtualBall, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetJoystickVirtualBall */

  /* EXPORT WasmEdgeSDL_SDL_SetJoystickVirtualButton */
  /* bool SDL_SetJoystickVirtualButton(SDL_Joystick *joystick, int button, bool down) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetJoystickVirtualButton[3], ReturnTypes_SDL_SetJoystickVirtualButton[1];
  ParamTypes_SDL_SetJoystickVirtualButton[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualButton[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualButton[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetJoystickVirtualButton[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetJoystickVirtualButton, 3, ReturnTypes_SDL_SetJoystickVirtualButton, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetJoystickVirtualButton"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetJoystickVirtualButton, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetJoystickVirtualButton */

  /* EXPORT WasmEdgeSDL_SDL_SetJoystickVirtualHat */
  /* bool SDL_SetJoystickVirtualHat(SDL_Joystick *joystick, int hat, Uint8 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetJoystickVirtualHat[3], ReturnTypes_SDL_SetJoystickVirtualHat[1];
  ParamTypes_SDL_SetJoystickVirtualHat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualHat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualHat[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetJoystickVirtualHat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetJoystickVirtualHat, 3, ReturnTypes_SDL_SetJoystickVirtualHat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetJoystickVirtualHat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetJoystickVirtualHat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetJoystickVirtualHat */

  /* EXPORT WasmEdgeSDL_SDL_SetJoystickVirtualTouchpad */
  /* bool SDL_SetJoystickVirtualTouchpad(SDL_Joystick *joystick, int touchpad, int finger, bool down, float x, float y, float pressure) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetJoystickVirtualTouchpad[7], ReturnTypes_SDL_SetJoystickVirtualTouchpad[1];
  ParamTypes_SDL_SetJoystickVirtualTouchpad[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualTouchpad[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualTouchpad[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualTouchpad[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualTouchpad[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualTouchpad[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickVirtualTouchpad[6] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetJoystickVirtualTouchpad[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetJoystickVirtualTouchpad, 7, ReturnTypes_SDL_SetJoystickVirtualTouchpad, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetJoystickVirtualTouchpad"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetJoystickVirtualTouchpad, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetJoystickVirtualTouchpad */

  /* EXPORT WasmEdgeSDL_SDL_SendJoystickVirtualSensorData */
  /* bool SDL_SendJoystickVirtualSensorData(SDL_Joystick *joystick, SDL_SensorType type, Uint64 sensor_timestamp, const float *data, int num_values) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SendJoystickVirtualSensorData[5], ReturnTypes_SDL_SendJoystickVirtualSensorData[1];
  ParamTypes_SDL_SendJoystickVirtualSensorData[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendJoystickVirtualSensorData[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendJoystickVirtualSensorData[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendJoystickVirtualSensorData[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendJoystickVirtualSensorData[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SendJoystickVirtualSensorData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SendJoystickVirtualSensorData, 5, ReturnTypes_SDL_SendJoystickVirtualSensorData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SendJoystickVirtualSensorData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SendJoystickVirtualSensorData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SendJoystickVirtualSensorData */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickProperties */
  /* SDL_PropertiesID SDL_GetJoystickProperties(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickProperties[1], ReturnTypes_SDL_GetJoystickProperties[1];
  ParamTypes_SDL_GetJoystickProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickProperties, 1, ReturnTypes_SDL_GetJoystickProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickName */
  /* const char * SDL_GetJoystickName(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickName[1], ReturnTypes_SDL_GetJoystickName[1];
  ParamTypes_SDL_GetJoystickName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickName, 1, ReturnTypes_SDL_GetJoystickName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickName */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickPath */
  /* const char * SDL_GetJoystickPath(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickPath[1], ReturnTypes_SDL_GetJoystickPath[1];
  ParamTypes_SDL_GetJoystickPath[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickPath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickPath, 1, ReturnTypes_SDL_GetJoystickPath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickPath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickPath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickPath */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickPlayerIndex */
  /* int SDL_GetJoystickPlayerIndex(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickPlayerIndex[1], ReturnTypes_SDL_GetJoystickPlayerIndex[1];
  ParamTypes_SDL_GetJoystickPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickPlayerIndex, 1, ReturnTypes_SDL_GetJoystickPlayerIndex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickPlayerIndex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickPlayerIndex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickPlayerIndex */

  /* EXPORT WasmEdgeSDL_SDL_SetJoystickPlayerIndex */
  /* bool SDL_SetJoystickPlayerIndex(SDL_Joystick *joystick, int player_index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetJoystickPlayerIndex[2], ReturnTypes_SDL_SetJoystickPlayerIndex[1];
  ParamTypes_SDL_SetJoystickPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickPlayerIndex[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetJoystickPlayerIndex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetJoystickPlayerIndex, 2, ReturnTypes_SDL_SetJoystickPlayerIndex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetJoystickPlayerIndex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetJoystickPlayerIndex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetJoystickPlayerIndex */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickGUID */
  /* SDL_GUID SDL_GetJoystickGUID(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickGUID[1], ReturnTypes_SDL_GetJoystickGUID[1];
  ParamTypes_SDL_GetJoystickGUID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickGUID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickGUID, 1, ReturnTypes_SDL_GetJoystickGUID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickGUID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickGUID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickGUID */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickVendor */
  /* Uint16 SDL_GetJoystickVendor(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickVendor[1], ReturnTypes_SDL_GetJoystickVendor[1];
  ParamTypes_SDL_GetJoystickVendor[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickVendor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickVendor, 1, ReturnTypes_SDL_GetJoystickVendor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickVendor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickVendor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickVendor */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickProduct */
  /* Uint16 SDL_GetJoystickProduct(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickProduct[1], ReturnTypes_SDL_GetJoystickProduct[1];
  ParamTypes_SDL_GetJoystickProduct[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickProduct[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickProduct, 1, ReturnTypes_SDL_GetJoystickProduct, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickProduct"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickProduct, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickProduct */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickProductVersion */
  /* Uint16 SDL_GetJoystickProductVersion(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickProductVersion[1], ReturnTypes_SDL_GetJoystickProductVersion[1];
  ParamTypes_SDL_GetJoystickProductVersion[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickProductVersion[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickProductVersion, 1, ReturnTypes_SDL_GetJoystickProductVersion, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickProductVersion"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickProductVersion, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickProductVersion */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickFirmwareVersion */
  /* Uint16 SDL_GetJoystickFirmwareVersion(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickFirmwareVersion[1], ReturnTypes_SDL_GetJoystickFirmwareVersion[1];
  ParamTypes_SDL_GetJoystickFirmwareVersion[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickFirmwareVersion[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickFirmwareVersion, 1, ReturnTypes_SDL_GetJoystickFirmwareVersion, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickFirmwareVersion"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickFirmwareVersion, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickFirmwareVersion */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickSerial */
  /* const char * SDL_GetJoystickSerial(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickSerial[1], ReturnTypes_SDL_GetJoystickSerial[1];
  ParamTypes_SDL_GetJoystickSerial[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickSerial[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickSerial, 1, ReturnTypes_SDL_GetJoystickSerial, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickSerial"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickSerial, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickSerial */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickType */
  /* SDL_JoystickType SDL_GetJoystickType(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickType[1], ReturnTypes_SDL_GetJoystickType[1];
  ParamTypes_SDL_GetJoystickType[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickType, 1, ReturnTypes_SDL_GetJoystickType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickType */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickGUIDInfo */
  /* void SDL_GetJoystickGUIDInfo(SDL_GUID guid, Uint16 *vendor, Uint16 *product, Uint16 *version, Uint16 *crc16) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickGUIDInfo[5], ReturnTypes_SDL_GetJoystickGUIDInfo[1];
  ParamTypes_SDL_GetJoystickGUIDInfo[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickGUIDInfo[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickGUIDInfo[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickGUIDInfo[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickGUIDInfo[4] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickGUIDInfo, 5, ReturnTypes_SDL_GetJoystickGUIDInfo, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickGUIDInfo"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickGUIDInfo, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickGUIDInfo */

  /* EXPORT WasmEdgeSDL_SDL_JoystickConnected */
  /* bool SDL_JoystickConnected(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_JoystickConnected[1], ReturnTypes_SDL_JoystickConnected[1];
  ParamTypes_SDL_JoystickConnected[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_JoystickConnected[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_JoystickConnected, 1, ReturnTypes_SDL_JoystickConnected, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_JoystickConnected"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_JoystickConnected, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_JoystickConnected */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickID */
  /* SDL_JoystickID SDL_GetJoystickID(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickID[1], ReturnTypes_SDL_GetJoystickID[1];
  ParamTypes_SDL_GetJoystickID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickID, 1, ReturnTypes_SDL_GetJoystickID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickID */

  /* EXPORT WasmEdgeSDL_SDL_GetNumJoystickAxes */
  /* int SDL_GetNumJoystickAxes(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumJoystickAxes[1], ReturnTypes_SDL_GetNumJoystickAxes[1];
  ParamTypes_SDL_GetNumJoystickAxes[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNumJoystickAxes[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumJoystickAxes, 1, ReturnTypes_SDL_GetNumJoystickAxes, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumJoystickAxes"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumJoystickAxes, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumJoystickAxes */

  /* EXPORT WasmEdgeSDL_SDL_GetNumJoystickBalls */
  /* int SDL_GetNumJoystickBalls(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumJoystickBalls[1], ReturnTypes_SDL_GetNumJoystickBalls[1];
  ParamTypes_SDL_GetNumJoystickBalls[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNumJoystickBalls[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumJoystickBalls, 1, ReturnTypes_SDL_GetNumJoystickBalls, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumJoystickBalls"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumJoystickBalls, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumJoystickBalls */

  /* EXPORT WasmEdgeSDL_SDL_GetNumJoystickHats */
  /* int SDL_GetNumJoystickHats(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumJoystickHats[1], ReturnTypes_SDL_GetNumJoystickHats[1];
  ParamTypes_SDL_GetNumJoystickHats[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNumJoystickHats[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumJoystickHats, 1, ReturnTypes_SDL_GetNumJoystickHats, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumJoystickHats"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumJoystickHats, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumJoystickHats */

  /* EXPORT WasmEdgeSDL_SDL_GetNumJoystickButtons */
  /* int SDL_GetNumJoystickButtons(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumJoystickButtons[1], ReturnTypes_SDL_GetNumJoystickButtons[1];
  ParamTypes_SDL_GetNumJoystickButtons[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNumJoystickButtons[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumJoystickButtons, 1, ReturnTypes_SDL_GetNumJoystickButtons, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumJoystickButtons"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumJoystickButtons, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumJoystickButtons */

  /* EXPORT WasmEdgeSDL_SDL_SetJoystickEventsEnabled */
  /* void SDL_SetJoystickEventsEnabled(bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetJoystickEventsEnabled[1], ReturnTypes_SDL_SetJoystickEventsEnabled[1];
  ParamTypes_SDL_SetJoystickEventsEnabled[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetJoystickEventsEnabled, 1, ReturnTypes_SDL_SetJoystickEventsEnabled, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetJoystickEventsEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetJoystickEventsEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetJoystickEventsEnabled */

  /* EXPORT WasmEdgeSDL_SDL_JoystickEventsEnabled */
  /* bool SDL_JoystickEventsEnabled(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_JoystickEventsEnabled[1], ReturnTypes_SDL_JoystickEventsEnabled[1];

  ReturnTypes_SDL_JoystickEventsEnabled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_JoystickEventsEnabled, 0, ReturnTypes_SDL_JoystickEventsEnabled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_JoystickEventsEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_JoystickEventsEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_JoystickEventsEnabled */

  /* EXPORT WasmEdgeSDL_SDL_UpdateJoysticks */
  /* void SDL_UpdateJoysticks(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UpdateJoysticks[1], ReturnTypes_SDL_UpdateJoysticks[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UpdateJoysticks, 0, ReturnTypes_SDL_UpdateJoysticks, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UpdateJoysticks"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UpdateJoysticks, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UpdateJoysticks */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickAxis */
  /* Sint16 SDL_GetJoystickAxis(SDL_Joystick *joystick, int axis) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickAxis[2], ReturnTypes_SDL_GetJoystickAxis[1];
  ParamTypes_SDL_GetJoystickAxis[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickAxis[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickAxis[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickAxis, 2, ReturnTypes_SDL_GetJoystickAxis, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickAxis"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickAxis, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickAxis */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickAxisInitialState */
  /* bool SDL_GetJoystickAxisInitialState(SDL_Joystick *joystick, int axis, Sint16 *state) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickAxisInitialState[3], ReturnTypes_SDL_GetJoystickAxisInitialState[1];
  ParamTypes_SDL_GetJoystickAxisInitialState[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickAxisInitialState[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickAxisInitialState[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickAxisInitialState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickAxisInitialState, 3, ReturnTypes_SDL_GetJoystickAxisInitialState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickAxisInitialState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickAxisInitialState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickAxisInitialState */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickBall */
  /* bool SDL_GetJoystickBall(SDL_Joystick *joystick, int ball, int *dx, int *dy) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickBall[4], ReturnTypes_SDL_GetJoystickBall[1];
  ParamTypes_SDL_GetJoystickBall[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickBall[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickBall[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickBall[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickBall[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickBall, 4, ReturnTypes_SDL_GetJoystickBall, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickBall"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickBall, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickBall */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickHat */
  /* Uint8 SDL_GetJoystickHat(SDL_Joystick *joystick, int hat) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickHat[2], ReturnTypes_SDL_GetJoystickHat[1];
  ParamTypes_SDL_GetJoystickHat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickHat[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickHat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickHat, 2, ReturnTypes_SDL_GetJoystickHat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickHat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickHat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickHat */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickButton */
  /* bool SDL_GetJoystickButton(SDL_Joystick *joystick, int button) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickButton[2], ReturnTypes_SDL_GetJoystickButton[1];
  ParamTypes_SDL_GetJoystickButton[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickButton[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickButton[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickButton, 2, ReturnTypes_SDL_GetJoystickButton, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickButton"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickButton, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickButton */

  /* EXPORT WasmEdgeSDL_SDL_RumbleJoystick */
  /* bool SDL_RumbleJoystick(SDL_Joystick *joystick, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RumbleJoystick[4], ReturnTypes_SDL_RumbleJoystick[1];
  ParamTypes_SDL_RumbleJoystick[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleJoystick[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleJoystick[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleJoystick[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RumbleJoystick[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RumbleJoystick, 4, ReturnTypes_SDL_RumbleJoystick, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RumbleJoystick"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RumbleJoystick, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RumbleJoystick */

  /* EXPORT WasmEdgeSDL_SDL_RumbleJoystickTriggers */
  /* bool SDL_RumbleJoystickTriggers(SDL_Joystick *joystick, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RumbleJoystickTriggers[4], ReturnTypes_SDL_RumbleJoystickTriggers[1];
  ParamTypes_SDL_RumbleJoystickTriggers[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleJoystickTriggers[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleJoystickTriggers[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RumbleJoystickTriggers[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RumbleJoystickTriggers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RumbleJoystickTriggers, 4, ReturnTypes_SDL_RumbleJoystickTriggers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RumbleJoystickTriggers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RumbleJoystickTriggers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RumbleJoystickTriggers */

  /* EXPORT WasmEdgeSDL_SDL_SetJoystickLED */
  /* bool SDL_SetJoystickLED(SDL_Joystick *joystick, Uint8 red, Uint8 green, Uint8 blue) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetJoystickLED[4], ReturnTypes_SDL_SetJoystickLED[1];
  ParamTypes_SDL_SetJoystickLED[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickLED[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickLED[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetJoystickLED[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetJoystickLED[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetJoystickLED, 4, ReturnTypes_SDL_SetJoystickLED, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetJoystickLED"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetJoystickLED, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetJoystickLED */

  /* EXPORT WasmEdgeSDL_SDL_SendJoystickEffect */
  /* bool SDL_SendJoystickEffect(SDL_Joystick *joystick, const void *data, int size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SendJoystickEffect[3], ReturnTypes_SDL_SendJoystickEffect[1];
  ParamTypes_SDL_SendJoystickEffect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendJoystickEffect[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendJoystickEffect[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SendJoystickEffect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SendJoystickEffect, 3, ReturnTypes_SDL_SendJoystickEffect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SendJoystickEffect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SendJoystickEffect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SendJoystickEffect */

  /* EXPORT WasmEdgeSDL_SDL_CloseJoystick */
  /* void SDL_CloseJoystick(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseJoystick[1], ReturnTypes_SDL_CloseJoystick[1];
  ParamTypes_SDL_CloseJoystick[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseJoystick, 1, ReturnTypes_SDL_CloseJoystick, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseJoystick"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseJoystick, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseJoystick */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickConnectionState */
  /* SDL_JoystickConnectionState SDL_GetJoystickConnectionState(SDL_Joystick *joystick) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickConnectionState[1], ReturnTypes_SDL_GetJoystickConnectionState[1];
  ParamTypes_SDL_GetJoystickConnectionState[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickConnectionState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickConnectionState, 1, ReturnTypes_SDL_GetJoystickConnectionState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickConnectionState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickConnectionState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickConnectionState */

  /* EXPORT WasmEdgeSDL_SDL_GetJoystickPowerInfo */
  /* SDL_PowerState SDL_GetJoystickPowerInfo(SDL_Joystick *joystick, int *percent) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetJoystickPowerInfo[2], ReturnTypes_SDL_GetJoystickPowerInfo[1];
  ParamTypes_SDL_GetJoystickPowerInfo[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetJoystickPowerInfo[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetJoystickPowerInfo[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetJoystickPowerInfo, 2, ReturnTypes_SDL_GetJoystickPowerInfo, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetJoystickPowerInfo"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetJoystickPowerInfo, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetJoystickPowerInfo */

  /* EXPORT WasmEdgeSDL_SDL_HasKeyboard */
  /* bool SDL_HasKeyboard(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasKeyboard[1], ReturnTypes_SDL_HasKeyboard[1];

  ReturnTypes_SDL_HasKeyboard[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasKeyboard, 0, ReturnTypes_SDL_HasKeyboard, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasKeyboard"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasKeyboard, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasKeyboard */

  /* EXPORT WasmEdgeSDL_SDL_GetKeyboards */
  /* SDL_KeyboardID * SDL_GetKeyboards(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetKeyboards[1], ReturnTypes_SDL_GetKeyboards[1];
  ParamTypes_SDL_GetKeyboards[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetKeyboards[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetKeyboards, 1, ReturnTypes_SDL_GetKeyboards, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetKeyboards"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetKeyboards, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetKeyboards */

  /* EXPORT WasmEdgeSDL_SDL_GetKeyboardNameForID */
  /* const char * SDL_GetKeyboardNameForID(SDL_KeyboardID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetKeyboardNameForID[1], ReturnTypes_SDL_GetKeyboardNameForID[1];
  ParamTypes_SDL_GetKeyboardNameForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetKeyboardNameForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetKeyboardNameForID, 1, ReturnTypes_SDL_GetKeyboardNameForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetKeyboardNameForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetKeyboardNameForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetKeyboardNameForID */

  /* EXPORT WasmEdgeSDL_SDL_GetKeyboardFocus */
  /* SDL_Window * SDL_GetKeyboardFocus(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetKeyboardFocus[1], ReturnTypes_SDL_GetKeyboardFocus[1];

  ReturnTypes_SDL_GetKeyboardFocus[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetKeyboardFocus, 0, ReturnTypes_SDL_GetKeyboardFocus, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetKeyboardFocus"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetKeyboardFocus, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetKeyboardFocus */

  /* EXPORT WasmEdgeSDL_SDL_GetKeyboardState */
  /* const bool * SDL_GetKeyboardState(int *numkeys) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetKeyboardState[1], ReturnTypes_SDL_GetKeyboardState[1];
  ParamTypes_SDL_GetKeyboardState[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetKeyboardState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetKeyboardState, 1, ReturnTypes_SDL_GetKeyboardState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetKeyboardState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetKeyboardState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetKeyboardState */

  /* EXPORT WasmEdgeSDL_SDL_ResetKeyboard */
  /* void SDL_ResetKeyboard(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ResetKeyboard[1], ReturnTypes_SDL_ResetKeyboard[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ResetKeyboard, 0, ReturnTypes_SDL_ResetKeyboard, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ResetKeyboard"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ResetKeyboard, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ResetKeyboard */

  /* EXPORT WasmEdgeSDL_SDL_GetModState */
  /* SDL_Keymod SDL_GetModState(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetModState[1], ReturnTypes_SDL_GetModState[1];

  ReturnTypes_SDL_GetModState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetModState, 0, ReturnTypes_SDL_GetModState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetModState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetModState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetModState */

  /* EXPORT WasmEdgeSDL_SDL_SetModState */
  /* void SDL_SetModState(SDL_Keymod modstate) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetModState[1], ReturnTypes_SDL_SetModState[1];
  ParamTypes_SDL_SetModState[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetModState, 1, ReturnTypes_SDL_SetModState, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetModState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetModState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetModState */

  /* EXPORT WasmEdgeSDL_SDL_GetKeyFromScancode */
  /* SDL_Keycode SDL_GetKeyFromScancode(SDL_Scancode scancode, SDL_Keymod modstate, bool key_event) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetKeyFromScancode[3], ReturnTypes_SDL_GetKeyFromScancode[1];
  ParamTypes_SDL_GetKeyFromScancode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetKeyFromScancode[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetKeyFromScancode[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetKeyFromScancode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetKeyFromScancode, 3, ReturnTypes_SDL_GetKeyFromScancode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetKeyFromScancode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetKeyFromScancode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetKeyFromScancode */

  /* EXPORT WasmEdgeSDL_SDL_GetScancodeFromKey */
  /* SDL_Scancode SDL_GetScancodeFromKey(SDL_Keycode key, SDL_Keymod *modstate) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetScancodeFromKey[2], ReturnTypes_SDL_GetScancodeFromKey[1];
  ParamTypes_SDL_GetScancodeFromKey[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetScancodeFromKey[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetScancodeFromKey[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetScancodeFromKey, 2, ReturnTypes_SDL_GetScancodeFromKey, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetScancodeFromKey"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetScancodeFromKey, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetScancodeFromKey */

  /* EXPORT WasmEdgeSDL_SDL_SetScancodeName */
  /* bool SDL_SetScancodeName(SDL_Scancode scancode, const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetScancodeName[2], ReturnTypes_SDL_SetScancodeName[1];
  ParamTypes_SDL_SetScancodeName[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetScancodeName[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetScancodeName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetScancodeName, 2, ReturnTypes_SDL_SetScancodeName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetScancodeName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetScancodeName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetScancodeName */

  /* EXPORT WasmEdgeSDL_SDL_GetScancodeName */
  /* const char * SDL_GetScancodeName(SDL_Scancode scancode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetScancodeName[1], ReturnTypes_SDL_GetScancodeName[1];
  ParamTypes_SDL_GetScancodeName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetScancodeName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetScancodeName, 1, ReturnTypes_SDL_GetScancodeName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetScancodeName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetScancodeName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetScancodeName */

  /* EXPORT WasmEdgeSDL_SDL_GetScancodeFromName */
  /* SDL_Scancode SDL_GetScancodeFromName(const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetScancodeFromName[1], ReturnTypes_SDL_GetScancodeFromName[1];
  ParamTypes_SDL_GetScancodeFromName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetScancodeFromName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetScancodeFromName, 1, ReturnTypes_SDL_GetScancodeFromName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetScancodeFromName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetScancodeFromName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetScancodeFromName */

  /* EXPORT WasmEdgeSDL_SDL_GetKeyName */
  /* const char * SDL_GetKeyName(SDL_Keycode key) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetKeyName[1], ReturnTypes_SDL_GetKeyName[1];
  ParamTypes_SDL_GetKeyName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetKeyName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetKeyName, 1, ReturnTypes_SDL_GetKeyName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetKeyName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetKeyName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetKeyName */

  /* EXPORT WasmEdgeSDL_SDL_GetKeyFromName */
  /* SDL_Keycode SDL_GetKeyFromName(const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetKeyFromName[1], ReturnTypes_SDL_GetKeyFromName[1];
  ParamTypes_SDL_GetKeyFromName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetKeyFromName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetKeyFromName, 1, ReturnTypes_SDL_GetKeyFromName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetKeyFromName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetKeyFromName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetKeyFromName */

  /* EXPORT WasmEdgeSDL_SDL_StartTextInput */
  /* bool SDL_StartTextInput(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StartTextInput[1], ReturnTypes_SDL_StartTextInput[1];
  ParamTypes_SDL_StartTextInput[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StartTextInput[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StartTextInput, 1, ReturnTypes_SDL_StartTextInput, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StartTextInput"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StartTextInput, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StartTextInput */

  /* EXPORT WasmEdgeSDL_SDL_StartTextInputWithProperties */
  /* bool SDL_StartTextInputWithProperties(SDL_Window *window, SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StartTextInputWithProperties[2], ReturnTypes_SDL_StartTextInputWithProperties[1];
  ParamTypes_SDL_StartTextInputWithProperties[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_StartTextInputWithProperties[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StartTextInputWithProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StartTextInputWithProperties, 2, ReturnTypes_SDL_StartTextInputWithProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StartTextInputWithProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StartTextInputWithProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StartTextInputWithProperties */

  /* EXPORT WasmEdgeSDL_SDL_TextInputActive */
  /* bool SDL_TextInputActive(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TextInputActive[1], ReturnTypes_SDL_TextInputActive[1];
  ParamTypes_SDL_TextInputActive[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TextInputActive[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TextInputActive, 1, ReturnTypes_SDL_TextInputActive, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TextInputActive"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TextInputActive, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TextInputActive */

  /* EXPORT WasmEdgeSDL_SDL_StopTextInput */
  /* bool SDL_StopTextInput(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StopTextInput[1], ReturnTypes_SDL_StopTextInput[1];
  ParamTypes_SDL_StopTextInput[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StopTextInput[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StopTextInput, 1, ReturnTypes_SDL_StopTextInput, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StopTextInput"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StopTextInput, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StopTextInput */

  /* EXPORT WasmEdgeSDL_SDL_ClearComposition */
  /* bool SDL_ClearComposition(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ClearComposition[1], ReturnTypes_SDL_ClearComposition[1];
  ParamTypes_SDL_ClearComposition[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ClearComposition[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ClearComposition, 1, ReturnTypes_SDL_ClearComposition, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ClearComposition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ClearComposition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ClearComposition */

  /* EXPORT WasmEdgeSDL_SDL_SetTextInputArea */
  /* bool SDL_SetTextInputArea(SDL_Window *window, const SDL_Rect *rect, int cursor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTextInputArea[3], ReturnTypes_SDL_SetTextInputArea[1];
  ParamTypes_SDL_SetTextInputArea[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextInputArea[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextInputArea[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetTextInputArea[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTextInputArea, 3, ReturnTypes_SDL_SetTextInputArea, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTextInputArea"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTextInputArea, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTextInputArea */

  /* EXPORT WasmEdgeSDL_SDL_GetTextInputArea */
  /* bool SDL_GetTextInputArea(SDL_Window *window, SDL_Rect *rect, int *cursor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextInputArea[3], ReturnTypes_SDL_GetTextInputArea[1];
  ParamTypes_SDL_GetTextInputArea[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextInputArea[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextInputArea[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextInputArea[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextInputArea, 3, ReturnTypes_SDL_GetTextInputArea, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextInputArea"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextInputArea, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextInputArea */

  /* EXPORT WasmEdgeSDL_SDL_HasScreenKeyboardSupport */
  /* bool SDL_HasScreenKeyboardSupport(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasScreenKeyboardSupport[1], ReturnTypes_SDL_HasScreenKeyboardSupport[1];

  ReturnTypes_SDL_HasScreenKeyboardSupport[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasScreenKeyboardSupport, 0, ReturnTypes_SDL_HasScreenKeyboardSupport, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasScreenKeyboardSupport"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasScreenKeyboardSupport, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasScreenKeyboardSupport */

  /* EXPORT WasmEdgeSDL_SDL_ScreenKeyboardShown */
  /* bool SDL_ScreenKeyboardShown(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ScreenKeyboardShown[1], ReturnTypes_SDL_ScreenKeyboardShown[1];
  ParamTypes_SDL_ScreenKeyboardShown[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ScreenKeyboardShown[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ScreenKeyboardShown, 1, ReturnTypes_SDL_ScreenKeyboardShown, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ScreenKeyboardShown"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ScreenKeyboardShown, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ScreenKeyboardShown */

  /* EXPORT WasmEdgeSDL_SDL_LoadObject */
  /* SDL_SharedObject * SDL_LoadObject(const char *sofile) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadObject[1], ReturnTypes_SDL_LoadObject[1];
  ParamTypes_SDL_LoadObject[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadObject[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadObject, 1, ReturnTypes_SDL_LoadObject, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadObject"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadObject, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadObject */

  /* EXPORT WasmEdgeSDL_SDL_LoadFunction */
  /* SDL_FunctionPointer SDL_LoadFunction(SDL_SharedObject *handle, const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadFunction[2], ReturnTypes_SDL_LoadFunction[1];
  ParamTypes_SDL_LoadFunction[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadFunction[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadFunction[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadFunction, 2, ReturnTypes_SDL_LoadFunction, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadFunction"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadFunction, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadFunction */

  /* EXPORT WasmEdgeSDL_SDL_UnloadObject */
  /* void SDL_UnloadObject(SDL_SharedObject *handle) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnloadObject[1], ReturnTypes_SDL_UnloadObject[1];
  ParamTypes_SDL_UnloadObject[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnloadObject, 1, ReturnTypes_SDL_UnloadObject, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnloadObject"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnloadObject, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnloadObject */

  /* EXPORT WasmEdgeSDL_SDL_GetPreferredLocales */
  /* SDL_Locale ** SDL_GetPreferredLocales(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPreferredLocales[1], ReturnTypes_SDL_GetPreferredLocales[1];
  ParamTypes_SDL_GetPreferredLocales[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPreferredLocales[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPreferredLocales, 1, ReturnTypes_SDL_GetPreferredLocales, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPreferredLocales"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPreferredLocales, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPreferredLocales */

  /* EXPORT WasmEdgeSDL_SDL_SetLogPriorities */
  /* void SDL_SetLogPriorities(SDL_LogPriority priority) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetLogPriorities[1], ReturnTypes_SDL_SetLogPriorities[1];
  ParamTypes_SDL_SetLogPriorities[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetLogPriorities, 1, ReturnTypes_SDL_SetLogPriorities, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetLogPriorities"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetLogPriorities, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetLogPriorities */

  /* EXPORT WasmEdgeSDL_SDL_SetLogPriority */
  /* void SDL_SetLogPriority(int category, SDL_LogPriority priority) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetLogPriority[2], ReturnTypes_SDL_SetLogPriority[1];
  ParamTypes_SDL_SetLogPriority[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetLogPriority[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetLogPriority, 2, ReturnTypes_SDL_SetLogPriority, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetLogPriority"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetLogPriority, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetLogPriority */

  /* EXPORT WasmEdgeSDL_SDL_GetLogPriority */
  /* SDL_LogPriority SDL_GetLogPriority(int category) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetLogPriority[1], ReturnTypes_SDL_GetLogPriority[1];
  ParamTypes_SDL_GetLogPriority[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetLogPriority[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetLogPriority, 1, ReturnTypes_SDL_GetLogPriority, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetLogPriority"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetLogPriority, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetLogPriority */

  /* EXPORT WasmEdgeSDL_SDL_ResetLogPriorities */
  /* void SDL_ResetLogPriorities(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ResetLogPriorities[1], ReturnTypes_SDL_ResetLogPriorities[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ResetLogPriorities, 0, ReturnTypes_SDL_ResetLogPriorities, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ResetLogPriorities"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ResetLogPriorities, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ResetLogPriorities */

  /* EXPORT WasmEdgeSDL_SDL_SetLogPriorityPrefix */
  /* bool SDL_SetLogPriorityPrefix(SDL_LogPriority priority, const char *prefix) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetLogPriorityPrefix[2], ReturnTypes_SDL_SetLogPriorityPrefix[1];
  ParamTypes_SDL_SetLogPriorityPrefix[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetLogPriorityPrefix[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetLogPriorityPrefix[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetLogPriorityPrefix, 2, ReturnTypes_SDL_SetLogPriorityPrefix, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetLogPriorityPrefix"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetLogPriorityPrefix, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetLogPriorityPrefix */

  /* EXPORT WasmEdgeSDL_SDL_Log */
  /* void SDL_Log(SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  WasmEdge_ValType ParamTypes_SDL_Log[2], ReturnTypes_SDL_Log[1];
  ParamTypes_SDL_Log[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_Log[1] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Log, 2, ReturnTypes_SDL_Log, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Log"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Log, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Log */

  /* EXPORT WasmEdgeSDL_SDL_LogTrace */
  /* void SDL_LogTrace(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LogTrace[3], ReturnTypes_SDL_LogTrace[1];
  ParamTypes_SDL_LogTrace[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogTrace[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogTrace[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LogTrace, 3, ReturnTypes_SDL_LogTrace, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LogTrace"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LogTrace, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LogTrace */

  /* EXPORT WasmEdgeSDL_SDL_LogVerbose */
  /* void SDL_LogVerbose(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LogVerbose[3], ReturnTypes_SDL_LogVerbose[1];
  ParamTypes_SDL_LogVerbose[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogVerbose[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogVerbose[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LogVerbose, 3, ReturnTypes_SDL_LogVerbose, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LogVerbose"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LogVerbose, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LogVerbose */

  /* EXPORT WasmEdgeSDL_SDL_LogDebug */
  /* void SDL_LogDebug(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LogDebug[3], ReturnTypes_SDL_LogDebug[1];
  ParamTypes_SDL_LogDebug[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogDebug[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogDebug[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LogDebug, 3, ReturnTypes_SDL_LogDebug, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LogDebug"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LogDebug, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LogDebug */

  /* EXPORT WasmEdgeSDL_SDL_LogInfo */
  /* void SDL_LogInfo(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LogInfo[3], ReturnTypes_SDL_LogInfo[1];
  ParamTypes_SDL_LogInfo[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogInfo[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogInfo[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LogInfo, 3, ReturnTypes_SDL_LogInfo, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LogInfo"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LogInfo, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LogInfo */

  /* EXPORT WasmEdgeSDL_SDL_LogWarn */
  /* void SDL_LogWarn(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LogWarn[3], ReturnTypes_SDL_LogWarn[1];
  ParamTypes_SDL_LogWarn[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogWarn[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogWarn[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LogWarn, 3, ReturnTypes_SDL_LogWarn, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LogWarn"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LogWarn, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LogWarn */

  /* EXPORT WasmEdgeSDL_SDL_LogError */
  /* void SDL_LogError(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LogError[3], ReturnTypes_SDL_LogError[1];
  ParamTypes_SDL_LogError[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogError[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogError[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LogError, 3, ReturnTypes_SDL_LogError, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LogError"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LogError, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LogError */

  /* EXPORT WasmEdgeSDL_SDL_LogCritical */
  /* void SDL_LogCritical(int category, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LogCritical[3], ReturnTypes_SDL_LogCritical[1];
  ParamTypes_SDL_LogCritical[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogCritical[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LogCritical[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LogCritical, 3, ReturnTypes_SDL_LogCritical, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LogCritical"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LogCritical, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LogCritical */

  /* EXPORT WasmEdgeSDL_SDL_GetDefaultLogOutputFunction */
  /* SDL_LogOutputFunction SDL_GetDefaultLogOutputFunction(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDefaultLogOutputFunction[1], ReturnTypes_SDL_GetDefaultLogOutputFunction[1];

  ReturnTypes_SDL_GetDefaultLogOutputFunction[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDefaultLogOutputFunction, 0, ReturnTypes_SDL_GetDefaultLogOutputFunction, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDefaultLogOutputFunction"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDefaultLogOutputFunction, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDefaultLogOutputFunction */

  /* EXPORT WasmEdgeSDL_SDL_GetLogOutputFunction */
  /* void SDL_GetLogOutputFunction(SDL_LogOutputFunction *callback, void **userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetLogOutputFunction[2], ReturnTypes_SDL_GetLogOutputFunction[1];
  ParamTypes_SDL_GetLogOutputFunction[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetLogOutputFunction[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetLogOutputFunction, 2, ReturnTypes_SDL_GetLogOutputFunction, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetLogOutputFunction"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetLogOutputFunction, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetLogOutputFunction */

  /* EXPORT WasmEdgeSDL_SDL_SetLogOutputFunction */
  /* void SDL_SetLogOutputFunction(SDL_LogOutputFunction callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetLogOutputFunction[2], ReturnTypes_SDL_SetLogOutputFunction[1];
  ParamTypes_SDL_SetLogOutputFunction[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetLogOutputFunction[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetLogOutputFunction, 2, ReturnTypes_SDL_SetLogOutputFunction, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetLogOutputFunction"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetLogOutputFunction, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetLogOutputFunction */

  /* EXPORT WasmEdgeSDL_SDL_SetMainReady */
  /* void SDL_SetMainReady(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetMainReady[1], ReturnTypes_SDL_SetMainReady[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetMainReady, 0, ReturnTypes_SDL_SetMainReady, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetMainReady"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetMainReady, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetMainReady */

  /* EXPORT WasmEdgeSDL_SDL_RunApp */
  /* int SDL_RunApp(int argc, char *argv[], SDL_main_func mainFunction, void *reserved) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RunApp[4], ReturnTypes_SDL_RunApp[1];
  ParamTypes_SDL_RunApp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RunApp[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RunApp[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RunApp[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RunApp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RunApp, 4, ReturnTypes_SDL_RunApp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RunApp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RunApp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RunApp */

  /* EXPORT WasmEdgeSDL_SDL_EnterAppMainCallbacks */
  /* int SDL_EnterAppMainCallbacks(int argc, char *argv[], SDL_AppInit_func appinit, SDL_AppIterate_func appiter, SDL_AppEvent_func appevent, SDL_AppQuit_func appquit) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EnterAppMainCallbacks[6], ReturnTypes_SDL_EnterAppMainCallbacks[1];
  ParamTypes_SDL_EnterAppMainCallbacks[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnterAppMainCallbacks[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnterAppMainCallbacks[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnterAppMainCallbacks[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnterAppMainCallbacks[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnterAppMainCallbacks[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_EnterAppMainCallbacks[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EnterAppMainCallbacks, 6, ReturnTypes_SDL_EnterAppMainCallbacks, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EnterAppMainCallbacks"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EnterAppMainCallbacks, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EnterAppMainCallbacks */

  /* EXPORT WasmEdgeSDL_SDL_RegisterApp */
  /* bool SDL_RegisterApp(const char *name, Uint32 style, void *hInst) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RegisterApp[3], ReturnTypes_SDL_RegisterApp[1];
  ParamTypes_SDL_RegisterApp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RegisterApp[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RegisterApp[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RegisterApp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RegisterApp, 3, ReturnTypes_SDL_RegisterApp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RegisterApp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RegisterApp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RegisterApp */

  /* EXPORT WasmEdgeSDL_SDL_UnregisterApp */
  /* void SDL_UnregisterApp(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnregisterApp[1], ReturnTypes_SDL_UnregisterApp[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnregisterApp, 0, ReturnTypes_SDL_UnregisterApp, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnregisterApp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnregisterApp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnregisterApp */

  /* EXPORT WasmEdgeSDL_SDL_GDKSuspendComplete */
  /* void SDL_GDKSuspendComplete(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GDKSuspendComplete[1], ReturnTypes_SDL_GDKSuspendComplete[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GDKSuspendComplete, 0, ReturnTypes_SDL_GDKSuspendComplete, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GDKSuspendComplete"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GDKSuspendComplete, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GDKSuspendComplete */

  /* EXPORT WasmEdgeSDL_SDL_ShowMessageBox */
  /* bool SDL_ShowMessageBox(const SDL_MessageBoxData *messageboxdata, int *buttonid) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowMessageBox[2], ReturnTypes_SDL_ShowMessageBox[1];
  ParamTypes_SDL_ShowMessageBox[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowMessageBox[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ShowMessageBox[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowMessageBox, 2, ReturnTypes_SDL_ShowMessageBox, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowMessageBox"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowMessageBox, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowMessageBox */

  /* EXPORT WasmEdgeSDL_SDL_ShowSimpleMessageBox */
  /* bool SDL_ShowSimpleMessageBox(SDL_MessageBoxFlags flags, const char *title, const char *message, SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowSimpleMessageBox[4], ReturnTypes_SDL_ShowSimpleMessageBox[1];
  ParamTypes_SDL_ShowSimpleMessageBox[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowSimpleMessageBox[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowSimpleMessageBox[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowSimpleMessageBox[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ShowSimpleMessageBox[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowSimpleMessageBox, 4, ReturnTypes_SDL_ShowSimpleMessageBox, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowSimpleMessageBox"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowSimpleMessageBox, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowSimpleMessageBox */

  /* EXPORT WasmEdgeSDL_SDL_Metal_CreateView */
  /* SDL_MetalView SDL_Metal_CreateView(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_Metal_CreateView[1], ReturnTypes_SDL_Metal_CreateView[1];
  ParamTypes_SDL_Metal_CreateView[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_Metal_CreateView[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Metal_CreateView, 1, ReturnTypes_SDL_Metal_CreateView, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Metal_CreateView"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Metal_CreateView, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Metal_CreateView */

  /* EXPORT WasmEdgeSDL_SDL_Metal_DestroyView */
  /* void SDL_Metal_DestroyView(SDL_MetalView view) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_Metal_DestroyView[1], ReturnTypes_SDL_Metal_DestroyView[1];
  ParamTypes_SDL_Metal_DestroyView[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Metal_DestroyView, 1, ReturnTypes_SDL_Metal_DestroyView, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Metal_DestroyView"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Metal_DestroyView, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Metal_DestroyView */

  /* EXPORT WasmEdgeSDL_SDL_Metal_GetLayer */
  /* void * SDL_Metal_GetLayer(SDL_MetalView view) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_Metal_GetLayer[1], ReturnTypes_SDL_Metal_GetLayer[1];
  ParamTypes_SDL_Metal_GetLayer[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_Metal_GetLayer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Metal_GetLayer, 1, ReturnTypes_SDL_Metal_GetLayer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Metal_GetLayer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Metal_GetLayer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Metal_GetLayer */

  /* EXPORT WasmEdgeSDL_SDL_OpenURL */
  /* bool SDL_OpenURL(const char *url) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenURL[1], ReturnTypes_SDL_OpenURL[1];
  ParamTypes_SDL_OpenURL[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenURL[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenURL, 1, ReturnTypes_SDL_OpenURL, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenURL"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenURL, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenURL */

  /* EXPORT WasmEdgeSDL_SDL_HasMouse */
  /* bool SDL_HasMouse(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasMouse[1], ReturnTypes_SDL_HasMouse[1];

  ReturnTypes_SDL_HasMouse[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasMouse, 0, ReturnTypes_SDL_HasMouse, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasMouse"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasMouse, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasMouse */

  /* EXPORT WasmEdgeSDL_SDL_GetMice */
  /* SDL_MouseID * SDL_GetMice(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetMice[1], ReturnTypes_SDL_GetMice[1];
  ParamTypes_SDL_GetMice[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetMice[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetMice, 1, ReturnTypes_SDL_GetMice, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetMice"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetMice, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetMice */

  /* EXPORT WasmEdgeSDL_SDL_GetMouseNameForID */
  /* const char * SDL_GetMouseNameForID(SDL_MouseID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetMouseNameForID[1], ReturnTypes_SDL_GetMouseNameForID[1];
  ParamTypes_SDL_GetMouseNameForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetMouseNameForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetMouseNameForID, 1, ReturnTypes_SDL_GetMouseNameForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetMouseNameForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetMouseNameForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetMouseNameForID */

  /* EXPORT WasmEdgeSDL_SDL_GetMouseFocus */
  /* SDL_Window * SDL_GetMouseFocus(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetMouseFocus[1], ReturnTypes_SDL_GetMouseFocus[1];

  ReturnTypes_SDL_GetMouseFocus[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetMouseFocus, 0, ReturnTypes_SDL_GetMouseFocus, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetMouseFocus"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetMouseFocus, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetMouseFocus */

  /* EXPORT WasmEdgeSDL_SDL_GetMouseState */
  /* SDL_MouseButtonFlags SDL_GetMouseState(float *x, float *y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetMouseState[2], ReturnTypes_SDL_GetMouseState[1];
  ParamTypes_SDL_GetMouseState[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetMouseState[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetMouseState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetMouseState, 2, ReturnTypes_SDL_GetMouseState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetMouseState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetMouseState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetMouseState */

  /* EXPORT WasmEdgeSDL_SDL_GetGlobalMouseState */
  /* SDL_MouseButtonFlags SDL_GetGlobalMouseState(float *x, float *y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGlobalMouseState[2], ReturnTypes_SDL_GetGlobalMouseState[1];
  ParamTypes_SDL_GetGlobalMouseState[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetGlobalMouseState[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGlobalMouseState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGlobalMouseState, 2, ReturnTypes_SDL_GetGlobalMouseState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGlobalMouseState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGlobalMouseState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGlobalMouseState */

  /* EXPORT WasmEdgeSDL_SDL_GetRelativeMouseState */
  /* SDL_MouseButtonFlags SDL_GetRelativeMouseState(float *x, float *y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRelativeMouseState[2], ReturnTypes_SDL_GetRelativeMouseState[1];
  ParamTypes_SDL_GetRelativeMouseState[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRelativeMouseState[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRelativeMouseState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRelativeMouseState, 2, ReturnTypes_SDL_GetRelativeMouseState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRelativeMouseState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRelativeMouseState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRelativeMouseState */

  /* EXPORT WasmEdgeSDL_SDL_WarpMouseGlobal */
  /* bool SDL_WarpMouseGlobal(float x, float y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WarpMouseGlobal[2], ReturnTypes_SDL_WarpMouseGlobal[1];
  ParamTypes_SDL_WarpMouseGlobal[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WarpMouseGlobal[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WarpMouseGlobal[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WarpMouseGlobal, 2, ReturnTypes_SDL_WarpMouseGlobal, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WarpMouseGlobal"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WarpMouseGlobal, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WarpMouseGlobal */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowRelativeMouseMode */
  /* bool SDL_SetWindowRelativeMouseMode(SDL_Window *window, bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowRelativeMouseMode[2], ReturnTypes_SDL_SetWindowRelativeMouseMode[1];
  ParamTypes_SDL_SetWindowRelativeMouseMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowRelativeMouseMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowRelativeMouseMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowRelativeMouseMode, 2, ReturnTypes_SDL_SetWindowRelativeMouseMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowRelativeMouseMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowRelativeMouseMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowRelativeMouseMode */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowRelativeMouseMode */
  /* bool SDL_GetWindowRelativeMouseMode(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowRelativeMouseMode[1], ReturnTypes_SDL_GetWindowRelativeMouseMode[1];
  ParamTypes_SDL_GetWindowRelativeMouseMode[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowRelativeMouseMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowRelativeMouseMode, 1, ReturnTypes_SDL_GetWindowRelativeMouseMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowRelativeMouseMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowRelativeMouseMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowRelativeMouseMode */

  /* EXPORT WasmEdgeSDL_SDL_CaptureMouse */
  /* bool SDL_CaptureMouse(bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CaptureMouse[1], ReturnTypes_SDL_CaptureMouse[1];
  ParamTypes_SDL_CaptureMouse[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CaptureMouse[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CaptureMouse, 1, ReturnTypes_SDL_CaptureMouse, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CaptureMouse"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CaptureMouse, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CaptureMouse */

  /* EXPORT WasmEdgeSDL_SDL_CreateSystemCursor */
  /* SDL_Cursor * SDL_CreateSystemCursor(SDL_SystemCursor id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateSystemCursor[1], ReturnTypes_SDL_CreateSystemCursor[1];
  ParamTypes_SDL_CreateSystemCursor[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateSystemCursor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateSystemCursor, 1, ReturnTypes_SDL_CreateSystemCursor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateSystemCursor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateSystemCursor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateSystemCursor */

  /* EXPORT WasmEdgeSDL_SDL_SetCursor */
  /* bool SDL_SetCursor(SDL_Cursor *cursor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetCursor[1], ReturnTypes_SDL_SetCursor[1];
  ParamTypes_SDL_SetCursor[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetCursor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetCursor, 1, ReturnTypes_SDL_SetCursor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetCursor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetCursor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetCursor */

  /* EXPORT WasmEdgeSDL_SDL_GetCursor */
  /* SDL_Cursor * SDL_GetCursor(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCursor[1], ReturnTypes_SDL_GetCursor[1];

  ReturnTypes_SDL_GetCursor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCursor, 0, ReturnTypes_SDL_GetCursor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCursor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCursor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCursor */

  /* EXPORT WasmEdgeSDL_SDL_GetDefaultCursor */
  /* SDL_Cursor * SDL_GetDefaultCursor(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDefaultCursor[1], ReturnTypes_SDL_GetDefaultCursor[1];

  ReturnTypes_SDL_GetDefaultCursor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDefaultCursor, 0, ReturnTypes_SDL_GetDefaultCursor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDefaultCursor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDefaultCursor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDefaultCursor */

  /* EXPORT WasmEdgeSDL_SDL_DestroyCursor */
  /* void SDL_DestroyCursor(SDL_Cursor *cursor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyCursor[1], ReturnTypes_SDL_DestroyCursor[1];
  ParamTypes_SDL_DestroyCursor[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyCursor, 1, ReturnTypes_SDL_DestroyCursor, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyCursor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyCursor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyCursor */

  /* EXPORT WasmEdgeSDL_SDL_ShowCursor */
  /* bool SDL_ShowCursor(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowCursor[1], ReturnTypes_SDL_ShowCursor[1];

  ReturnTypes_SDL_ShowCursor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowCursor, 0, ReturnTypes_SDL_ShowCursor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowCursor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowCursor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowCursor */

  /* EXPORT WasmEdgeSDL_SDL_HideCursor */
  /* bool SDL_HideCursor(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HideCursor[1], ReturnTypes_SDL_HideCursor[1];

  ReturnTypes_SDL_HideCursor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HideCursor, 0, ReturnTypes_SDL_HideCursor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HideCursor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HideCursor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HideCursor */

  /* EXPORT WasmEdgeSDL_SDL_CursorVisible */
  /* bool SDL_CursorVisible(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CursorVisible[1], ReturnTypes_SDL_CursorVisible[1];

  ReturnTypes_SDL_CursorVisible[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CursorVisible, 0, ReturnTypes_SDL_CursorVisible, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CursorVisible"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CursorVisible, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CursorVisible */

  /* EXPORT WasmEdgeSDL_SDL_CreateMutex */
  /* SDL_Mutex * SDL_CreateMutex(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateMutex[1], ReturnTypes_SDL_CreateMutex[1];

  ReturnTypes_SDL_CreateMutex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateMutex, 0, ReturnTypes_SDL_CreateMutex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateMutex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateMutex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateMutex */

  /* EXPORT WasmEdgeSDL_SDL_LockMutex */
  /* void SDL_LockMutex(SDL_Mutex *mutex) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockMutex[1], ReturnTypes_SDL_LockMutex[1];
  ParamTypes_SDL_LockMutex[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockMutex, 1, ReturnTypes_SDL_LockMutex, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockMutex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockMutex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockMutex */

  /* EXPORT WasmEdgeSDL_SDL_TryLockMutex */
  /* bool SDL_TryLockMutex(SDL_Mutex *mutex) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TryLockMutex[1], ReturnTypes_SDL_TryLockMutex[1];
  ParamTypes_SDL_TryLockMutex[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TryLockMutex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TryLockMutex, 1, ReturnTypes_SDL_TryLockMutex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TryLockMutex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TryLockMutex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TryLockMutex */

  /* EXPORT WasmEdgeSDL_SDL_UnlockMutex */
  /* void SDL_UnlockMutex(SDL_Mutex *mutex) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnlockMutex[1], ReturnTypes_SDL_UnlockMutex[1];
  ParamTypes_SDL_UnlockMutex[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnlockMutex, 1, ReturnTypes_SDL_UnlockMutex, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnlockMutex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnlockMutex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnlockMutex */

  /* EXPORT WasmEdgeSDL_SDL_DestroyMutex */
  /* void SDL_DestroyMutex(SDL_Mutex *mutex) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyMutex[1], ReturnTypes_SDL_DestroyMutex[1];
  ParamTypes_SDL_DestroyMutex[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyMutex, 1, ReturnTypes_SDL_DestroyMutex, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyMutex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyMutex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyMutex */

  /* EXPORT WasmEdgeSDL_SDL_CreateRWLock */
  /* SDL_RWLock * SDL_CreateRWLock(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateRWLock[1], ReturnTypes_SDL_CreateRWLock[1];

  ReturnTypes_SDL_CreateRWLock[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateRWLock, 0, ReturnTypes_SDL_CreateRWLock, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateRWLock"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateRWLock, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateRWLock */

  /* EXPORT WasmEdgeSDL_SDL_LockRWLockForReading */
  /* void SDL_LockRWLockForReading(SDL_RWLock *rwlock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockRWLockForReading[1], ReturnTypes_SDL_LockRWLockForReading[1];
  ParamTypes_SDL_LockRWLockForReading[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockRWLockForReading, 1, ReturnTypes_SDL_LockRWLockForReading, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockRWLockForReading"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockRWLockForReading, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockRWLockForReading */

  /* EXPORT WasmEdgeSDL_SDL_LockRWLockForWriting */
  /* void SDL_LockRWLockForWriting(SDL_RWLock *rwlock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockRWLockForWriting[1], ReturnTypes_SDL_LockRWLockForWriting[1];
  ParamTypes_SDL_LockRWLockForWriting[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockRWLockForWriting, 1, ReturnTypes_SDL_LockRWLockForWriting, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockRWLockForWriting"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockRWLockForWriting, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockRWLockForWriting */

  /* EXPORT WasmEdgeSDL_SDL_TryLockRWLockForReading */
  /* bool SDL_TryLockRWLockForReading(SDL_RWLock *rwlock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TryLockRWLockForReading[1], ReturnTypes_SDL_TryLockRWLockForReading[1];
  ParamTypes_SDL_TryLockRWLockForReading[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TryLockRWLockForReading[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TryLockRWLockForReading, 1, ReturnTypes_SDL_TryLockRWLockForReading, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TryLockRWLockForReading"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TryLockRWLockForReading, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TryLockRWLockForReading */

  /* EXPORT WasmEdgeSDL_SDL_TryLockRWLockForWriting */
  /* bool SDL_TryLockRWLockForWriting(SDL_RWLock *rwlock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TryLockRWLockForWriting[1], ReturnTypes_SDL_TryLockRWLockForWriting[1];
  ParamTypes_SDL_TryLockRWLockForWriting[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TryLockRWLockForWriting[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TryLockRWLockForWriting, 1, ReturnTypes_SDL_TryLockRWLockForWriting, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TryLockRWLockForWriting"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TryLockRWLockForWriting, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TryLockRWLockForWriting */

  /* EXPORT WasmEdgeSDL_SDL_UnlockRWLock */
  /* void SDL_UnlockRWLock(SDL_RWLock *rwlock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnlockRWLock[1], ReturnTypes_SDL_UnlockRWLock[1];
  ParamTypes_SDL_UnlockRWLock[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnlockRWLock, 1, ReturnTypes_SDL_UnlockRWLock, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnlockRWLock"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnlockRWLock, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnlockRWLock */

  /* EXPORT WasmEdgeSDL_SDL_DestroyRWLock */
  /* void SDL_DestroyRWLock(SDL_RWLock *rwlock) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyRWLock[1], ReturnTypes_SDL_DestroyRWLock[1];
  ParamTypes_SDL_DestroyRWLock[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyRWLock, 1, ReturnTypes_SDL_DestroyRWLock, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyRWLock"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyRWLock, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyRWLock */

  /* EXPORT WasmEdgeSDL_SDL_CreateSemaphore */
  /* SDL_Semaphore * SDL_CreateSemaphore(Uint32 initial_value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateSemaphore[1], ReturnTypes_SDL_CreateSemaphore[1];
  ParamTypes_SDL_CreateSemaphore[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateSemaphore[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateSemaphore, 1, ReturnTypes_SDL_CreateSemaphore, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateSemaphore"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateSemaphore, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateSemaphore */

  /* EXPORT WasmEdgeSDL_SDL_DestroySemaphore */
  /* void SDL_DestroySemaphore(SDL_Semaphore *sem) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroySemaphore[1], ReturnTypes_SDL_DestroySemaphore[1];
  ParamTypes_SDL_DestroySemaphore[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroySemaphore, 1, ReturnTypes_SDL_DestroySemaphore, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroySemaphore"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroySemaphore, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroySemaphore */

  /* EXPORT WasmEdgeSDL_SDL_WaitSemaphore */
  /* void SDL_WaitSemaphore(SDL_Semaphore *sem) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WaitSemaphore[1], ReturnTypes_SDL_WaitSemaphore[1];
  ParamTypes_SDL_WaitSemaphore[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WaitSemaphore, 1, ReturnTypes_SDL_WaitSemaphore, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WaitSemaphore"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WaitSemaphore, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WaitSemaphore */

  /* EXPORT WasmEdgeSDL_SDL_TryWaitSemaphore */
  /* bool SDL_TryWaitSemaphore(SDL_Semaphore *sem) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TryWaitSemaphore[1], ReturnTypes_SDL_TryWaitSemaphore[1];
  ParamTypes_SDL_TryWaitSemaphore[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TryWaitSemaphore[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TryWaitSemaphore, 1, ReturnTypes_SDL_TryWaitSemaphore, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TryWaitSemaphore"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TryWaitSemaphore, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TryWaitSemaphore */

  /* EXPORT WasmEdgeSDL_SDL_WaitSemaphoreTimeout */
  /* bool SDL_WaitSemaphoreTimeout(SDL_Semaphore *sem, Sint32 timeoutMS) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WaitSemaphoreTimeout[2], ReturnTypes_SDL_WaitSemaphoreTimeout[1];
  ParamTypes_SDL_WaitSemaphoreTimeout[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WaitSemaphoreTimeout[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WaitSemaphoreTimeout[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WaitSemaphoreTimeout, 2, ReturnTypes_SDL_WaitSemaphoreTimeout, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WaitSemaphoreTimeout"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WaitSemaphoreTimeout, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WaitSemaphoreTimeout */

  /* EXPORT WasmEdgeSDL_SDL_SignalSemaphore */
  /* void SDL_SignalSemaphore(SDL_Semaphore *sem) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SignalSemaphore[1], ReturnTypes_SDL_SignalSemaphore[1];
  ParamTypes_SDL_SignalSemaphore[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SignalSemaphore, 1, ReturnTypes_SDL_SignalSemaphore, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SignalSemaphore"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SignalSemaphore, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SignalSemaphore */

  /* EXPORT WasmEdgeSDL_SDL_GetSemaphoreValue */
  /* Uint32 SDL_GetSemaphoreValue(SDL_Semaphore *sem) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSemaphoreValue[1], ReturnTypes_SDL_GetSemaphoreValue[1];
  ParamTypes_SDL_GetSemaphoreValue[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSemaphoreValue[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSemaphoreValue, 1, ReturnTypes_SDL_GetSemaphoreValue, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSemaphoreValue"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSemaphoreValue, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSemaphoreValue */

  /* EXPORT WasmEdgeSDL_SDL_CreateCondition */
  /* SDL_Condition * SDL_CreateCondition(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateCondition[1], ReturnTypes_SDL_CreateCondition[1];

  ReturnTypes_SDL_CreateCondition[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateCondition, 0, ReturnTypes_SDL_CreateCondition, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateCondition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateCondition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateCondition */

  /* EXPORT WasmEdgeSDL_SDL_DestroyCondition */
  /* void SDL_DestroyCondition(SDL_Condition *cond) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyCondition[1], ReturnTypes_SDL_DestroyCondition[1];
  ParamTypes_SDL_DestroyCondition[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyCondition, 1, ReturnTypes_SDL_DestroyCondition, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyCondition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyCondition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyCondition */

  /* EXPORT WasmEdgeSDL_SDL_SignalCondition */
  /* void SDL_SignalCondition(SDL_Condition *cond) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SignalCondition[1], ReturnTypes_SDL_SignalCondition[1];
  ParamTypes_SDL_SignalCondition[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SignalCondition, 1, ReturnTypes_SDL_SignalCondition, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SignalCondition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SignalCondition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SignalCondition */

  /* EXPORT WasmEdgeSDL_SDL_BroadcastCondition */
  /* void SDL_BroadcastCondition(SDL_Condition *cond) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BroadcastCondition[1], ReturnTypes_SDL_BroadcastCondition[1];
  ParamTypes_SDL_BroadcastCondition[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BroadcastCondition, 1, ReturnTypes_SDL_BroadcastCondition, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BroadcastCondition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BroadcastCondition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BroadcastCondition */

  /* EXPORT WasmEdgeSDL_SDL_WaitCondition */
  /* void SDL_WaitCondition(SDL_Condition *cond, SDL_Mutex *mutex) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WaitCondition[2], ReturnTypes_SDL_WaitCondition[1];
  ParamTypes_SDL_WaitCondition[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WaitCondition[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WaitCondition, 2, ReturnTypes_SDL_WaitCondition, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WaitCondition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WaitCondition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WaitCondition */

  /* EXPORT WasmEdgeSDL_SDL_ShouldInit */
  /* bool SDL_ShouldInit(SDL_InitState *state) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShouldInit[1], ReturnTypes_SDL_ShouldInit[1];
  ParamTypes_SDL_ShouldInit[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ShouldInit[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShouldInit, 1, ReturnTypes_SDL_ShouldInit, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShouldInit"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShouldInit, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShouldInit */

  /* EXPORT WasmEdgeSDL_SDL_ShouldQuit */
  /* bool SDL_ShouldQuit(SDL_InitState *state) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShouldQuit[1], ReturnTypes_SDL_ShouldQuit[1];
  ParamTypes_SDL_ShouldQuit[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ShouldQuit[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShouldQuit, 1, ReturnTypes_SDL_ShouldQuit, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShouldQuit"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShouldQuit, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShouldQuit */

  /* EXPORT WasmEdgeSDL_SDL_SetInitialized */
  /* void SDL_SetInitialized(SDL_InitState *state, bool initialized) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetInitialized[2], ReturnTypes_SDL_SetInitialized[1];
  ParamTypes_SDL_SetInitialized[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetInitialized[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetInitialized, 2, ReturnTypes_SDL_SetInitialized, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetInitialized"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetInitialized, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetInitialized */

  /* EXPORT WasmEdgeSDL_SDL_GetPixelFormatName */
  /* const char * SDL_GetPixelFormatName(SDL_PixelFormat format) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPixelFormatName[1], ReturnTypes_SDL_GetPixelFormatName[1];
  ParamTypes_SDL_GetPixelFormatName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPixelFormatName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPixelFormatName, 1, ReturnTypes_SDL_GetPixelFormatName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPixelFormatName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPixelFormatName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPixelFormatName */

  /* EXPORT WasmEdgeSDL_SDL_GetMasksForPixelFormat */
  /* bool SDL_GetMasksForPixelFormat(SDL_PixelFormat format, int *bpp, Uint32 *Rmask, Uint32 *Gmask, Uint32 *Bmask, Uint32 *Amask) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetMasksForPixelFormat[6], ReturnTypes_SDL_GetMasksForPixelFormat[1];
  ParamTypes_SDL_GetMasksForPixelFormat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetMasksForPixelFormat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetMasksForPixelFormat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetMasksForPixelFormat[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetMasksForPixelFormat[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetMasksForPixelFormat[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetMasksForPixelFormat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetMasksForPixelFormat, 6, ReturnTypes_SDL_GetMasksForPixelFormat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetMasksForPixelFormat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetMasksForPixelFormat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetMasksForPixelFormat */

  /* EXPORT WasmEdgeSDL_SDL_GetPixelFormatForMasks */
  /* SDL_PixelFormat SDL_GetPixelFormatForMasks(int bpp, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPixelFormatForMasks[5], ReturnTypes_SDL_GetPixelFormatForMasks[1];
  ParamTypes_SDL_GetPixelFormatForMasks[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPixelFormatForMasks[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPixelFormatForMasks[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPixelFormatForMasks[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPixelFormatForMasks[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPixelFormatForMasks[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPixelFormatForMasks, 5, ReturnTypes_SDL_GetPixelFormatForMasks, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPixelFormatForMasks"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPixelFormatForMasks, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPixelFormatForMasks */

  /* EXPORT WasmEdgeSDL_SDL_GetPixelFormatDetails */
  /* const SDL_PixelFormatDetails * SDL_GetPixelFormatDetails(SDL_PixelFormat format) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPixelFormatDetails[1], ReturnTypes_SDL_GetPixelFormatDetails[1];
  ParamTypes_SDL_GetPixelFormatDetails[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPixelFormatDetails[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPixelFormatDetails, 1, ReturnTypes_SDL_GetPixelFormatDetails, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPixelFormatDetails"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPixelFormatDetails, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPixelFormatDetails */

  /* EXPORT WasmEdgeSDL_SDL_CreatePalette */
  /* SDL_Palette * SDL_CreatePalette(int ncolors) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreatePalette[1], ReturnTypes_SDL_CreatePalette[1];
  ParamTypes_SDL_CreatePalette[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreatePalette[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreatePalette, 1, ReturnTypes_SDL_CreatePalette, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreatePalette"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreatePalette, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreatePalette */

  /* EXPORT WasmEdgeSDL_SDL_SetPaletteColors */
  /* bool SDL_SetPaletteColors(SDL_Palette *palette, const SDL_Color *colors, int firstcolor, int ncolors) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetPaletteColors[4], ReturnTypes_SDL_SetPaletteColors[1];
  ParamTypes_SDL_SetPaletteColors[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPaletteColors[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPaletteColors[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPaletteColors[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetPaletteColors[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetPaletteColors, 4, ReturnTypes_SDL_SetPaletteColors, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetPaletteColors"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetPaletteColors, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetPaletteColors */

  /* EXPORT WasmEdgeSDL_SDL_DestroyPalette */
  /* void SDL_DestroyPalette(SDL_Palette *palette) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyPalette[1], ReturnTypes_SDL_DestroyPalette[1];
  ParamTypes_SDL_DestroyPalette[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyPalette, 1, ReturnTypes_SDL_DestroyPalette, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyPalette"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyPalette, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyPalette */

  /* EXPORT WasmEdgeSDL_SDL_MapRGB */
  /* Uint32 SDL_MapRGB(const SDL_PixelFormatDetails *format, const SDL_Palette *palette, Uint8 r, Uint8 g, Uint8 b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MapRGB[5], ReturnTypes_SDL_MapRGB[1];
  ParamTypes_SDL_MapRGB[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGB[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGB[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGB[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGB[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_MapRGB[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MapRGB, 5, ReturnTypes_SDL_MapRGB, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MapRGB"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MapRGB, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MapRGB */

  /* EXPORT WasmEdgeSDL_SDL_MapRGBA */
  /* Uint32 SDL_MapRGBA(const SDL_PixelFormatDetails *format, const SDL_Palette *palette, Uint8 r, Uint8 g, Uint8 b, Uint8 a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MapRGBA[6], ReturnTypes_SDL_MapRGBA[1];
  ParamTypes_SDL_MapRGBA[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGBA[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGBA[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGBA[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGBA[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapRGBA[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_MapRGBA[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MapRGBA, 6, ReturnTypes_SDL_MapRGBA, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MapRGBA"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MapRGBA, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MapRGBA */

  /* EXPORT WasmEdgeSDL_SDL_GetRGB */
  /* void SDL_GetRGB(Uint32 pixel, const SDL_PixelFormatDetails *format, const SDL_Palette *palette, Uint8 *r, Uint8 *g, Uint8 *b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRGB[6], ReturnTypes_SDL_GetRGB[1];
  ParamTypes_SDL_GetRGB[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGB[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGB[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGB[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGB[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGB[5] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRGB, 6, ReturnTypes_SDL_GetRGB, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRGB"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRGB, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRGB */

  /* EXPORT WasmEdgeSDL_SDL_GetRGBA */
  /* void SDL_GetRGBA(Uint32 pixel, const SDL_PixelFormatDetails *format, const SDL_Palette *palette, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRGBA[7], ReturnTypes_SDL_GetRGBA[1];
  ParamTypes_SDL_GetRGBA[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGBA[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGBA[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGBA[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGBA[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGBA[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRGBA[6] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRGBA, 7, ReturnTypes_SDL_GetRGBA, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRGBA"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRGBA, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRGBA */

  /* EXPORT WasmEdgeSDL_SDL_GetPlatform */
  /* const char * SDL_GetPlatform(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPlatform[1], ReturnTypes_SDL_GetPlatform[1];

  ReturnTypes_SDL_GetPlatform[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPlatform, 0, ReturnTypes_SDL_GetPlatform, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPlatform"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPlatform, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPlatform */

  /* EXPORT WasmEdgeSDL_SDL_GetPowerInfo */
  /* SDL_PowerState SDL_GetPowerInfo(int *seconds, int *percent) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPowerInfo[2], ReturnTypes_SDL_GetPowerInfo[1];
  ParamTypes_SDL_GetPowerInfo[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPowerInfo[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPowerInfo[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPowerInfo, 2, ReturnTypes_SDL_GetPowerInfo, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPowerInfo"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPowerInfo, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPowerInfo */

  /* EXPORT WasmEdgeSDL_SDL_CreateProcess */
  /* SDL_Process * SDL_CreateProcess(const char * const *args, bool pipe_stdio) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateProcess[2], ReturnTypes_SDL_CreateProcess[1];
  ParamTypes_SDL_CreateProcess[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateProcess[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateProcess[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateProcess, 2, ReturnTypes_SDL_CreateProcess, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateProcess"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateProcess, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateProcess */

  /* EXPORT WasmEdgeSDL_SDL_CreateProcessWithProperties */
  /* SDL_Process * SDL_CreateProcessWithProperties(SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateProcessWithProperties[1], ReturnTypes_SDL_CreateProcessWithProperties[1];
  ParamTypes_SDL_CreateProcessWithProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateProcessWithProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateProcessWithProperties, 1, ReturnTypes_SDL_CreateProcessWithProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateProcessWithProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateProcessWithProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateProcessWithProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetProcessProperties */
  /* SDL_PropertiesID SDL_GetProcessProperties(SDL_Process *process) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetProcessProperties[1], ReturnTypes_SDL_GetProcessProperties[1];
  ParamTypes_SDL_GetProcessProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetProcessProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetProcessProperties, 1, ReturnTypes_SDL_GetProcessProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetProcessProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetProcessProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetProcessProperties */

  /* EXPORT WasmEdgeSDL_SDL_ReadProcess */
  /* void * SDL_ReadProcess(SDL_Process *process, size_t *datasize, int *exitcode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadProcess[3], ReturnTypes_SDL_ReadProcess[1];
  ParamTypes_SDL_ReadProcess[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadProcess[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadProcess[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadProcess[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadProcess, 3, ReturnTypes_SDL_ReadProcess, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadProcess"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadProcess, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadProcess */

  /* EXPORT WasmEdgeSDL_SDL_GetProcessInput */
  /* SDL_IOStream * SDL_GetProcessInput(SDL_Process *process) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetProcessInput[1], ReturnTypes_SDL_GetProcessInput[1];
  ParamTypes_SDL_GetProcessInput[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetProcessInput[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetProcessInput, 1, ReturnTypes_SDL_GetProcessInput, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetProcessInput"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetProcessInput, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetProcessInput */

  /* EXPORT WasmEdgeSDL_SDL_GetProcessOutput */
  /* SDL_IOStream * SDL_GetProcessOutput(SDL_Process *process) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetProcessOutput[1], ReturnTypes_SDL_GetProcessOutput[1];
  ParamTypes_SDL_GetProcessOutput[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetProcessOutput[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetProcessOutput, 1, ReturnTypes_SDL_GetProcessOutput, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetProcessOutput"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetProcessOutput, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetProcessOutput */

  /* EXPORT WasmEdgeSDL_SDL_KillProcess */
  /* bool SDL_KillProcess(SDL_Process *process, bool force) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_KillProcess[2], ReturnTypes_SDL_KillProcess[1];
  ParamTypes_SDL_KillProcess[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_KillProcess[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_KillProcess[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_KillProcess, 2, ReturnTypes_SDL_KillProcess, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_KillProcess"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_KillProcess, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_KillProcess */

  /* EXPORT WasmEdgeSDL_SDL_WaitProcess */
  /* bool SDL_WaitProcess(SDL_Process *process, bool block, int *exitcode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WaitProcess[3], ReturnTypes_SDL_WaitProcess[1];
  ParamTypes_SDL_WaitProcess[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WaitProcess[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WaitProcess[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WaitProcess[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WaitProcess, 3, ReturnTypes_SDL_WaitProcess, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WaitProcess"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WaitProcess, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WaitProcess */

  /* EXPORT WasmEdgeSDL_SDL_DestroyProcess */
  /* void SDL_DestroyProcess(SDL_Process *process) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyProcess[1], ReturnTypes_SDL_DestroyProcess[1];
  ParamTypes_SDL_DestroyProcess[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyProcess, 1, ReturnTypes_SDL_DestroyProcess, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyProcess"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyProcess, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyProcess */

  /* EXPORT WasmEdgeSDL_SDL_GetGlobalProperties */
  /* SDL_PropertiesID SDL_GetGlobalProperties(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGlobalProperties[1], ReturnTypes_SDL_GetGlobalProperties[1];

  ReturnTypes_SDL_GetGlobalProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGlobalProperties, 0, ReturnTypes_SDL_GetGlobalProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGlobalProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGlobalProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGlobalProperties */

  /* EXPORT WasmEdgeSDL_SDL_CreateProperties */
  /* SDL_PropertiesID SDL_CreateProperties(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateProperties[1], ReturnTypes_SDL_CreateProperties[1];

  ReturnTypes_SDL_CreateProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateProperties, 0, ReturnTypes_SDL_CreateProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateProperties */

  /* EXPORT WasmEdgeSDL_SDL_CopyProperties */
  /* bool SDL_CopyProperties(SDL_PropertiesID src, SDL_PropertiesID dst) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CopyProperties[2], ReturnTypes_SDL_CopyProperties[1];
  ParamTypes_SDL_CopyProperties[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CopyProperties[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CopyProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CopyProperties, 2, ReturnTypes_SDL_CopyProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CopyProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CopyProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CopyProperties */

  /* EXPORT WasmEdgeSDL_SDL_LockProperties */
  /* bool SDL_LockProperties(SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockProperties[1], ReturnTypes_SDL_LockProperties[1];
  ParamTypes_SDL_LockProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LockProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockProperties, 1, ReturnTypes_SDL_LockProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockProperties */

  /* EXPORT WasmEdgeSDL_SDL_UnlockProperties */
  /* void SDL_UnlockProperties(SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnlockProperties[1], ReturnTypes_SDL_UnlockProperties[1];
  ParamTypes_SDL_UnlockProperties[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnlockProperties, 1, ReturnTypes_SDL_UnlockProperties, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnlockProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnlockProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnlockProperties */

  /* EXPORT WasmEdgeSDL_SDL_SetPointerPropertyWithCleanup */
  /* bool SDL_SetPointerPropertyWithCleanup(SDL_PropertiesID props, const char *name, void *value, SDL_CleanupPropertyCallback cleanup, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetPointerPropertyWithCleanup[5], ReturnTypes_SDL_SetPointerPropertyWithCleanup[1];
  ParamTypes_SDL_SetPointerPropertyWithCleanup[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPointerPropertyWithCleanup[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPointerPropertyWithCleanup[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPointerPropertyWithCleanup[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPointerPropertyWithCleanup[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetPointerPropertyWithCleanup[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetPointerPropertyWithCleanup, 5, ReturnTypes_SDL_SetPointerPropertyWithCleanup, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetPointerPropertyWithCleanup"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetPointerPropertyWithCleanup, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetPointerPropertyWithCleanup */

  /* EXPORT WasmEdgeSDL_SDL_SetPointerProperty */
  /* bool SDL_SetPointerProperty(SDL_PropertiesID props, const char *name, void *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetPointerProperty[3], ReturnTypes_SDL_SetPointerProperty[1];
  ParamTypes_SDL_SetPointerProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPointerProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetPointerProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetPointerProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetPointerProperty, 3, ReturnTypes_SDL_SetPointerProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetPointerProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetPointerProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetPointerProperty */

  /* EXPORT WasmEdgeSDL_SDL_SetStringProperty */
  /* bool SDL_SetStringProperty(SDL_PropertiesID props, const char *name, const char *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetStringProperty[3], ReturnTypes_SDL_SetStringProperty[1];
  ParamTypes_SDL_SetStringProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetStringProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetStringProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetStringProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetStringProperty, 3, ReturnTypes_SDL_SetStringProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetStringProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetStringProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetStringProperty */

  /* EXPORT WasmEdgeSDL_SDL_SetNumberProperty */
  /* bool SDL_SetNumberProperty(SDL_PropertiesID props, const char *name, Sint64 value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetNumberProperty[3], ReturnTypes_SDL_SetNumberProperty[1];
  ParamTypes_SDL_SetNumberProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetNumberProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetNumberProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetNumberProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetNumberProperty, 3, ReturnTypes_SDL_SetNumberProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetNumberProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetNumberProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetNumberProperty */

  /* EXPORT WasmEdgeSDL_SDL_SetFloatProperty */
  /* bool SDL_SetFloatProperty(SDL_PropertiesID props, const char *name, float value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetFloatProperty[3], ReturnTypes_SDL_SetFloatProperty[1];
  ParamTypes_SDL_SetFloatProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetFloatProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetFloatProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetFloatProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetFloatProperty, 3, ReturnTypes_SDL_SetFloatProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetFloatProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetFloatProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetFloatProperty */

  /* EXPORT WasmEdgeSDL_SDL_SetBooleanProperty */
  /* bool SDL_SetBooleanProperty(SDL_PropertiesID props, const char *name, bool value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetBooleanProperty[3], ReturnTypes_SDL_SetBooleanProperty[1];
  ParamTypes_SDL_SetBooleanProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetBooleanProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetBooleanProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetBooleanProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetBooleanProperty, 3, ReturnTypes_SDL_SetBooleanProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetBooleanProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetBooleanProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetBooleanProperty */

  /* EXPORT WasmEdgeSDL_SDL_HasProperty */
  /* bool SDL_HasProperty(SDL_PropertiesID props, const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasProperty[2], ReturnTypes_SDL_HasProperty[1];
  ParamTypes_SDL_HasProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_HasProperty[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HasProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasProperty, 2, ReturnTypes_SDL_HasProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasProperty */

  /* EXPORT WasmEdgeSDL_SDL_GetPropertyType */
  /* SDL_PropertyType SDL_GetPropertyType(SDL_PropertiesID props, const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPropertyType[2], ReturnTypes_SDL_GetPropertyType[1];
  ParamTypes_SDL_GetPropertyType[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPropertyType[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPropertyType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPropertyType, 2, ReturnTypes_SDL_GetPropertyType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPropertyType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPropertyType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPropertyType */

  /* EXPORT WasmEdgeSDL_SDL_GetPointerProperty */
  /* void * SDL_GetPointerProperty(SDL_PropertiesID props, const char *name, void *default_value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPointerProperty[3], ReturnTypes_SDL_GetPointerProperty[1];
  ParamTypes_SDL_GetPointerProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPointerProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetPointerProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetPointerProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPointerProperty, 3, ReturnTypes_SDL_GetPointerProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPointerProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPointerProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPointerProperty */

  /* EXPORT WasmEdgeSDL_SDL_GetStringProperty */
  /* const char * SDL_GetStringProperty(SDL_PropertiesID props, const char *name, const char *default_value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetStringProperty[3], ReturnTypes_SDL_GetStringProperty[1];
  ParamTypes_SDL_GetStringProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetStringProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetStringProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetStringProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetStringProperty, 3, ReturnTypes_SDL_GetStringProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetStringProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetStringProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetStringProperty */

  /* EXPORT WasmEdgeSDL_SDL_GetNumberProperty */
  /* Sint64 SDL_GetNumberProperty(SDL_PropertiesID props, const char *name, Sint64 default_value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumberProperty[3], ReturnTypes_SDL_GetNumberProperty[1];
  ParamTypes_SDL_GetNumberProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetNumberProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetNumberProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNumberProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumberProperty, 3, ReturnTypes_SDL_GetNumberProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumberProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumberProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumberProperty */

  /* EXPORT WasmEdgeSDL_SDL_GetFloatProperty */
  /* float SDL_GetFloatProperty(SDL_PropertiesID props, const char *name, float default_value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetFloatProperty[3], ReturnTypes_SDL_GetFloatProperty[1];
  ParamTypes_SDL_GetFloatProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetFloatProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetFloatProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetFloatProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetFloatProperty, 3, ReturnTypes_SDL_GetFloatProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetFloatProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetFloatProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetFloatProperty */

  /* EXPORT WasmEdgeSDL_SDL_GetBooleanProperty */
  /* bool SDL_GetBooleanProperty(SDL_PropertiesID props, const char *name, bool default_value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetBooleanProperty[3], ReturnTypes_SDL_GetBooleanProperty[1];
  ParamTypes_SDL_GetBooleanProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetBooleanProperty[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetBooleanProperty[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetBooleanProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetBooleanProperty, 3, ReturnTypes_SDL_GetBooleanProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetBooleanProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetBooleanProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetBooleanProperty */

  /* EXPORT WasmEdgeSDL_SDL_ClearProperty */
  /* bool SDL_ClearProperty(SDL_PropertiesID props, const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ClearProperty[2], ReturnTypes_SDL_ClearProperty[1];
  ParamTypes_SDL_ClearProperty[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ClearProperty[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ClearProperty[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ClearProperty, 2, ReturnTypes_SDL_ClearProperty, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ClearProperty"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ClearProperty, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ClearProperty */

  /* EXPORT WasmEdgeSDL_SDL_EnumerateProperties */
  /* bool SDL_EnumerateProperties(SDL_PropertiesID props, SDL_EnumeratePropertiesCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EnumerateProperties[3], ReturnTypes_SDL_EnumerateProperties[1];
  ParamTypes_SDL_EnumerateProperties[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnumerateProperties[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnumerateProperties[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_EnumerateProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EnumerateProperties, 3, ReturnTypes_SDL_EnumerateProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EnumerateProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EnumerateProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EnumerateProperties */

  /* EXPORT WasmEdgeSDL_SDL_DestroyProperties */
  /* void SDL_DestroyProperties(SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyProperties[1], ReturnTypes_SDL_DestroyProperties[1];
  ParamTypes_SDL_DestroyProperties[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyProperties, 1, ReturnTypes_SDL_DestroyProperties, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyProperties */

  /* EXPORT WasmEdgeSDL_SDL_HasRectIntersection */
  /* bool SDL_HasRectIntersection(const SDL_Rect *A, const SDL_Rect *B) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasRectIntersection[2], ReturnTypes_SDL_HasRectIntersection[1];
  ParamTypes_SDL_HasRectIntersection[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_HasRectIntersection[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HasRectIntersection[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasRectIntersection, 2, ReturnTypes_SDL_HasRectIntersection, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasRectIntersection"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasRectIntersection, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasRectIntersection */

  /* EXPORT WasmEdgeSDL_SDL_GetRectIntersection */
  /* bool SDL_GetRectIntersection(const SDL_Rect *A, const SDL_Rect *B, SDL_Rect *result) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRectIntersection[3], ReturnTypes_SDL_GetRectIntersection[1];
  ParamTypes_SDL_GetRectIntersection[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectIntersection[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectIntersection[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRectIntersection[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRectIntersection, 3, ReturnTypes_SDL_GetRectIntersection, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRectIntersection"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRectIntersection, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRectIntersection */

  /* EXPORT WasmEdgeSDL_SDL_GetRectUnion */
  /* bool SDL_GetRectUnion(const SDL_Rect *A, const SDL_Rect *B, SDL_Rect *result) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRectUnion[3], ReturnTypes_SDL_GetRectUnion[1];
  ParamTypes_SDL_GetRectUnion[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectUnion[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectUnion[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRectUnion[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRectUnion, 3, ReturnTypes_SDL_GetRectUnion, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRectUnion"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRectUnion, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRectUnion */

  /* EXPORT WasmEdgeSDL_SDL_GetRectEnclosingPoints */
  /* bool SDL_GetRectEnclosingPoints(const SDL_Point *points, int count, const SDL_Rect *clip, SDL_Rect *result) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRectEnclosingPoints[4], ReturnTypes_SDL_GetRectEnclosingPoints[1];
  ParamTypes_SDL_GetRectEnclosingPoints[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectEnclosingPoints[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectEnclosingPoints[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectEnclosingPoints[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRectEnclosingPoints[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRectEnclosingPoints, 4, ReturnTypes_SDL_GetRectEnclosingPoints, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRectEnclosingPoints"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRectEnclosingPoints, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRectEnclosingPoints */

  /* EXPORT WasmEdgeSDL_SDL_GetRectAndLineIntersection */
  /* bool SDL_GetRectAndLineIntersection(const SDL_Rect *rect, int *X1, int *Y1, int *X2, int *Y2) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRectAndLineIntersection[5], ReturnTypes_SDL_GetRectAndLineIntersection[1];
  ParamTypes_SDL_GetRectAndLineIntersection[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectAndLineIntersection[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectAndLineIntersection[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectAndLineIntersection[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectAndLineIntersection[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRectAndLineIntersection[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRectAndLineIntersection, 5, ReturnTypes_SDL_GetRectAndLineIntersection, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRectAndLineIntersection"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRectAndLineIntersection, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRectAndLineIntersection */

  /* EXPORT WasmEdgeSDL_SDL_HasRectIntersectionFloat */
  /* bool SDL_HasRectIntersectionFloat(const SDL_FRect *A, const SDL_FRect *B) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HasRectIntersectionFloat[2], ReturnTypes_SDL_HasRectIntersectionFloat[1];
  ParamTypes_SDL_HasRectIntersectionFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_HasRectIntersectionFloat[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HasRectIntersectionFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HasRectIntersectionFloat, 2, ReturnTypes_SDL_HasRectIntersectionFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HasRectIntersectionFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HasRectIntersectionFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HasRectIntersectionFloat */

  /* EXPORT WasmEdgeSDL_SDL_GetRectIntersectionFloat */
  /* bool SDL_GetRectIntersectionFloat(const SDL_FRect *A, const SDL_FRect *B, SDL_FRect *result) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRectIntersectionFloat[3], ReturnTypes_SDL_GetRectIntersectionFloat[1];
  ParamTypes_SDL_GetRectIntersectionFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectIntersectionFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectIntersectionFloat[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRectIntersectionFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRectIntersectionFloat, 3, ReturnTypes_SDL_GetRectIntersectionFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRectIntersectionFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRectIntersectionFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRectIntersectionFloat */

  /* EXPORT WasmEdgeSDL_SDL_GetRectUnionFloat */
  /* bool SDL_GetRectUnionFloat(const SDL_FRect *A, const SDL_FRect *B, SDL_FRect *result) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRectUnionFloat[3], ReturnTypes_SDL_GetRectUnionFloat[1];
  ParamTypes_SDL_GetRectUnionFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectUnionFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectUnionFloat[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRectUnionFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRectUnionFloat, 3, ReturnTypes_SDL_GetRectUnionFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRectUnionFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRectUnionFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRectUnionFloat */

  /* EXPORT WasmEdgeSDL_SDL_GetRectEnclosingPointsFloat */
  /* bool SDL_GetRectEnclosingPointsFloat(const SDL_FPoint *points, int count, const SDL_FRect *clip, SDL_FRect *result) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRectEnclosingPointsFloat[4], ReturnTypes_SDL_GetRectEnclosingPointsFloat[1];
  ParamTypes_SDL_GetRectEnclosingPointsFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectEnclosingPointsFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectEnclosingPointsFloat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectEnclosingPointsFloat[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRectEnclosingPointsFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRectEnclosingPointsFloat, 4, ReturnTypes_SDL_GetRectEnclosingPointsFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRectEnclosingPointsFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRectEnclosingPointsFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRectEnclosingPointsFloat */

  /* EXPORT WasmEdgeSDL_SDL_GetRectAndLineIntersectionFloat */
  /* bool SDL_GetRectAndLineIntersectionFloat(const SDL_FRect *rect, float *X1, float *Y1, float *X2, float *Y2) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRectAndLineIntersectionFloat[5], ReturnTypes_SDL_GetRectAndLineIntersectionFloat[1];
  ParamTypes_SDL_GetRectAndLineIntersectionFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectAndLineIntersectionFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectAndLineIntersectionFloat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectAndLineIntersectionFloat[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRectAndLineIntersectionFloat[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRectAndLineIntersectionFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRectAndLineIntersectionFloat, 5, ReturnTypes_SDL_GetRectAndLineIntersectionFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRectAndLineIntersectionFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRectAndLineIntersectionFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRectAndLineIntersectionFloat */

  /* EXPORT WasmEdgeSDL_SDL_GetNumRenderDrivers */
  /* int SDL_GetNumRenderDrivers(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumRenderDrivers[1], ReturnTypes_SDL_GetNumRenderDrivers[1];

  ReturnTypes_SDL_GetNumRenderDrivers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumRenderDrivers, 0, ReturnTypes_SDL_GetNumRenderDrivers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumRenderDrivers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumRenderDrivers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumRenderDrivers */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderDriver */
  /* const char * SDL_GetRenderDriver(int index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderDriver[1], ReturnTypes_SDL_GetRenderDriver[1];
  ParamTypes_SDL_GetRenderDriver[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderDriver, 1, ReturnTypes_SDL_GetRenderDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderDriver */

  /* EXPORT WasmEdgeSDL_SDL_CreateWindowAndRenderer */
  /* bool SDL_CreateWindowAndRenderer(const char *title, int width, int height, SDL_WindowFlags window_flags, SDL_Window **window, SDL_Renderer **renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateWindowAndRenderer[6], ReturnTypes_SDL_CreateWindowAndRenderer[1];
  ParamTypes_SDL_CreateWindowAndRenderer[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateWindowAndRenderer[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateWindowAndRenderer[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateWindowAndRenderer[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateWindowAndRenderer[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateWindowAndRenderer[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateWindowAndRenderer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateWindowAndRenderer, 6, ReturnTypes_SDL_CreateWindowAndRenderer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateWindowAndRenderer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateWindowAndRenderer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateWindowAndRenderer */

  /* EXPORT WasmEdgeSDL_SDL_CreateRenderer */
  /* SDL_Renderer * SDL_CreateRenderer(SDL_Window *window, const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateRenderer[2], ReturnTypes_SDL_CreateRenderer[1];
  ParamTypes_SDL_CreateRenderer[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateRenderer[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateRenderer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateRenderer, 2, ReturnTypes_SDL_CreateRenderer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateRenderer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateRenderer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateRenderer */

  /* EXPORT WasmEdgeSDL_SDL_CreateRendererWithProperties */
  /* SDL_Renderer * SDL_CreateRendererWithProperties(SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateRendererWithProperties[1], ReturnTypes_SDL_CreateRendererWithProperties[1];
  ParamTypes_SDL_CreateRendererWithProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateRendererWithProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateRendererWithProperties, 1, ReturnTypes_SDL_CreateRendererWithProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateRendererWithProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateRendererWithProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateRendererWithProperties */

  /* EXPORT WasmEdgeSDL_SDL_CreateSoftwareRenderer */
  /* SDL_Renderer * SDL_CreateSoftwareRenderer(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateSoftwareRenderer[1], ReturnTypes_SDL_CreateSoftwareRenderer[1];
  ParamTypes_SDL_CreateSoftwareRenderer[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateSoftwareRenderer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateSoftwareRenderer, 1, ReturnTypes_SDL_CreateSoftwareRenderer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateSoftwareRenderer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateSoftwareRenderer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateSoftwareRenderer */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderer */
  /* SDL_Renderer * SDL_GetRenderer(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderer[1], ReturnTypes_SDL_GetRenderer[1];
  ParamTypes_SDL_GetRenderer[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderer, 1, ReturnTypes_SDL_GetRenderer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderer */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderWindow */
  /* SDL_Window * SDL_GetRenderWindow(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderWindow[1], ReturnTypes_SDL_GetRenderWindow[1];
  ParamTypes_SDL_GetRenderWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderWindow, 1, ReturnTypes_SDL_GetRenderWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderWindow */

  /* EXPORT WasmEdgeSDL_SDL_GetRendererName */
  /* const char * SDL_GetRendererName(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRendererName[1], ReturnTypes_SDL_GetRendererName[1];
  ParamTypes_SDL_GetRendererName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRendererName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRendererName, 1, ReturnTypes_SDL_GetRendererName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRendererName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRendererName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRendererName */

  /* EXPORT WasmEdgeSDL_SDL_GetRendererProperties */
  /* SDL_PropertiesID SDL_GetRendererProperties(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRendererProperties[1], ReturnTypes_SDL_GetRendererProperties[1];
  ParamTypes_SDL_GetRendererProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRendererProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRendererProperties, 1, ReturnTypes_SDL_GetRendererProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRendererProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRendererProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRendererProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderOutputSize */
  /* bool SDL_GetRenderOutputSize(SDL_Renderer *renderer, int *w, int *h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderOutputSize[3], ReturnTypes_SDL_GetRenderOutputSize[1];
  ParamTypes_SDL_GetRenderOutputSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderOutputSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderOutputSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderOutputSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderOutputSize, 3, ReturnTypes_SDL_GetRenderOutputSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderOutputSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderOutputSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderOutputSize */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentRenderOutputSize */
  /* bool SDL_GetCurrentRenderOutputSize(SDL_Renderer *renderer, int *w, int *h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentRenderOutputSize[3], ReturnTypes_SDL_GetCurrentRenderOutputSize[1];
  ParamTypes_SDL_GetCurrentRenderOutputSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetCurrentRenderOutputSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetCurrentRenderOutputSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCurrentRenderOutputSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentRenderOutputSize, 3, ReturnTypes_SDL_GetCurrentRenderOutputSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentRenderOutputSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentRenderOutputSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentRenderOutputSize */

  /* EXPORT WasmEdgeSDL_SDL_CreateTexture */
  /* SDL_Texture * SDL_CreateTexture(SDL_Renderer *renderer, SDL_PixelFormat format, SDL_TextureAccess access, int w, int h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateTexture[5], ReturnTypes_SDL_CreateTexture[1];
  ParamTypes_SDL_CreateTexture[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateTexture[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateTexture[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateTexture[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateTexture[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateTexture[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateTexture, 5, ReturnTypes_SDL_CreateTexture, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateTexture"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateTexture, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateTexture */

  /* EXPORT WasmEdgeSDL_SDL_CreateTextureFromSurface */
  /* SDL_Texture * SDL_CreateTextureFromSurface(SDL_Renderer *renderer, SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateTextureFromSurface[2], ReturnTypes_SDL_CreateTextureFromSurface[1];
  ParamTypes_SDL_CreateTextureFromSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateTextureFromSurface[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateTextureFromSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateTextureFromSurface, 2, ReturnTypes_SDL_CreateTextureFromSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateTextureFromSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateTextureFromSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateTextureFromSurface */

  /* EXPORT WasmEdgeSDL_SDL_CreateTextureWithProperties */
  /* SDL_Texture * SDL_CreateTextureWithProperties(SDL_Renderer *renderer, SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateTextureWithProperties[2], ReturnTypes_SDL_CreateTextureWithProperties[1];
  ParamTypes_SDL_CreateTextureWithProperties[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateTextureWithProperties[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateTextureWithProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateTextureWithProperties, 2, ReturnTypes_SDL_CreateTextureWithProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateTextureWithProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateTextureWithProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateTextureWithProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetTextureProperties */
  /* SDL_PropertiesID SDL_GetTextureProperties(SDL_Texture *texture) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextureProperties[1], ReturnTypes_SDL_GetTextureProperties[1];
  ParamTypes_SDL_GetTextureProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextureProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextureProperties, 1, ReturnTypes_SDL_GetTextureProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextureProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextureProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextureProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetRendererFromTexture */
  /* SDL_Renderer * SDL_GetRendererFromTexture(SDL_Texture *texture) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRendererFromTexture[1], ReturnTypes_SDL_GetRendererFromTexture[1];
  ParamTypes_SDL_GetRendererFromTexture[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRendererFromTexture[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRendererFromTexture, 1, ReturnTypes_SDL_GetRendererFromTexture, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRendererFromTexture"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRendererFromTexture, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRendererFromTexture */

  /* EXPORT WasmEdgeSDL_SDL_GetTextureSize */
  /* bool SDL_GetTextureSize(SDL_Texture *texture, float *w, float *h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextureSize[3], ReturnTypes_SDL_GetTextureSize[1];
  ParamTypes_SDL_GetTextureSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextureSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextureSize, 3, ReturnTypes_SDL_GetTextureSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextureSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextureSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextureSize */

  /* EXPORT WasmEdgeSDL_SDL_SetTextureColorMod */
  /* bool SDL_SetTextureColorMod(SDL_Texture *texture, Uint8 r, Uint8 g, Uint8 b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTextureColorMod[4], ReturnTypes_SDL_SetTextureColorMod[1];
  ParamTypes_SDL_SetTextureColorMod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureColorMod[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureColorMod[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureColorMod[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetTextureColorMod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTextureColorMod, 4, ReturnTypes_SDL_SetTextureColorMod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTextureColorMod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTextureColorMod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTextureColorMod */

  /* EXPORT WasmEdgeSDL_SDL_SetTextureColorModFloat */
  /* bool SDL_SetTextureColorModFloat(SDL_Texture *texture, float r, float g, float b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTextureColorModFloat[4], ReturnTypes_SDL_SetTextureColorModFloat[1];
  ParamTypes_SDL_SetTextureColorModFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureColorModFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureColorModFloat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureColorModFloat[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetTextureColorModFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTextureColorModFloat, 4, ReturnTypes_SDL_SetTextureColorModFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTextureColorModFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTextureColorModFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTextureColorModFloat */

  /* EXPORT WasmEdgeSDL_SDL_GetTextureColorMod */
  /* bool SDL_GetTextureColorMod(SDL_Texture *texture, Uint8 *r, Uint8 *g, Uint8 *b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextureColorMod[4], ReturnTypes_SDL_GetTextureColorMod[1];
  ParamTypes_SDL_GetTextureColorMod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureColorMod[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureColorMod[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureColorMod[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextureColorMod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextureColorMod, 4, ReturnTypes_SDL_GetTextureColorMod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextureColorMod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextureColorMod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextureColorMod */

  /* EXPORT WasmEdgeSDL_SDL_GetTextureColorModFloat */
  /* bool SDL_GetTextureColorModFloat(SDL_Texture *texture, float *r, float *g, float *b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextureColorModFloat[4], ReturnTypes_SDL_GetTextureColorModFloat[1];
  ParamTypes_SDL_GetTextureColorModFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureColorModFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureColorModFloat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureColorModFloat[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextureColorModFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextureColorModFloat, 4, ReturnTypes_SDL_GetTextureColorModFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextureColorModFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextureColorModFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextureColorModFloat */

  /* EXPORT WasmEdgeSDL_SDL_SetTextureAlphaMod */
  /* bool SDL_SetTextureAlphaMod(SDL_Texture *texture, Uint8 alpha) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTextureAlphaMod[2], ReturnTypes_SDL_SetTextureAlphaMod[1];
  ParamTypes_SDL_SetTextureAlphaMod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureAlphaMod[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetTextureAlphaMod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTextureAlphaMod, 2, ReturnTypes_SDL_SetTextureAlphaMod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTextureAlphaMod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTextureAlphaMod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTextureAlphaMod */

  /* EXPORT WasmEdgeSDL_SDL_SetTextureAlphaModFloat */
  /* bool SDL_SetTextureAlphaModFloat(SDL_Texture *texture, float alpha) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTextureAlphaModFloat[2], ReturnTypes_SDL_SetTextureAlphaModFloat[1];
  ParamTypes_SDL_SetTextureAlphaModFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureAlphaModFloat[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetTextureAlphaModFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTextureAlphaModFloat, 2, ReturnTypes_SDL_SetTextureAlphaModFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTextureAlphaModFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTextureAlphaModFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTextureAlphaModFloat */

  /* EXPORT WasmEdgeSDL_SDL_GetTextureAlphaMod */
  /* bool SDL_GetTextureAlphaMod(SDL_Texture *texture, Uint8 *alpha) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextureAlphaMod[2], ReturnTypes_SDL_GetTextureAlphaMod[1];
  ParamTypes_SDL_GetTextureAlphaMod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureAlphaMod[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextureAlphaMod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextureAlphaMod, 2, ReturnTypes_SDL_GetTextureAlphaMod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextureAlphaMod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextureAlphaMod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextureAlphaMod */

  /* EXPORT WasmEdgeSDL_SDL_GetTextureAlphaModFloat */
  /* bool SDL_GetTextureAlphaModFloat(SDL_Texture *texture, float *alpha) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextureAlphaModFloat[2], ReturnTypes_SDL_GetTextureAlphaModFloat[1];
  ParamTypes_SDL_GetTextureAlphaModFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureAlphaModFloat[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextureAlphaModFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextureAlphaModFloat, 2, ReturnTypes_SDL_GetTextureAlphaModFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextureAlphaModFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextureAlphaModFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextureAlphaModFloat */

  /* EXPORT WasmEdgeSDL_SDL_SetTextureBlendMode */
  /* bool SDL_SetTextureBlendMode(SDL_Texture *texture, SDL_BlendMode blendMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTextureBlendMode[2], ReturnTypes_SDL_SetTextureBlendMode[1];
  ParamTypes_SDL_SetTextureBlendMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureBlendMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetTextureBlendMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTextureBlendMode, 2, ReturnTypes_SDL_SetTextureBlendMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTextureBlendMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTextureBlendMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTextureBlendMode */

  /* EXPORT WasmEdgeSDL_SDL_GetTextureBlendMode */
  /* bool SDL_GetTextureBlendMode(SDL_Texture *texture, SDL_BlendMode *blendMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextureBlendMode[2], ReturnTypes_SDL_GetTextureBlendMode[1];
  ParamTypes_SDL_GetTextureBlendMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureBlendMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextureBlendMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextureBlendMode, 2, ReturnTypes_SDL_GetTextureBlendMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextureBlendMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextureBlendMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextureBlendMode */

  /* EXPORT WasmEdgeSDL_SDL_SetTextureScaleMode */
  /* bool SDL_SetTextureScaleMode(SDL_Texture *texture, SDL_ScaleMode scaleMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTextureScaleMode[2], ReturnTypes_SDL_SetTextureScaleMode[1];
  ParamTypes_SDL_SetTextureScaleMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTextureScaleMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetTextureScaleMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTextureScaleMode, 2, ReturnTypes_SDL_SetTextureScaleMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTextureScaleMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTextureScaleMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTextureScaleMode */

  /* EXPORT WasmEdgeSDL_SDL_GetTextureScaleMode */
  /* bool SDL_GetTextureScaleMode(SDL_Texture *texture, SDL_ScaleMode *scaleMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTextureScaleMode[2], ReturnTypes_SDL_GetTextureScaleMode[1];
  ParamTypes_SDL_GetTextureScaleMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTextureScaleMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTextureScaleMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTextureScaleMode, 2, ReturnTypes_SDL_GetTextureScaleMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTextureScaleMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTextureScaleMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTextureScaleMode */

  /* EXPORT WasmEdgeSDL_SDL_UpdateTexture */
  /* bool SDL_UpdateTexture(SDL_Texture *texture, const SDL_Rect *rect, const void *pixels, int pitch) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UpdateTexture[4], ReturnTypes_SDL_UpdateTexture[1];
  ParamTypes_SDL_UpdateTexture[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UpdateTexture[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UpdateTexture[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UpdateTexture[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_UpdateTexture[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UpdateTexture, 4, ReturnTypes_SDL_UpdateTexture, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UpdateTexture"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UpdateTexture, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UpdateTexture */

  /* EXPORT WasmEdgeSDL_SDL_LockTextureToSurface */
  /* bool SDL_LockTextureToSurface(SDL_Texture *texture, const SDL_Rect *rect, SDL_Surface **surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockTextureToSurface[3], ReturnTypes_SDL_LockTextureToSurface[1];
  ParamTypes_SDL_LockTextureToSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LockTextureToSurface[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LockTextureToSurface[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LockTextureToSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockTextureToSurface, 3, ReturnTypes_SDL_LockTextureToSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockTextureToSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockTextureToSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockTextureToSurface */

  /* EXPORT WasmEdgeSDL_SDL_UnlockTexture */
  /* void SDL_UnlockTexture(SDL_Texture *texture) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnlockTexture[1], ReturnTypes_SDL_UnlockTexture[1];
  ParamTypes_SDL_UnlockTexture[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnlockTexture, 1, ReturnTypes_SDL_UnlockTexture, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnlockTexture"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnlockTexture, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnlockTexture */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderTarget */
  /* bool SDL_SetRenderTarget(SDL_Renderer *renderer, SDL_Texture *texture) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderTarget[2], ReturnTypes_SDL_SetRenderTarget[1];
  ParamTypes_SDL_SetRenderTarget[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderTarget[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderTarget[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderTarget, 2, ReturnTypes_SDL_SetRenderTarget, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderTarget"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderTarget, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderTarget */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderTarget */
  /* SDL_Texture * SDL_GetRenderTarget(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderTarget[1], ReturnTypes_SDL_GetRenderTarget[1];
  ParamTypes_SDL_GetRenderTarget[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderTarget[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderTarget, 1, ReturnTypes_SDL_GetRenderTarget, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderTarget"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderTarget, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderTarget */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderLogicalPresentation */
  /* bool SDL_SetRenderLogicalPresentation(SDL_Renderer *renderer, int w, int h, SDL_RendererLogicalPresentation mode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderLogicalPresentation[4], ReturnTypes_SDL_SetRenderLogicalPresentation[1];
  ParamTypes_SDL_SetRenderLogicalPresentation[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderLogicalPresentation[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderLogicalPresentation[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderLogicalPresentation[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderLogicalPresentation[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderLogicalPresentation, 4, ReturnTypes_SDL_SetRenderLogicalPresentation, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderLogicalPresentation"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderLogicalPresentation, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderLogicalPresentation */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderLogicalPresentation */
  /* bool SDL_GetRenderLogicalPresentation(SDL_Renderer *renderer, int *w, int *h, SDL_RendererLogicalPresentation *mode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderLogicalPresentation[4], ReturnTypes_SDL_GetRenderLogicalPresentation[1];
  ParamTypes_SDL_GetRenderLogicalPresentation[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderLogicalPresentation[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderLogicalPresentation[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderLogicalPresentation[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderLogicalPresentation[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderLogicalPresentation, 4, ReturnTypes_SDL_GetRenderLogicalPresentation, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderLogicalPresentation"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderLogicalPresentation, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderLogicalPresentation */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderLogicalPresentationRect */
  /* bool SDL_GetRenderLogicalPresentationRect(SDL_Renderer *renderer, SDL_FRect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderLogicalPresentationRect[2], ReturnTypes_SDL_GetRenderLogicalPresentationRect[1];
  ParamTypes_SDL_GetRenderLogicalPresentationRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderLogicalPresentationRect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderLogicalPresentationRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderLogicalPresentationRect, 2, ReturnTypes_SDL_GetRenderLogicalPresentationRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderLogicalPresentationRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderLogicalPresentationRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderLogicalPresentationRect */

  /* EXPORT WasmEdgeSDL_SDL_RenderCoordinatesFromWindow */
  /* bool SDL_RenderCoordinatesFromWindow(SDL_Renderer *renderer, float window_x, float window_y, float *x, float *y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderCoordinatesFromWindow[5], ReturnTypes_SDL_RenderCoordinatesFromWindow[1];
  ParamTypes_SDL_RenderCoordinatesFromWindow[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderCoordinatesFromWindow[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderCoordinatesFromWindow[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderCoordinatesFromWindow[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderCoordinatesFromWindow[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderCoordinatesFromWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderCoordinatesFromWindow, 5, ReturnTypes_SDL_RenderCoordinatesFromWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderCoordinatesFromWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderCoordinatesFromWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderCoordinatesFromWindow */

  /* EXPORT WasmEdgeSDL_SDL_RenderCoordinatesToWindow */
  /* bool SDL_RenderCoordinatesToWindow(SDL_Renderer *renderer, float x, float y, float *window_x, float *window_y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderCoordinatesToWindow[5], ReturnTypes_SDL_RenderCoordinatesToWindow[1];
  ParamTypes_SDL_RenderCoordinatesToWindow[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderCoordinatesToWindow[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderCoordinatesToWindow[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderCoordinatesToWindow[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderCoordinatesToWindow[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderCoordinatesToWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderCoordinatesToWindow, 5, ReturnTypes_SDL_RenderCoordinatesToWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderCoordinatesToWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderCoordinatesToWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderCoordinatesToWindow */

  /* EXPORT WasmEdgeSDL_SDL_ConvertEventToRenderCoordinates */
  /* bool SDL_ConvertEventToRenderCoordinates(SDL_Renderer *renderer, SDL_Event *event) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ConvertEventToRenderCoordinates[2], ReturnTypes_SDL_ConvertEventToRenderCoordinates[1];
  ParamTypes_SDL_ConvertEventToRenderCoordinates[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertEventToRenderCoordinates[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ConvertEventToRenderCoordinates[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ConvertEventToRenderCoordinates, 2, ReturnTypes_SDL_ConvertEventToRenderCoordinates, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ConvertEventToRenderCoordinates"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ConvertEventToRenderCoordinates, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ConvertEventToRenderCoordinates */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderViewport */
  /* bool SDL_SetRenderViewport(SDL_Renderer *renderer, const SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderViewport[2], ReturnTypes_SDL_SetRenderViewport[1];
  ParamTypes_SDL_SetRenderViewport[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderViewport[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderViewport[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderViewport, 2, ReturnTypes_SDL_SetRenderViewport, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderViewport"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderViewport, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderViewport */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderViewport */
  /* bool SDL_GetRenderViewport(SDL_Renderer *renderer, SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderViewport[2], ReturnTypes_SDL_GetRenderViewport[1];
  ParamTypes_SDL_GetRenderViewport[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderViewport[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderViewport[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderViewport, 2, ReturnTypes_SDL_GetRenderViewport, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderViewport"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderViewport, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderViewport */

  /* EXPORT WasmEdgeSDL_SDL_RenderViewportSet */
  /* bool SDL_RenderViewportSet(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderViewportSet[1], ReturnTypes_SDL_RenderViewportSet[1];
  ParamTypes_SDL_RenderViewportSet[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderViewportSet[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderViewportSet, 1, ReturnTypes_SDL_RenderViewportSet, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderViewportSet"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderViewportSet, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderViewportSet */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderSafeArea */
  /* bool SDL_GetRenderSafeArea(SDL_Renderer *renderer, SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderSafeArea[2], ReturnTypes_SDL_GetRenderSafeArea[1];
  ParamTypes_SDL_GetRenderSafeArea[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderSafeArea[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderSafeArea[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderSafeArea, 2, ReturnTypes_SDL_GetRenderSafeArea, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderSafeArea"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderSafeArea, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderSafeArea */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderClipRect */
  /* bool SDL_SetRenderClipRect(SDL_Renderer *renderer, const SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderClipRect[2], ReturnTypes_SDL_SetRenderClipRect[1];
  ParamTypes_SDL_SetRenderClipRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderClipRect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderClipRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderClipRect, 2, ReturnTypes_SDL_SetRenderClipRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderClipRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderClipRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderClipRect */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderClipRect */
  /* bool SDL_GetRenderClipRect(SDL_Renderer *renderer, SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderClipRect[2], ReturnTypes_SDL_GetRenderClipRect[1];
  ParamTypes_SDL_GetRenderClipRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderClipRect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderClipRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderClipRect, 2, ReturnTypes_SDL_GetRenderClipRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderClipRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderClipRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderClipRect */

  /* EXPORT WasmEdgeSDL_SDL_RenderClipEnabled */
  /* bool SDL_RenderClipEnabled(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderClipEnabled[1], ReturnTypes_SDL_RenderClipEnabled[1];
  ParamTypes_SDL_RenderClipEnabled[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderClipEnabled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderClipEnabled, 1, ReturnTypes_SDL_RenderClipEnabled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderClipEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderClipEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderClipEnabled */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderScale */
  /* bool SDL_SetRenderScale(SDL_Renderer *renderer, float scaleX, float scaleY) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderScale[3], ReturnTypes_SDL_SetRenderScale[1];
  ParamTypes_SDL_SetRenderScale[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderScale[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderScale[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderScale[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderScale, 3, ReturnTypes_SDL_SetRenderScale, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderScale"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderScale, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderScale */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderScale */
  /* bool SDL_GetRenderScale(SDL_Renderer *renderer, float *scaleX, float *scaleY) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderScale[3], ReturnTypes_SDL_GetRenderScale[1];
  ParamTypes_SDL_GetRenderScale[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderScale[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderScale[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderScale[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderScale, 3, ReturnTypes_SDL_GetRenderScale, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderScale"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderScale, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderScale */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderDrawColor */
  /* bool SDL_SetRenderDrawColor(SDL_Renderer *renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderDrawColor[5], ReturnTypes_SDL_SetRenderDrawColor[1];
  ParamTypes_SDL_SetRenderDrawColor[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawColor[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawColor[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawColor[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawColor[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderDrawColor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderDrawColor, 5, ReturnTypes_SDL_SetRenderDrawColor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderDrawColor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderDrawColor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderDrawColor */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderDrawColorFloat */
  /* bool SDL_SetRenderDrawColorFloat(SDL_Renderer *renderer, float r, float g, float b, float a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderDrawColorFloat[5], ReturnTypes_SDL_SetRenderDrawColorFloat[1];
  ParamTypes_SDL_SetRenderDrawColorFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawColorFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawColorFloat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawColorFloat[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawColorFloat[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderDrawColorFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderDrawColorFloat, 5, ReturnTypes_SDL_SetRenderDrawColorFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderDrawColorFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderDrawColorFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderDrawColorFloat */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderDrawColor */
  /* bool SDL_GetRenderDrawColor(SDL_Renderer *renderer, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderDrawColor[5], ReturnTypes_SDL_GetRenderDrawColor[1];
  ParamTypes_SDL_GetRenderDrawColor[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawColor[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawColor[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawColor[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawColor[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderDrawColor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderDrawColor, 5, ReturnTypes_SDL_GetRenderDrawColor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderDrawColor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderDrawColor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderDrawColor */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderDrawColorFloat */
  /* bool SDL_GetRenderDrawColorFloat(SDL_Renderer *renderer, float *r, float *g, float *b, float *a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderDrawColorFloat[5], ReturnTypes_SDL_GetRenderDrawColorFloat[1];
  ParamTypes_SDL_GetRenderDrawColorFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawColorFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawColorFloat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawColorFloat[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawColorFloat[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderDrawColorFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderDrawColorFloat, 5, ReturnTypes_SDL_GetRenderDrawColorFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderDrawColorFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderDrawColorFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderDrawColorFloat */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderColorScale */
  /* bool SDL_SetRenderColorScale(SDL_Renderer *renderer, float scale) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderColorScale[2], ReturnTypes_SDL_SetRenderColorScale[1];
  ParamTypes_SDL_SetRenderColorScale[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderColorScale[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderColorScale[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderColorScale, 2, ReturnTypes_SDL_SetRenderColorScale, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderColorScale"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderColorScale, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderColorScale */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderColorScale */
  /* bool SDL_GetRenderColorScale(SDL_Renderer *renderer, float *scale) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderColorScale[2], ReturnTypes_SDL_GetRenderColorScale[1];
  ParamTypes_SDL_GetRenderColorScale[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderColorScale[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderColorScale[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderColorScale, 2, ReturnTypes_SDL_GetRenderColorScale, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderColorScale"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderColorScale, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderColorScale */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderDrawBlendMode */
  /* bool SDL_SetRenderDrawBlendMode(SDL_Renderer *renderer, SDL_BlendMode blendMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderDrawBlendMode[2], ReturnTypes_SDL_SetRenderDrawBlendMode[1];
  ParamTypes_SDL_SetRenderDrawBlendMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderDrawBlendMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderDrawBlendMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderDrawBlendMode, 2, ReturnTypes_SDL_SetRenderDrawBlendMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderDrawBlendMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderDrawBlendMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderDrawBlendMode */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderDrawBlendMode */
  /* bool SDL_GetRenderDrawBlendMode(SDL_Renderer *renderer, SDL_BlendMode *blendMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderDrawBlendMode[2], ReturnTypes_SDL_GetRenderDrawBlendMode[1];
  ParamTypes_SDL_GetRenderDrawBlendMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderDrawBlendMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderDrawBlendMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderDrawBlendMode, 2, ReturnTypes_SDL_GetRenderDrawBlendMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderDrawBlendMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderDrawBlendMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderDrawBlendMode */

  /* EXPORT WasmEdgeSDL_SDL_RenderClear */
  /* bool SDL_RenderClear(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderClear[1], ReturnTypes_SDL_RenderClear[1];
  ParamTypes_SDL_RenderClear[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderClear[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderClear, 1, ReturnTypes_SDL_RenderClear, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderClear"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderClear, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderClear */

  /* EXPORT WasmEdgeSDL_SDL_RenderPoint */
  /* bool SDL_RenderPoint(SDL_Renderer *renderer, float x, float y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderPoint[3], ReturnTypes_SDL_RenderPoint[1];
  ParamTypes_SDL_RenderPoint[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderPoint[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderPoint[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderPoint[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderPoint, 3, ReturnTypes_SDL_RenderPoint, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderPoint"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderPoint, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderPoint */

  /* EXPORT WasmEdgeSDL_SDL_RenderPoints */
  /* bool SDL_RenderPoints(SDL_Renderer *renderer, const SDL_FPoint *points, int count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderPoints[3], ReturnTypes_SDL_RenderPoints[1];
  ParamTypes_SDL_RenderPoints[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderPoints[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderPoints[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderPoints[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderPoints, 3, ReturnTypes_SDL_RenderPoints, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderPoints"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderPoints, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderPoints */

  /* EXPORT WasmEdgeSDL_SDL_RenderLine */
  /* bool SDL_RenderLine(SDL_Renderer *renderer, float x1, float y1, float x2, float y2) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderLine[5], ReturnTypes_SDL_RenderLine[1];
  ParamTypes_SDL_RenderLine[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderLine[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderLine[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderLine[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderLine[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderLine[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderLine, 5, ReturnTypes_SDL_RenderLine, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderLine"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderLine, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderLine */

  /* EXPORT WasmEdgeSDL_SDL_RenderLines */
  /* bool SDL_RenderLines(SDL_Renderer *renderer, const SDL_FPoint *points, int count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderLines[3], ReturnTypes_SDL_RenderLines[1];
  ParamTypes_SDL_RenderLines[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderLines[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderLines[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderLines[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderLines, 3, ReturnTypes_SDL_RenderLines, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderLines"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderLines, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderLines */

  /* EXPORT WasmEdgeSDL_SDL_RenderRect */
  /* bool SDL_RenderRect(SDL_Renderer *renderer, const SDL_FRect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderRect[2], ReturnTypes_SDL_RenderRect[1];
  ParamTypes_SDL_RenderRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderRect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderRect, 2, ReturnTypes_SDL_RenderRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderRect */

  /* EXPORT WasmEdgeSDL_SDL_RenderRects */
  /* bool SDL_RenderRects(SDL_Renderer *renderer, const SDL_FRect *rects, int count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderRects[3], ReturnTypes_SDL_RenderRects[1];
  ParamTypes_SDL_RenderRects[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderRects[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderRects[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderRects[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderRects, 3, ReturnTypes_SDL_RenderRects, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderRects"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderRects, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderRects */

  /* EXPORT WasmEdgeSDL_SDL_RenderFillRect */
  /* bool SDL_RenderFillRect(SDL_Renderer *renderer, const SDL_FRect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderFillRect[2], ReturnTypes_SDL_RenderFillRect[1];
  ParamTypes_SDL_RenderFillRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderFillRect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderFillRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderFillRect, 2, ReturnTypes_SDL_RenderFillRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderFillRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderFillRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderFillRect */

  /* EXPORT WasmEdgeSDL_SDL_RenderFillRects */
  /* bool SDL_RenderFillRects(SDL_Renderer *renderer, const SDL_FRect *rects, int count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderFillRects[3], ReturnTypes_SDL_RenderFillRects[1];
  ParamTypes_SDL_RenderFillRects[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderFillRects[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderFillRects[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderFillRects[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderFillRects, 3, ReturnTypes_SDL_RenderFillRects, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderFillRects"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderFillRects, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderFillRects */

  /* EXPORT WasmEdgeSDL_SDL_RenderTexture */
  /* bool SDL_RenderTexture(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, const SDL_FRect *dstrect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderTexture[4], ReturnTypes_SDL_RenderTexture[1];
  ParamTypes_SDL_RenderTexture[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderTexture[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderTexture, 4, ReturnTypes_SDL_RenderTexture, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderTexture"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderTexture, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderTexture */

  /* EXPORT WasmEdgeSDL_SDL_RenderTextureTiled */
  /* bool SDL_RenderTextureTiled(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, float scale, const SDL_FRect *dstrect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderTextureTiled[5], ReturnTypes_SDL_RenderTextureTiled[1];
  ParamTypes_SDL_RenderTextureTiled[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTextureTiled[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTextureTiled[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTextureTiled[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTextureTiled[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderTextureTiled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderTextureTiled, 5, ReturnTypes_SDL_RenderTextureTiled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderTextureTiled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderTextureTiled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderTextureTiled */

  /* EXPORT WasmEdgeSDL_SDL_RenderTexture9Grid */
  /* bool SDL_RenderTexture9Grid(SDL_Renderer *renderer, SDL_Texture *texture, const SDL_FRect *srcrect, float left_width, float right_width, float top_height, float bottom_height, float scale, const SDL_FRect *dstrect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderTexture9Grid[9], ReturnTypes_SDL_RenderTexture9Grid[1];
  ParamTypes_SDL_RenderTexture9Grid[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture9Grid[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture9Grid[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture9Grid[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture9Grid[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture9Grid[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture9Grid[6] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture9Grid[7] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderTexture9Grid[8] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderTexture9Grid[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderTexture9Grid, 9, ReturnTypes_SDL_RenderTexture9Grid, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderTexture9Grid"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderTexture9Grid, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderTexture9Grid */

  /* EXPORT WasmEdgeSDL_SDL_RenderReadPixels */
  /* SDL_Surface * SDL_RenderReadPixels(SDL_Renderer *renderer, const SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderReadPixels[2], ReturnTypes_SDL_RenderReadPixels[1];
  ParamTypes_SDL_RenderReadPixels[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderReadPixels[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderReadPixels[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderReadPixels, 2, ReturnTypes_SDL_RenderReadPixels, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderReadPixels"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderReadPixels, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderReadPixels */

  /* EXPORT WasmEdgeSDL_SDL_RenderPresent */
  /* bool SDL_RenderPresent(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderPresent[1], ReturnTypes_SDL_RenderPresent[1];
  ParamTypes_SDL_RenderPresent[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderPresent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderPresent, 1, ReturnTypes_SDL_RenderPresent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderPresent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderPresent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderPresent */

  /* EXPORT WasmEdgeSDL_SDL_DestroyTexture */
  /* void SDL_DestroyTexture(SDL_Texture *texture) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyTexture[1], ReturnTypes_SDL_DestroyTexture[1];
  ParamTypes_SDL_DestroyTexture[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyTexture, 1, ReturnTypes_SDL_DestroyTexture, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyTexture"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyTexture, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyTexture */

  /* EXPORT WasmEdgeSDL_SDL_DestroyRenderer */
  /* void SDL_DestroyRenderer(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyRenderer[1], ReturnTypes_SDL_DestroyRenderer[1];
  ParamTypes_SDL_DestroyRenderer[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyRenderer, 1, ReturnTypes_SDL_DestroyRenderer, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyRenderer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyRenderer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyRenderer */

  /* EXPORT WasmEdgeSDL_SDL_FlushRenderer */
  /* bool SDL_FlushRenderer(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FlushRenderer[1], ReturnTypes_SDL_FlushRenderer[1];
  ParamTypes_SDL_FlushRenderer[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_FlushRenderer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FlushRenderer, 1, ReturnTypes_SDL_FlushRenderer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FlushRenderer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FlushRenderer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FlushRenderer */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderMetalLayer */
  /* void * SDL_GetRenderMetalLayer(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderMetalLayer[1], ReturnTypes_SDL_GetRenderMetalLayer[1];
  ParamTypes_SDL_GetRenderMetalLayer[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderMetalLayer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderMetalLayer, 1, ReturnTypes_SDL_GetRenderMetalLayer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderMetalLayer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderMetalLayer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderMetalLayer */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderMetalCommandEncoder */
  /* void * SDL_GetRenderMetalCommandEncoder(SDL_Renderer *renderer) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderMetalCommandEncoder[1], ReturnTypes_SDL_GetRenderMetalCommandEncoder[1];
  ParamTypes_SDL_GetRenderMetalCommandEncoder[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderMetalCommandEncoder[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderMetalCommandEncoder, 1, ReturnTypes_SDL_GetRenderMetalCommandEncoder, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderMetalCommandEncoder"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderMetalCommandEncoder, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderMetalCommandEncoder */

  /* EXPORT WasmEdgeSDL_SDL_AddVulkanRenderSemaphores */
  /* bool SDL_AddVulkanRenderSemaphores(SDL_Renderer *renderer, Uint32 wait_stage_mask, Sint64 wait_semaphore, Sint64 signal_semaphore) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddVulkanRenderSemaphores[4], ReturnTypes_SDL_AddVulkanRenderSemaphores[1];
  ParamTypes_SDL_AddVulkanRenderSemaphores[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddVulkanRenderSemaphores[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddVulkanRenderSemaphores[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddVulkanRenderSemaphores[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddVulkanRenderSemaphores[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddVulkanRenderSemaphores, 4, ReturnTypes_SDL_AddVulkanRenderSemaphores, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddVulkanRenderSemaphores"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddVulkanRenderSemaphores, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddVulkanRenderSemaphores */

  /* EXPORT WasmEdgeSDL_SDL_SetRenderVSync */
  /* bool SDL_SetRenderVSync(SDL_Renderer *renderer, int vsync) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetRenderVSync[2], ReturnTypes_SDL_SetRenderVSync[1];
  ParamTypes_SDL_SetRenderVSync[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetRenderVSync[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetRenderVSync[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetRenderVSync, 2, ReturnTypes_SDL_SetRenderVSync, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetRenderVSync"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetRenderVSync, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetRenderVSync */

  /* EXPORT WasmEdgeSDL_SDL_GetRenderVSync */
  /* bool SDL_GetRenderVSync(SDL_Renderer *renderer, int *vsync) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRenderVSync[2], ReturnTypes_SDL_GetRenderVSync[1];
  ParamTypes_SDL_GetRenderVSync[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetRenderVSync[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetRenderVSync[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRenderVSync, 2, ReturnTypes_SDL_GetRenderVSync, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRenderVSync"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRenderVSync, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRenderVSync */

  /* EXPORT WasmEdgeSDL_SDL_RenderDebugText */
  /* bool SDL_RenderDebugText(SDL_Renderer *renderer, float x, float y, const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderDebugText[4], ReturnTypes_SDL_RenderDebugText[1];
  ParamTypes_SDL_RenderDebugText[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderDebugText[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderDebugText[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderDebugText[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderDebugText[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderDebugText, 4, ReturnTypes_SDL_RenderDebugText, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderDebugText"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderDebugText, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderDebugText */

  /* EXPORT WasmEdgeSDL_SDL_RenderDebugTextFormat */
  /* bool SDL_RenderDebugTextFormat(SDL_Renderer *renderer, float x, float y, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenderDebugTextFormat[5], ReturnTypes_SDL_RenderDebugTextFormat[1];
  ParamTypes_SDL_RenderDebugTextFormat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderDebugTextFormat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderDebugTextFormat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderDebugTextFormat[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenderDebugTextFormat[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenderDebugTextFormat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenderDebugTextFormat, 5, ReturnTypes_SDL_RenderDebugTextFormat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenderDebugTextFormat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenderDebugTextFormat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenderDebugTextFormat */

  /* EXPORT WasmEdgeSDL_SDL_GetSensors */
  /* SDL_SensorID * SDL_GetSensors(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensors[1], ReturnTypes_SDL_GetSensors[1];
  ParamTypes_SDL_GetSensors[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensors[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensors, 1, ReturnTypes_SDL_GetSensors, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensors"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensors, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensors */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorNameForID */
  /* const char * SDL_GetSensorNameForID(SDL_SensorID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorNameForID[1], ReturnTypes_SDL_GetSensorNameForID[1];
  ParamTypes_SDL_GetSensorNameForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorNameForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorNameForID, 1, ReturnTypes_SDL_GetSensorNameForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorNameForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorNameForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorNameForID */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorTypeForID */
  /* SDL_SensorType SDL_GetSensorTypeForID(SDL_SensorID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorTypeForID[1], ReturnTypes_SDL_GetSensorTypeForID[1];
  ParamTypes_SDL_GetSensorTypeForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorTypeForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorTypeForID, 1, ReturnTypes_SDL_GetSensorTypeForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorTypeForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorTypeForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorTypeForID */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorNonPortableTypeForID */
  /* int SDL_GetSensorNonPortableTypeForID(SDL_SensorID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorNonPortableTypeForID[1], ReturnTypes_SDL_GetSensorNonPortableTypeForID[1];
  ParamTypes_SDL_GetSensorNonPortableTypeForID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorNonPortableTypeForID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorNonPortableTypeForID, 1, ReturnTypes_SDL_GetSensorNonPortableTypeForID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorNonPortableTypeForID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorNonPortableTypeForID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorNonPortableTypeForID */

  /* EXPORT WasmEdgeSDL_SDL_OpenSensor */
  /* SDL_Sensor * SDL_OpenSensor(SDL_SensorID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenSensor[1], ReturnTypes_SDL_OpenSensor[1];
  ParamTypes_SDL_OpenSensor[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenSensor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenSensor, 1, ReturnTypes_SDL_OpenSensor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenSensor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenSensor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenSensor */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorFromID */
  /* SDL_Sensor * SDL_GetSensorFromID(SDL_SensorID instance_id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorFromID[1], ReturnTypes_SDL_GetSensorFromID[1];
  ParamTypes_SDL_GetSensorFromID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorFromID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorFromID, 1, ReturnTypes_SDL_GetSensorFromID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorFromID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorFromID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorFromID */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorProperties */
  /* SDL_PropertiesID SDL_GetSensorProperties(SDL_Sensor *sensor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorProperties[1], ReturnTypes_SDL_GetSensorProperties[1];
  ParamTypes_SDL_GetSensorProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorProperties, 1, ReturnTypes_SDL_GetSensorProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorName */
  /* const char * SDL_GetSensorName(SDL_Sensor *sensor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorName[1], ReturnTypes_SDL_GetSensorName[1];
  ParamTypes_SDL_GetSensorName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorName, 1, ReturnTypes_SDL_GetSensorName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorName */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorType */
  /* SDL_SensorType SDL_GetSensorType(SDL_Sensor *sensor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorType[1], ReturnTypes_SDL_GetSensorType[1];
  ParamTypes_SDL_GetSensorType[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorType, 1, ReturnTypes_SDL_GetSensorType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorType */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorNonPortableType */
  /* int SDL_GetSensorNonPortableType(SDL_Sensor *sensor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorNonPortableType[1], ReturnTypes_SDL_GetSensorNonPortableType[1];
  ParamTypes_SDL_GetSensorNonPortableType[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorNonPortableType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorNonPortableType, 1, ReturnTypes_SDL_GetSensorNonPortableType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorNonPortableType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorNonPortableType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorNonPortableType */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorID */
  /* SDL_SensorID SDL_GetSensorID(SDL_Sensor *sensor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorID[1], ReturnTypes_SDL_GetSensorID[1];
  ParamTypes_SDL_GetSensorID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorID, 1, ReturnTypes_SDL_GetSensorID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorID */

  /* EXPORT WasmEdgeSDL_SDL_GetSensorData */
  /* bool SDL_GetSensorData(SDL_Sensor *sensor, float *data, int num_values) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSensorData[3], ReturnTypes_SDL_GetSensorData[1];
  ParamTypes_SDL_GetSensorData[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSensorData[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSensorData[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSensorData[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSensorData, 3, ReturnTypes_SDL_GetSensorData, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSensorData"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSensorData, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSensorData */

  /* EXPORT WasmEdgeSDL_SDL_CloseSensor */
  /* void SDL_CloseSensor(SDL_Sensor *sensor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseSensor[1], ReturnTypes_SDL_CloseSensor[1];
  ParamTypes_SDL_CloseSensor[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseSensor, 1, ReturnTypes_SDL_CloseSensor, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseSensor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseSensor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseSensor */

  /* EXPORT WasmEdgeSDL_SDL_UpdateSensors */
  /* void SDL_UpdateSensors(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UpdateSensors[1], ReturnTypes_SDL_UpdateSensors[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UpdateSensors, 0, ReturnTypes_SDL_UpdateSensors, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UpdateSensors"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UpdateSensors, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UpdateSensors */

  /* EXPORT WasmEdgeSDL_SDL_malloc */
  /* SDL_MALLOC void * SDL_malloc(size_t size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_malloc[1], ReturnTypes_SDL_malloc[1];
  ParamTypes_SDL_malloc[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_malloc[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_malloc, 1, ReturnTypes_SDL_malloc, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_malloc"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_malloc, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_malloc */

  /* EXPORT WasmEdgeSDL_SDL_ALLOC_SIZE2 */
  /* SDL_MALLOC SDL_ALLOC_SIZE2(1, 2) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ALLOC_SIZE2[2], ReturnTypes_SDL_ALLOC_SIZE2[1];
  ParamTypes_SDL_ALLOC_SIZE2[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ALLOC_SIZE2[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ALLOC_SIZE2[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ALLOC_SIZE2, 2, ReturnTypes_SDL_ALLOC_SIZE2, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ALLOC_SIZE2"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ALLOC_SIZE2, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ALLOC_SIZE2 */

  /* EXPORT WasmEdgeSDL_SDL_free */
  /* void SDL_free(void *mem) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_free[1], ReturnTypes_SDL_free[1];
  ParamTypes_SDL_free[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_free, 1, ReturnTypes_SDL_free, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_free"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_free, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_free */

  /* EXPORT WasmEdgeSDL_SDL_aligned_alloc */
  /* SDL_MALLOC void * SDL_aligned_alloc(size_t alignment, size_t size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_aligned_alloc[2], ReturnTypes_SDL_aligned_alloc[1];
  ParamTypes_SDL_aligned_alloc[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_aligned_alloc[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_aligned_alloc[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_aligned_alloc, 2, ReturnTypes_SDL_aligned_alloc, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_aligned_alloc"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_aligned_alloc, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_aligned_alloc */

  /* EXPORT WasmEdgeSDL_SDL_aligned_free */
  /* void SDL_aligned_free(void *mem) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_aligned_free[1], ReturnTypes_SDL_aligned_free[1];
  ParamTypes_SDL_aligned_free[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_aligned_free, 1, ReturnTypes_SDL_aligned_free, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_aligned_free"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_aligned_free, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_aligned_free */

  /* EXPORT WasmEdgeSDL_SDL_GetNumAllocations */
  /* int SDL_GetNumAllocations(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumAllocations[1], ReturnTypes_SDL_GetNumAllocations[1];

  ReturnTypes_SDL_GetNumAllocations[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumAllocations, 0, ReturnTypes_SDL_GetNumAllocations, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumAllocations"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumAllocations, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumAllocations */

  /* EXPORT WasmEdgeSDL_SDL_GetEnvironment */
  /* SDL_Environment * SDL_GetEnvironment(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetEnvironment[1], ReturnTypes_SDL_GetEnvironment[1];

  ReturnTypes_SDL_GetEnvironment[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetEnvironment, 0, ReturnTypes_SDL_GetEnvironment, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetEnvironment"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetEnvironment, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetEnvironment */

  /* EXPORT WasmEdgeSDL_SDL_CreateEnvironment */
  /* SDL_Environment * SDL_CreateEnvironment(bool populated) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateEnvironment[1], ReturnTypes_SDL_CreateEnvironment[1];
  ParamTypes_SDL_CreateEnvironment[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateEnvironment[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateEnvironment, 1, ReturnTypes_SDL_CreateEnvironment, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateEnvironment"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateEnvironment, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateEnvironment */

  /* EXPORT WasmEdgeSDL_SDL_GetEnvironmentVariable */
  /* const char * SDL_GetEnvironmentVariable(SDL_Environment *env, const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetEnvironmentVariable[2], ReturnTypes_SDL_GetEnvironmentVariable[1];
  ParamTypes_SDL_GetEnvironmentVariable[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetEnvironmentVariable[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetEnvironmentVariable[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetEnvironmentVariable, 2, ReturnTypes_SDL_GetEnvironmentVariable, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetEnvironmentVariable"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetEnvironmentVariable, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetEnvironmentVariable */

  /* EXPORT WasmEdgeSDL_SDL_GetEnvironmentVariables */
  /* char ** SDL_GetEnvironmentVariables(SDL_Environment *env) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetEnvironmentVariables[1], ReturnTypes_SDL_GetEnvironmentVariables[1];
  ParamTypes_SDL_GetEnvironmentVariables[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetEnvironmentVariables[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetEnvironmentVariables, 1, ReturnTypes_SDL_GetEnvironmentVariables, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetEnvironmentVariables"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetEnvironmentVariables, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetEnvironmentVariables */

  /* EXPORT WasmEdgeSDL_SDL_SetEnvironmentVariable */
  /* bool SDL_SetEnvironmentVariable(SDL_Environment *env, const char *name, const char *value, bool overwrite) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetEnvironmentVariable[4], ReturnTypes_SDL_SetEnvironmentVariable[1];
  ParamTypes_SDL_SetEnvironmentVariable[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetEnvironmentVariable[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetEnvironmentVariable[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetEnvironmentVariable[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetEnvironmentVariable[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetEnvironmentVariable, 4, ReturnTypes_SDL_SetEnvironmentVariable, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetEnvironmentVariable"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetEnvironmentVariable, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetEnvironmentVariable */

  /* EXPORT WasmEdgeSDL_SDL_UnsetEnvironmentVariable */
  /* bool SDL_UnsetEnvironmentVariable(SDL_Environment *env, const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnsetEnvironmentVariable[2], ReturnTypes_SDL_UnsetEnvironmentVariable[1];
  ParamTypes_SDL_UnsetEnvironmentVariable[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UnsetEnvironmentVariable[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_UnsetEnvironmentVariable[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnsetEnvironmentVariable, 2, ReturnTypes_SDL_UnsetEnvironmentVariable, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnsetEnvironmentVariable"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnsetEnvironmentVariable, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnsetEnvironmentVariable */

  /* EXPORT WasmEdgeSDL_SDL_DestroyEnvironment */
  /* void SDL_DestroyEnvironment(SDL_Environment *env) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyEnvironment[1], ReturnTypes_SDL_DestroyEnvironment[1];
  ParamTypes_SDL_DestroyEnvironment[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyEnvironment, 1, ReturnTypes_SDL_DestroyEnvironment, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyEnvironment"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyEnvironment, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyEnvironment */

  /* EXPORT WasmEdgeSDL_SDL_getenv */
  /* const char * SDL_getenv(const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_getenv[1], ReturnTypes_SDL_getenv[1];
  ParamTypes_SDL_getenv[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_getenv[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_getenv, 1, ReturnTypes_SDL_getenv, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_getenv"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_getenv, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_getenv */

  /* EXPORT WasmEdgeSDL_SDL_getenv_unsafe */
  /* const char * SDL_getenv_unsafe(const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_getenv_unsafe[1], ReturnTypes_SDL_getenv_unsafe[1];
  ParamTypes_SDL_getenv_unsafe[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_getenv_unsafe[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_getenv_unsafe, 1, ReturnTypes_SDL_getenv_unsafe, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_getenv_unsafe"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_getenv_unsafe, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_getenv_unsafe */

  /* EXPORT WasmEdgeSDL_SDL_setenv_unsafe */
  /* int SDL_setenv_unsafe(const char *name, const char *value, int overwrite) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_setenv_unsafe[3], ReturnTypes_SDL_setenv_unsafe[1];
  ParamTypes_SDL_setenv_unsafe[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_setenv_unsafe[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_setenv_unsafe[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_setenv_unsafe[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_setenv_unsafe, 3, ReturnTypes_SDL_setenv_unsafe, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_setenv_unsafe"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_setenv_unsafe, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_setenv_unsafe */

  /* EXPORT WasmEdgeSDL_SDL_unsetenv_unsafe */
  /* int SDL_unsetenv_unsafe(const char *name) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_unsetenv_unsafe[1], ReturnTypes_SDL_unsetenv_unsafe[1];
  ParamTypes_SDL_unsetenv_unsafe[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_unsetenv_unsafe[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_unsetenv_unsafe, 1, ReturnTypes_SDL_unsetenv_unsafe, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_unsetenv_unsafe"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_unsetenv_unsafe, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_unsetenv_unsafe */

  /* EXPORT WasmEdgeSDL_SDL_qsort */
  /* void SDL_qsort(void *base, size_t nmemb, size_t size, SDL_CompareCallback compare) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_qsort[4], ReturnTypes_SDL_qsort[1];
  ParamTypes_SDL_qsort[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_qsort[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_qsort[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_qsort[3] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_qsort, 4, ReturnTypes_SDL_qsort, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_qsort"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_qsort, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_qsort */

  /* EXPORT WasmEdgeSDL_SDL_bsearch */
  /* void * SDL_bsearch(const void *key, const void *base, size_t nmemb, size_t size, SDL_CompareCallback compare) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_bsearch[5], ReturnTypes_SDL_bsearch[1];
  ParamTypes_SDL_bsearch[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_bsearch[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_bsearch, 5, ReturnTypes_SDL_bsearch, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_bsearch"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_bsearch, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_bsearch */

  /* EXPORT WasmEdgeSDL_SDL_qsort_r */
  /* void SDL_qsort_r(void *base, size_t nmemb, size_t size, SDL_CompareCallback_r compare, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_qsort_r[5], ReturnTypes_SDL_qsort_r[1];
  ParamTypes_SDL_qsort_r[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_qsort_r[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_qsort_r[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_qsort_r[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_qsort_r[4] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_qsort_r, 5, ReturnTypes_SDL_qsort_r, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_qsort_r"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_qsort_r, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_qsort_r */

  /* EXPORT WasmEdgeSDL_SDL_bsearch_r */
  /* void * SDL_bsearch_r(const void *key, const void *base, size_t nmemb, size_t size, SDL_CompareCallback_r compare, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_bsearch_r[6], ReturnTypes_SDL_bsearch_r[1];
  ParamTypes_SDL_bsearch_r[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch_r[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch_r[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch_r[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch_r[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_bsearch_r[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_bsearch_r[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_bsearch_r, 6, ReturnTypes_SDL_bsearch_r, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_bsearch_r"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_bsearch_r, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_bsearch_r */

  /* EXPORT WasmEdgeSDL_SDL_abs */
  /* int SDL_abs(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_abs[1], ReturnTypes_SDL_abs[1];
  ParamTypes_SDL_abs[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_abs[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_abs, 1, ReturnTypes_SDL_abs, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_abs"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_abs, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_abs */

  /* EXPORT WasmEdgeSDL_SDL_isalpha */
  /* int SDL_isalpha(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isalpha[1], ReturnTypes_SDL_isalpha[1];
  ParamTypes_SDL_isalpha[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isalpha[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isalpha, 1, ReturnTypes_SDL_isalpha, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isalpha"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isalpha, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isalpha */

  /* EXPORT WasmEdgeSDL_SDL_isalnum */
  /* int SDL_isalnum(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isalnum[1], ReturnTypes_SDL_isalnum[1];
  ParamTypes_SDL_isalnum[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isalnum[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isalnum, 1, ReturnTypes_SDL_isalnum, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isalnum"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isalnum, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isalnum */

  /* EXPORT WasmEdgeSDL_SDL_isblank */
  /* int SDL_isblank(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isblank[1], ReturnTypes_SDL_isblank[1];
  ParamTypes_SDL_isblank[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isblank[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isblank, 1, ReturnTypes_SDL_isblank, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isblank"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isblank, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isblank */

  /* EXPORT WasmEdgeSDL_SDL_iscntrl */
  /* int SDL_iscntrl(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_iscntrl[1], ReturnTypes_SDL_iscntrl[1];
  ParamTypes_SDL_iscntrl[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_iscntrl[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_iscntrl, 1, ReturnTypes_SDL_iscntrl, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_iscntrl"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_iscntrl, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_iscntrl */

  /* EXPORT WasmEdgeSDL_SDL_isdigit */
  /* int SDL_isdigit(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isdigit[1], ReturnTypes_SDL_isdigit[1];
  ParamTypes_SDL_isdigit[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isdigit[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isdigit, 1, ReturnTypes_SDL_isdigit, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isdigit"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isdigit, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isdigit */

  /* EXPORT WasmEdgeSDL_SDL_isxdigit */
  /* int SDL_isxdigit(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isxdigit[1], ReturnTypes_SDL_isxdigit[1];
  ParamTypes_SDL_isxdigit[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isxdigit[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isxdigit, 1, ReturnTypes_SDL_isxdigit, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isxdigit"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isxdigit, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isxdigit */

  /* EXPORT WasmEdgeSDL_SDL_ispunct */
  /* int SDL_ispunct(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ispunct[1], ReturnTypes_SDL_ispunct[1];
  ParamTypes_SDL_ispunct[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ispunct[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ispunct, 1, ReturnTypes_SDL_ispunct, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ispunct"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ispunct, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ispunct */

  /* EXPORT WasmEdgeSDL_SDL_isspace */
  /* int SDL_isspace(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isspace[1], ReturnTypes_SDL_isspace[1];
  ParamTypes_SDL_isspace[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isspace[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isspace, 1, ReturnTypes_SDL_isspace, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isspace"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isspace, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isspace */

  /* EXPORT WasmEdgeSDL_SDL_isupper */
  /* int SDL_isupper(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isupper[1], ReturnTypes_SDL_isupper[1];
  ParamTypes_SDL_isupper[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isupper[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isupper, 1, ReturnTypes_SDL_isupper, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isupper"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isupper, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isupper */

  /* EXPORT WasmEdgeSDL_SDL_islower */
  /* int SDL_islower(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_islower[1], ReturnTypes_SDL_islower[1];
  ParamTypes_SDL_islower[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_islower[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_islower, 1, ReturnTypes_SDL_islower, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_islower"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_islower, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_islower */

  /* EXPORT WasmEdgeSDL_SDL_isprint */
  /* int SDL_isprint(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isprint[1], ReturnTypes_SDL_isprint[1];
  ParamTypes_SDL_isprint[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isprint[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isprint, 1, ReturnTypes_SDL_isprint, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isprint"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isprint, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isprint */

  /* EXPORT WasmEdgeSDL_SDL_isgraph */
  /* int SDL_isgraph(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isgraph[1], ReturnTypes_SDL_isgraph[1];
  ParamTypes_SDL_isgraph[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isgraph[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isgraph, 1, ReturnTypes_SDL_isgraph, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isgraph"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isgraph, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isgraph */

  /* EXPORT WasmEdgeSDL_SDL_toupper */
  /* int SDL_toupper(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_toupper[1], ReturnTypes_SDL_toupper[1];
  ParamTypes_SDL_toupper[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_toupper[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_toupper, 1, ReturnTypes_SDL_toupper, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_toupper"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_toupper, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_toupper */

  /* EXPORT WasmEdgeSDL_SDL_tolower */
  /* int SDL_tolower(int x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_tolower[1], ReturnTypes_SDL_tolower[1];
  ParamTypes_SDL_tolower[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_tolower[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_tolower, 1, ReturnTypes_SDL_tolower, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_tolower"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_tolower, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_tolower */

  /* EXPORT WasmEdgeSDL_SDL_crc16 */
  /* Uint16 SDL_crc16(Uint16 crc, const void *data, size_t len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_crc16[3], ReturnTypes_SDL_crc16[1];
  ParamTypes_SDL_crc16[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_crc16[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_crc16[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_crc16[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_crc16, 3, ReturnTypes_SDL_crc16, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_crc16"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_crc16, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_crc16 */

  /* EXPORT WasmEdgeSDL_SDL_crc32 */
  /* Uint32 SDL_crc32(Uint32 crc, const void *data, size_t len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_crc32[3], ReturnTypes_SDL_crc32[1];
  ParamTypes_SDL_crc32[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_crc32[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_crc32[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_crc32[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_crc32, 3, ReturnTypes_SDL_crc32, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_crc32"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_crc32, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_crc32 */

  /* EXPORT WasmEdgeSDL_SDL_murmur3_32 */
  /* Uint32 SDL_murmur3_32(const void *data, size_t len, Uint32 seed) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_murmur3_32[3], ReturnTypes_SDL_murmur3_32[1];
  ParamTypes_SDL_murmur3_32[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_murmur3_32[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_murmur3_32[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_murmur3_32[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_murmur3_32, 3, ReturnTypes_SDL_murmur3_32, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_murmur3_32"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_murmur3_32, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_murmur3_32 */

  /* EXPORT WasmEdgeSDL_SDL_memcpy */
  /* void * SDL_memcpy(SDL_OUT_BYTECAP(len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_memcpy[1], ReturnTypes_SDL_memcpy[1];
  ParamTypes_SDL_memcpy[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_memcpy[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_memcpy, 1, ReturnTypes_SDL_memcpy, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_memcpy"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_memcpy, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_memcpy */

  /* EXPORT WasmEdgeSDL_SDL_memmove */
  /* void * SDL_memmove(SDL_OUT_BYTECAP(len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_memmove[1], ReturnTypes_SDL_memmove[1];
  ParamTypes_SDL_memmove[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_memmove[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_memmove, 1, ReturnTypes_SDL_memmove, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_memmove"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_memmove, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_memmove */

  /* EXPORT WasmEdgeSDL_SDL_memset */
  /* void * SDL_memset(SDL_OUT_BYTECAP(len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_memset[1], ReturnTypes_SDL_memset[1];
  ParamTypes_SDL_memset[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_memset[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_memset, 1, ReturnTypes_SDL_memset, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_memset"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_memset, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_memset */

  /* EXPORT WasmEdgeSDL_SDL_memset4 */
  /* void * SDL_memset4(void *dst, Uint32 val, size_t dwords) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_memset4[3], ReturnTypes_SDL_memset4[1];
  ParamTypes_SDL_memset4[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_memset4[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_memset4[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_memset4[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_memset4, 3, ReturnTypes_SDL_memset4, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_memset4"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_memset4, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_memset4 */

  /* EXPORT WasmEdgeSDL_SDL_memcmp */
  /* int SDL_memcmp(const void *s1, const void *s2, size_t len) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_memcmp[3], ReturnTypes_SDL_memcmp[1];
  ParamTypes_SDL_memcmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_memcmp[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_memcmp[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_memcmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_memcmp, 3, ReturnTypes_SDL_memcmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_memcmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_memcmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_memcmp */

  /* EXPORT WasmEdgeSDL_SDL_wcslen */
  /* size_t SDL_wcslen(const wchar_t *wstr) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcslen[1], ReturnTypes_SDL_wcslen[1];
  ParamTypes_SDL_wcslen[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcslen[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcslen, 1, ReturnTypes_SDL_wcslen, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcslen"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcslen, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcslen */

  /* EXPORT WasmEdgeSDL_SDL_wcsnlen */
  /* size_t SDL_wcsnlen(const wchar_t *wstr, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcsnlen[2], ReturnTypes_SDL_wcsnlen[1];
  ParamTypes_SDL_wcsnlen[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcsnlen[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcsnlen[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcsnlen, 2, ReturnTypes_SDL_wcsnlen, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcsnlen"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcsnlen, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcsnlen */

  /* EXPORT WasmEdgeSDL_SDL_wcslcpy */
  /* size_t SDL_wcslcpy(SDL_OUT_Z_CAP(maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcslcpy[1], ReturnTypes_SDL_wcslcpy[1];
  ParamTypes_SDL_wcslcpy[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcslcpy[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcslcpy, 1, ReturnTypes_SDL_wcslcpy, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcslcpy"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcslcpy, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcslcpy */

  /* EXPORT WasmEdgeSDL_SDL_wcslcat */
  /* size_t SDL_wcslcat(SDL_INOUT_Z_CAP(maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcslcat[1], ReturnTypes_SDL_wcslcat[1];
  ParamTypes_SDL_wcslcat[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcslcat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcslcat, 1, ReturnTypes_SDL_wcslcat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcslcat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcslcat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcslcat */

  /* EXPORT WasmEdgeSDL_SDL_wcsdup */
  /* wchar_t * SDL_wcsdup(const wchar_t *wstr) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcsdup[1], ReturnTypes_SDL_wcsdup[1];
  ParamTypes_SDL_wcsdup[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcsdup[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcsdup, 1, ReturnTypes_SDL_wcsdup, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcsdup"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcsdup, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcsdup */

  /* EXPORT WasmEdgeSDL_SDL_wcsstr */
  /* wchar_t * SDL_wcsstr(const wchar_t *haystack, const wchar_t *needle) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcsstr[2], ReturnTypes_SDL_wcsstr[1];
  ParamTypes_SDL_wcsstr[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcsstr[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcsstr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcsstr, 2, ReturnTypes_SDL_wcsstr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcsstr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcsstr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcsstr */

  /* EXPORT WasmEdgeSDL_SDL_wcsnstr */
  /* wchar_t * SDL_wcsnstr(const wchar_t *haystack, const wchar_t *needle, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcsnstr[3], ReturnTypes_SDL_wcsnstr[1];
  ParamTypes_SDL_wcsnstr[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcsnstr[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcsnstr[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcsnstr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcsnstr, 3, ReturnTypes_SDL_wcsnstr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcsnstr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcsnstr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcsnstr */

  /* EXPORT WasmEdgeSDL_SDL_wcscmp */
  /* int SDL_wcscmp(const wchar_t *str1, const wchar_t *str2) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcscmp[2], ReturnTypes_SDL_wcscmp[1];
  ParamTypes_SDL_wcscmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcscmp[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcscmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcscmp, 2, ReturnTypes_SDL_wcscmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcscmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcscmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcscmp */

  /* EXPORT WasmEdgeSDL_SDL_wcsncmp */
  /* int SDL_wcsncmp(const wchar_t *str1, const wchar_t *str2, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcsncmp[3], ReturnTypes_SDL_wcsncmp[1];
  ParamTypes_SDL_wcsncmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcsncmp[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcsncmp[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcsncmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcsncmp, 3, ReturnTypes_SDL_wcsncmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcsncmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcsncmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcsncmp */

  /* EXPORT WasmEdgeSDL_SDL_wcscasecmp */
  /* int SDL_wcscasecmp(const wchar_t *str1, const wchar_t *str2) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcscasecmp[2], ReturnTypes_SDL_wcscasecmp[1];
  ParamTypes_SDL_wcscasecmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcscasecmp[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcscasecmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcscasecmp, 2, ReturnTypes_SDL_wcscasecmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcscasecmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcscasecmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcscasecmp */

  /* EXPORT WasmEdgeSDL_SDL_wcsncasecmp */
  /* int SDL_wcsncasecmp(const wchar_t *str1, const wchar_t *str2, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcsncasecmp[3], ReturnTypes_SDL_wcsncasecmp[1];
  ParamTypes_SDL_wcsncasecmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcsncasecmp[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcsncasecmp[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcsncasecmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcsncasecmp, 3, ReturnTypes_SDL_wcsncasecmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcsncasecmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcsncasecmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcsncasecmp */

  /* EXPORT WasmEdgeSDL_SDL_wcstol */
  /* long SDL_wcstol(const wchar_t *str, wchar_t **endp, int base) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_wcstol[3], ReturnTypes_SDL_wcstol[1];
  ParamTypes_SDL_wcstol[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcstol[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_wcstol[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_wcstol[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_wcstol, 3, ReturnTypes_SDL_wcstol, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_wcstol"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_wcstol, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_wcstol */

  /* EXPORT WasmEdgeSDL_SDL_strlen */
  /* size_t SDL_strlen(const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strlen[1], ReturnTypes_SDL_strlen[1];
  ParamTypes_SDL_strlen[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strlen[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strlen, 1, ReturnTypes_SDL_strlen, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strlen"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strlen, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strlen */

  /* EXPORT WasmEdgeSDL_SDL_strnlen */
  /* size_t SDL_strnlen(const char *str, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strnlen[2], ReturnTypes_SDL_strnlen[1];
  ParamTypes_SDL_strnlen[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strnlen[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strnlen[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strnlen, 2, ReturnTypes_SDL_strnlen, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strnlen"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strnlen, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strnlen */

  /* EXPORT WasmEdgeSDL_SDL_strlcpy */
  /* size_t SDL_strlcpy(SDL_OUT_Z_CAP(maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strlcpy[1], ReturnTypes_SDL_strlcpy[1];
  ParamTypes_SDL_strlcpy[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strlcpy[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strlcpy, 1, ReturnTypes_SDL_strlcpy, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strlcpy"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strlcpy, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strlcpy */

  /* EXPORT WasmEdgeSDL_SDL_utf8strlcpy */
  /* size_t SDL_utf8strlcpy(SDL_OUT_Z_CAP(dst_bytes) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_utf8strlcpy[1], ReturnTypes_SDL_utf8strlcpy[1];
  ParamTypes_SDL_utf8strlcpy[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_utf8strlcpy[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_utf8strlcpy, 1, ReturnTypes_SDL_utf8strlcpy, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_utf8strlcpy"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_utf8strlcpy, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_utf8strlcpy */

  /* EXPORT WasmEdgeSDL_SDL_strlcat */
  /* size_t SDL_strlcat(SDL_INOUT_Z_CAP(maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strlcat[1], ReturnTypes_SDL_strlcat[1];
  ParamTypes_SDL_strlcat[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strlcat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strlcat, 1, ReturnTypes_SDL_strlcat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strlcat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strlcat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strlcat */

  /* EXPORT WasmEdgeSDL_SDL_strdup */
  /* SDL_MALLOC char * SDL_strdup(const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strdup[1], ReturnTypes_SDL_strdup[1];
  ParamTypes_SDL_strdup[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strdup[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strdup, 1, ReturnTypes_SDL_strdup, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strdup"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strdup, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strdup */

  /* EXPORT WasmEdgeSDL_SDL_strndup */
  /* SDL_MALLOC char * SDL_strndup(const char *str, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strndup[2], ReturnTypes_SDL_strndup[1];
  ParamTypes_SDL_strndup[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strndup[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strndup[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strndup, 2, ReturnTypes_SDL_strndup, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strndup"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strndup, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strndup */

  /* EXPORT WasmEdgeSDL_SDL_strrev */
  /* char * SDL_strrev(char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strrev[1], ReturnTypes_SDL_strrev[1];
  ParamTypes_SDL_strrev[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strrev[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strrev, 1, ReturnTypes_SDL_strrev, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strrev"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strrev, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strrev */

  /* EXPORT WasmEdgeSDL_SDL_strupr */
  /* char * SDL_strupr(char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strupr[1], ReturnTypes_SDL_strupr[1];
  ParamTypes_SDL_strupr[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strupr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strupr, 1, ReturnTypes_SDL_strupr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strupr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strupr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strupr */

  /* EXPORT WasmEdgeSDL_SDL_strlwr */
  /* char * SDL_strlwr(char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strlwr[1], ReturnTypes_SDL_strlwr[1];
  ParamTypes_SDL_strlwr[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strlwr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strlwr, 1, ReturnTypes_SDL_strlwr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strlwr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strlwr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strlwr */

  /* EXPORT WasmEdgeSDL_SDL_strchr */
  /* char * SDL_strchr(const char *str, int c) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strchr[2], ReturnTypes_SDL_strchr[1];
  ParamTypes_SDL_strchr[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strchr[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strchr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strchr, 2, ReturnTypes_SDL_strchr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strchr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strchr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strchr */

  /* EXPORT WasmEdgeSDL_SDL_strrchr */
  /* char * SDL_strrchr(const char *str, int c) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strrchr[2], ReturnTypes_SDL_strrchr[1];
  ParamTypes_SDL_strrchr[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strrchr[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strrchr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strrchr, 2, ReturnTypes_SDL_strrchr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strrchr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strrchr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strrchr */

  /* EXPORT WasmEdgeSDL_SDL_strstr */
  /* char * SDL_strstr(const char *haystack, const char *needle) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strstr[2], ReturnTypes_SDL_strstr[1];
  ParamTypes_SDL_strstr[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strstr[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strstr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strstr, 2, ReturnTypes_SDL_strstr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strstr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strstr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strstr */

  /* EXPORT WasmEdgeSDL_SDL_strnstr */
  /* char * SDL_strnstr(const char *haystack, const char *needle, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strnstr[3], ReturnTypes_SDL_strnstr[1];
  ParamTypes_SDL_strnstr[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strnstr[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strnstr[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strnstr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strnstr, 3, ReturnTypes_SDL_strnstr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strnstr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strnstr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strnstr */

  /* EXPORT WasmEdgeSDL_SDL_strcasestr */
  /* char * SDL_strcasestr(const char *haystack, const char *needle) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strcasestr[2], ReturnTypes_SDL_strcasestr[1];
  ParamTypes_SDL_strcasestr[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strcasestr[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strcasestr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strcasestr, 2, ReturnTypes_SDL_strcasestr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strcasestr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strcasestr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strcasestr */

  /* EXPORT WasmEdgeSDL_SDL_strtok_r */
  /* char * SDL_strtok_r(char *str, const char *delim, char **saveptr) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strtok_r[3], ReturnTypes_SDL_strtok_r[1];
  ParamTypes_SDL_strtok_r[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtok_r[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtok_r[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strtok_r[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strtok_r, 3, ReturnTypes_SDL_strtok_r, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strtok_r"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strtok_r, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strtok_r */

  /* EXPORT WasmEdgeSDL_SDL_utf8strlen */
  /* size_t SDL_utf8strlen(const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_utf8strlen[1], ReturnTypes_SDL_utf8strlen[1];
  ParamTypes_SDL_utf8strlen[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_utf8strlen[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_utf8strlen, 1, ReturnTypes_SDL_utf8strlen, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_utf8strlen"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_utf8strlen, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_utf8strlen */

  /* EXPORT WasmEdgeSDL_SDL_utf8strnlen */
  /* size_t SDL_utf8strnlen(const char *str, size_t bytes) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_utf8strnlen[2], ReturnTypes_SDL_utf8strnlen[1];
  ParamTypes_SDL_utf8strnlen[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_utf8strnlen[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_utf8strnlen[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_utf8strnlen, 2, ReturnTypes_SDL_utf8strnlen, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_utf8strnlen"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_utf8strnlen, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_utf8strnlen */

  /* EXPORT WasmEdgeSDL_SDL_itoa */
  /* char * SDL_itoa(int value, char *str, int radix) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_itoa[3], ReturnTypes_SDL_itoa[1];
  ParamTypes_SDL_itoa[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_itoa[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_itoa[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_itoa[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_itoa, 3, ReturnTypes_SDL_itoa, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_itoa"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_itoa, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_itoa */

  /* EXPORT WasmEdgeSDL_SDL_uitoa */
  /* char * SDL_uitoa(unsigned int value, char *str, int radix) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_uitoa[3], ReturnTypes_SDL_uitoa[1];
  ParamTypes_SDL_uitoa[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_uitoa[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_uitoa[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_uitoa[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_uitoa, 3, ReturnTypes_SDL_uitoa, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_uitoa"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_uitoa, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_uitoa */

  /* EXPORT WasmEdgeSDL_SDL_ltoa */
  /* char * SDL_ltoa(long value, char *str, int radix) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ltoa[3], ReturnTypes_SDL_ltoa[1];
  ParamTypes_SDL_ltoa[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ltoa[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ltoa[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ltoa[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ltoa, 3, ReturnTypes_SDL_ltoa, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ltoa"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ltoa, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ltoa */

  /* EXPORT WasmEdgeSDL_SDL_ultoa */
  /* char * SDL_ultoa(unsigned long value, char *str, int radix) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ultoa[3], ReturnTypes_SDL_ultoa[1];
  ParamTypes_SDL_ultoa[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ultoa[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ultoa[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ultoa[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ultoa, 3, ReturnTypes_SDL_ultoa, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ultoa"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ultoa, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ultoa */

  /* EXPORT WasmEdgeSDL_SDL_lltoa */
  /* char * SDL_lltoa(long long value, char *str, int radix) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_lltoa[3], ReturnTypes_SDL_lltoa[1];
  ParamTypes_SDL_lltoa[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_lltoa[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_lltoa[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_lltoa[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_lltoa, 3, ReturnTypes_SDL_lltoa, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_lltoa"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_lltoa, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_lltoa */

  /* EXPORT WasmEdgeSDL_SDL_ulltoa */
  /* char * SDL_ulltoa(unsigned long long value, char *str, int radix) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ulltoa[3], ReturnTypes_SDL_ulltoa[1];
  ParamTypes_SDL_ulltoa[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ulltoa[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ulltoa[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ulltoa[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ulltoa, 3, ReturnTypes_SDL_ulltoa, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ulltoa"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ulltoa, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ulltoa */

  /* EXPORT WasmEdgeSDL_SDL_atoi */
  /* int SDL_atoi(const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_atoi[1], ReturnTypes_SDL_atoi[1];
  ParamTypes_SDL_atoi[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_atoi[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_atoi, 1, ReturnTypes_SDL_atoi, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_atoi"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_atoi, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_atoi */

  /* EXPORT WasmEdgeSDL_SDL_atof */
  /* double SDL_atof(const char *str) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_atof[1], ReturnTypes_SDL_atof[1];
  ParamTypes_SDL_atof[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_atof[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_atof, 1, ReturnTypes_SDL_atof, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_atof"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_atof, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_atof */

  /* EXPORT WasmEdgeSDL_SDL_strtol */
  /* long SDL_strtol(const char *str, char **endp, int base) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strtol[3], ReturnTypes_SDL_strtol[1];
  ParamTypes_SDL_strtol[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtol[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtol[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strtol[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strtol, 3, ReturnTypes_SDL_strtol, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strtol"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strtol, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strtol */

  /* EXPORT WasmEdgeSDL_SDL_strtoul */
  /* unsigned long SDL_strtoul(const char *str, char **endp, int base) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strtoul[3], ReturnTypes_SDL_strtoul[1];
  ParamTypes_SDL_strtoul[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtoul[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtoul[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strtoul[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strtoul, 3, ReturnTypes_SDL_strtoul, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strtoul"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strtoul, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strtoul */

  /* EXPORT WasmEdgeSDL_SDL_strtoll */
  /* long long SDL_strtoll(const char *str, char **endp, int base) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strtoll[3], ReturnTypes_SDL_strtoll[1];
  ParamTypes_SDL_strtoll[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtoll[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtoll[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strtoll[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strtoll, 3, ReturnTypes_SDL_strtoll, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strtoll"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strtoll, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strtoll */

  /* EXPORT WasmEdgeSDL_SDL_strtoull */
  /* unsigned long long SDL_strtoull(const char *str, char **endp, int base) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strtoull[3], ReturnTypes_SDL_strtoull[1];
  ParamTypes_SDL_strtoull[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtoull[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtoull[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strtoull[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strtoull, 3, ReturnTypes_SDL_strtoull, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strtoull"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strtoull, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strtoull */

  /* EXPORT WasmEdgeSDL_SDL_strtod */
  /* double SDL_strtod(const char *str, char **endp) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strtod[2], ReturnTypes_SDL_strtod[1];
  ParamTypes_SDL_strtod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strtod[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strtod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strtod, 2, ReturnTypes_SDL_strtod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strtod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strtod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strtod */

  /* EXPORT WasmEdgeSDL_SDL_strcmp */
  /* int SDL_strcmp(const char *str1, const char *str2) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strcmp[2], ReturnTypes_SDL_strcmp[1];
  ParamTypes_SDL_strcmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strcmp[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strcmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strcmp, 2, ReturnTypes_SDL_strcmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strcmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strcmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strcmp */

  /* EXPORT WasmEdgeSDL_SDL_strncmp */
  /* int SDL_strncmp(const char *str1, const char *str2, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strncmp[3], ReturnTypes_SDL_strncmp[1];
  ParamTypes_SDL_strncmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strncmp[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strncmp[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strncmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strncmp, 3, ReturnTypes_SDL_strncmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strncmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strncmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strncmp */

  /* EXPORT WasmEdgeSDL_SDL_strcasecmp */
  /* int SDL_strcasecmp(const char *str1, const char *str2) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strcasecmp[2], ReturnTypes_SDL_strcasecmp[1];
  ParamTypes_SDL_strcasecmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strcasecmp[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strcasecmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strcasecmp, 2, ReturnTypes_SDL_strcasecmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strcasecmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strcasecmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strcasecmp */

  /* EXPORT WasmEdgeSDL_SDL_strncasecmp */
  /* int SDL_strncasecmp(const char *str1, const char *str2, size_t maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strncasecmp[3], ReturnTypes_SDL_strncasecmp[1];
  ParamTypes_SDL_strncasecmp[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strncasecmp[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strncasecmp[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strncasecmp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strncasecmp, 3, ReturnTypes_SDL_strncasecmp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strncasecmp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strncasecmp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strncasecmp */

  /* EXPORT WasmEdgeSDL_SDL_strpbrk */
  /* char * SDL_strpbrk(const char *str, const char *breakset) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_strpbrk[2], ReturnTypes_SDL_strpbrk[1];
  ParamTypes_SDL_strpbrk[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_strpbrk[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_strpbrk[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_strpbrk, 2, ReturnTypes_SDL_strpbrk, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_strpbrk"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_strpbrk, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_strpbrk */

  /* EXPORT WasmEdgeSDL_SDL_StepUTF8 */
  /* Uint32 SDL_StepUTF8(const char **pstr, size_t *pslen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StepUTF8[2], ReturnTypes_SDL_StepUTF8[1];
  ParamTypes_SDL_StepUTF8[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_StepUTF8[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StepUTF8[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StepUTF8, 2, ReturnTypes_SDL_StepUTF8, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StepUTF8"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StepUTF8, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StepUTF8 */

  /* EXPORT WasmEdgeSDL_SDL_StepBackUTF8 */
  /* Uint32 SDL_StepBackUTF8(const char *start, const char **pstr) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StepBackUTF8[2], ReturnTypes_SDL_StepBackUTF8[1];
  ParamTypes_SDL_StepBackUTF8[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_StepBackUTF8[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StepBackUTF8[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StepBackUTF8, 2, ReturnTypes_SDL_StepBackUTF8, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StepBackUTF8"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StepBackUTF8, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StepBackUTF8 */

  /* EXPORT WasmEdgeSDL_SDL_UCS4ToUTF8 */
  /* char * SDL_UCS4ToUTF8(Uint32 codepoint, char *dst) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UCS4ToUTF8[2], ReturnTypes_SDL_UCS4ToUTF8[1];
  ParamTypes_SDL_UCS4ToUTF8[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UCS4ToUTF8[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_UCS4ToUTF8[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UCS4ToUTF8, 2, ReturnTypes_SDL_UCS4ToUTF8, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UCS4ToUTF8"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UCS4ToUTF8, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UCS4ToUTF8 */

  /* EXPORT WasmEdgeSDL_SDL_sscanf */
  /* int SDL_sscanf(const char *text, SDL_SCANF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_sscanf[3], ReturnTypes_SDL_sscanf[1];
  ParamTypes_SDL_sscanf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_sscanf[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_sscanf[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_sscanf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_sscanf, 3, ReturnTypes_SDL_sscanf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_sscanf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_sscanf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_sscanf */

  /* EXPORT WasmEdgeSDL_SDL_vsscanf */
  /* int SDL_vsscanf(const char *text, SDL_SCANF_FORMAT_STRING const char *fmt, va_list ap) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_vsscanf[3], ReturnTypes_SDL_vsscanf[1];
  ParamTypes_SDL_vsscanf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_vsscanf[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_vsscanf[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_vsscanf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_vsscanf, 3, ReturnTypes_SDL_vsscanf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_vsscanf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_vsscanf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_vsscanf */

  /* EXPORT WasmEdgeSDL_SDL_snprintf */
  /* int SDL_snprintf(SDL_OUT_Z_CAP(maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_snprintf[1], ReturnTypes_SDL_snprintf[1];
  ParamTypes_SDL_snprintf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_snprintf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_snprintf, 1, ReturnTypes_SDL_snprintf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_snprintf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_snprintf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_snprintf */

  /* EXPORT WasmEdgeSDL_SDL_swprintf */
  /* int SDL_swprintf(SDL_OUT_Z_CAP(maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_swprintf[1], ReturnTypes_SDL_swprintf[1];
  ParamTypes_SDL_swprintf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_swprintf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_swprintf, 1, ReturnTypes_SDL_swprintf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_swprintf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_swprintf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_swprintf */

  /* EXPORT WasmEdgeSDL_SDL_vsnprintf */
  /* int SDL_vsnprintf(SDL_OUT_Z_CAP(maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_vsnprintf[1], ReturnTypes_SDL_vsnprintf[1];
  ParamTypes_SDL_vsnprintf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_vsnprintf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_vsnprintf, 1, ReturnTypes_SDL_vsnprintf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_vsnprintf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_vsnprintf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_vsnprintf */

  /* EXPORT WasmEdgeSDL_SDL_vswprintf */
  /* int SDL_vswprintf(SDL_OUT_Z_CAP(maxlen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_vswprintf[1], ReturnTypes_SDL_vswprintf[1];
  ParamTypes_SDL_vswprintf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_vswprintf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_vswprintf, 1, ReturnTypes_SDL_vswprintf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_vswprintf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_vswprintf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_vswprintf */

  /* EXPORT WasmEdgeSDL_SDL_asprintf */
  /* int SDL_asprintf(char **strp, SDL_PRINTF_FORMAT_STRING const char *fmt, ...) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_asprintf[3], ReturnTypes_SDL_asprintf[1];
  ParamTypes_SDL_asprintf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_asprintf[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_asprintf[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_asprintf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_asprintf, 3, ReturnTypes_SDL_asprintf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_asprintf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_asprintf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_asprintf */

  /* EXPORT WasmEdgeSDL_SDL_vasprintf */
  /* int SDL_vasprintf(char **strp, SDL_PRINTF_FORMAT_STRING const char *fmt, va_list ap) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_vasprintf[3], ReturnTypes_SDL_vasprintf[1];
  ParamTypes_SDL_vasprintf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_vasprintf[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_vasprintf[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_vasprintf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_vasprintf, 3, ReturnTypes_SDL_vasprintf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_vasprintf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_vasprintf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_vasprintf */

  /* EXPORT WasmEdgeSDL_SDL_srand */
  /* void SDL_srand(Uint64 seed) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_srand[1], ReturnTypes_SDL_srand[1];
  ParamTypes_SDL_srand[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_srand, 1, ReturnTypes_SDL_srand, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_srand"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_srand, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_srand */

  /* EXPORT WasmEdgeSDL_SDL_rand */
  /* Sint32 SDL_rand(Sint32 n) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_rand[1], ReturnTypes_SDL_rand[1];
  ParamTypes_SDL_rand[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_rand[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_rand, 1, ReturnTypes_SDL_rand, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_rand"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_rand, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_rand */

  /* EXPORT WasmEdgeSDL_SDL_randf */
  /* float SDL_randf(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_randf[1], ReturnTypes_SDL_randf[1];

  ReturnTypes_SDL_randf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_randf, 0, ReturnTypes_SDL_randf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_randf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_randf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_randf */

  /* EXPORT WasmEdgeSDL_SDL_rand_bits */
  /* Uint32 SDL_rand_bits(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_rand_bits[1], ReturnTypes_SDL_rand_bits[1];

  ReturnTypes_SDL_rand_bits[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_rand_bits, 0, ReturnTypes_SDL_rand_bits, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_rand_bits"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_rand_bits, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_rand_bits */

  /* EXPORT WasmEdgeSDL_SDL_rand_r */
  /* Sint32 SDL_rand_r(Uint64 *state, Sint32 n) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_rand_r[2], ReturnTypes_SDL_rand_r[1];
  ParamTypes_SDL_rand_r[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_rand_r[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_rand_r[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_rand_r, 2, ReturnTypes_SDL_rand_r, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_rand_r"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_rand_r, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_rand_r */

  /* EXPORT WasmEdgeSDL_SDL_randf_r */
  /* float SDL_randf_r(Uint64 *state) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_randf_r[1], ReturnTypes_SDL_randf_r[1];
  ParamTypes_SDL_randf_r[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_randf_r[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_randf_r, 1, ReturnTypes_SDL_randf_r, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_randf_r"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_randf_r, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_randf_r */

  /* EXPORT WasmEdgeSDL_SDL_rand_bits_r */
  /* Uint32 SDL_rand_bits_r(Uint64 *state) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_rand_bits_r[1], ReturnTypes_SDL_rand_bits_r[1];
  ParamTypes_SDL_rand_bits_r[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_rand_bits_r[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_rand_bits_r, 1, ReturnTypes_SDL_rand_bits_r, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_rand_bits_r"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_rand_bits_r, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_rand_bits_r */

  /* EXPORT WasmEdgeSDL_SDL_acos */
  /* double SDL_acos(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_acos[1], ReturnTypes_SDL_acos[1];
  ParamTypes_SDL_acos[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_acos[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_acos, 1, ReturnTypes_SDL_acos, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_acos"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_acos, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_acos */

  /* EXPORT WasmEdgeSDL_SDL_acosf */
  /* float SDL_acosf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_acosf[1], ReturnTypes_SDL_acosf[1];
  ParamTypes_SDL_acosf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_acosf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_acosf, 1, ReturnTypes_SDL_acosf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_acosf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_acosf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_acosf */

  /* EXPORT WasmEdgeSDL_SDL_asin */
  /* double SDL_asin(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_asin[1], ReturnTypes_SDL_asin[1];
  ParamTypes_SDL_asin[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_asin[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_asin, 1, ReturnTypes_SDL_asin, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_asin"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_asin, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_asin */

  /* EXPORT WasmEdgeSDL_SDL_asinf */
  /* float SDL_asinf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_asinf[1], ReturnTypes_SDL_asinf[1];
  ParamTypes_SDL_asinf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_asinf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_asinf, 1, ReturnTypes_SDL_asinf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_asinf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_asinf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_asinf */

  /* EXPORT WasmEdgeSDL_SDL_atan */
  /* double SDL_atan(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_atan[1], ReturnTypes_SDL_atan[1];
  ParamTypes_SDL_atan[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_atan[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_atan, 1, ReturnTypes_SDL_atan, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_atan"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_atan, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_atan */

  /* EXPORT WasmEdgeSDL_SDL_atanf */
  /* float SDL_atanf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_atanf[1], ReturnTypes_SDL_atanf[1];
  ParamTypes_SDL_atanf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_atanf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_atanf, 1, ReturnTypes_SDL_atanf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_atanf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_atanf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_atanf */

  /* EXPORT WasmEdgeSDL_SDL_atan2 */
  /* double SDL_atan2(double y, double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_atan2[2], ReturnTypes_SDL_atan2[1];
  ParamTypes_SDL_atan2[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_atan2[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_atan2[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_atan2, 2, ReturnTypes_SDL_atan2, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_atan2"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_atan2, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_atan2 */

  /* EXPORT WasmEdgeSDL_SDL_atan2f */
  /* float SDL_atan2f(float y, float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_atan2f[2], ReturnTypes_SDL_atan2f[1];
  ParamTypes_SDL_atan2f[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_atan2f[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_atan2f[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_atan2f, 2, ReturnTypes_SDL_atan2f, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_atan2f"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_atan2f, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_atan2f */

  /* EXPORT WasmEdgeSDL_SDL_ceil */
  /* double SDL_ceil(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ceil[1], ReturnTypes_SDL_ceil[1];
  ParamTypes_SDL_ceil[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ceil[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ceil, 1, ReturnTypes_SDL_ceil, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ceil"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ceil, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ceil */

  /* EXPORT WasmEdgeSDL_SDL_ceilf */
  /* float SDL_ceilf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ceilf[1], ReturnTypes_SDL_ceilf[1];
  ParamTypes_SDL_ceilf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ceilf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ceilf, 1, ReturnTypes_SDL_ceilf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ceilf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ceilf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ceilf */

  /* EXPORT WasmEdgeSDL_SDL_copysign */
  /* double SDL_copysign(double x, double y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_copysign[2], ReturnTypes_SDL_copysign[1];
  ParamTypes_SDL_copysign[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_copysign[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_copysign[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_copysign, 2, ReturnTypes_SDL_copysign, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_copysign"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_copysign, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_copysign */

  /* EXPORT WasmEdgeSDL_SDL_copysignf */
  /* float SDL_copysignf(float x, float y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_copysignf[2], ReturnTypes_SDL_copysignf[1];
  ParamTypes_SDL_copysignf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_copysignf[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_copysignf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_copysignf, 2, ReturnTypes_SDL_copysignf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_copysignf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_copysignf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_copysignf */

  /* EXPORT WasmEdgeSDL_SDL_cos */
  /* double SDL_cos(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_cos[1], ReturnTypes_SDL_cos[1];
  ParamTypes_SDL_cos[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_cos[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_cos, 1, ReturnTypes_SDL_cos, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_cos"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_cos, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_cos */

  /* EXPORT WasmEdgeSDL_SDL_cosf */
  /* float SDL_cosf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_cosf[1], ReturnTypes_SDL_cosf[1];
  ParamTypes_SDL_cosf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_cosf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_cosf, 1, ReturnTypes_SDL_cosf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_cosf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_cosf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_cosf */

  /* EXPORT WasmEdgeSDL_SDL_exp */
  /* double SDL_exp(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_exp[1], ReturnTypes_SDL_exp[1];
  ParamTypes_SDL_exp[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_exp[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_exp, 1, ReturnTypes_SDL_exp, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_exp"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_exp, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_exp */

  /* EXPORT WasmEdgeSDL_SDL_expf */
  /* float SDL_expf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_expf[1], ReturnTypes_SDL_expf[1];
  ParamTypes_SDL_expf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_expf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_expf, 1, ReturnTypes_SDL_expf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_expf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_expf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_expf */

  /* EXPORT WasmEdgeSDL_SDL_fabs */
  /* double SDL_fabs(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_fabs[1], ReturnTypes_SDL_fabs[1];
  ParamTypes_SDL_fabs[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_fabs[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_fabs, 1, ReturnTypes_SDL_fabs, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_fabs"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_fabs, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_fabs */

  /* EXPORT WasmEdgeSDL_SDL_fabsf */
  /* float SDL_fabsf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_fabsf[1], ReturnTypes_SDL_fabsf[1];
  ParamTypes_SDL_fabsf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_fabsf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_fabsf, 1, ReturnTypes_SDL_fabsf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_fabsf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_fabsf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_fabsf */

  /* EXPORT WasmEdgeSDL_SDL_floor */
  /* double SDL_floor(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_floor[1], ReturnTypes_SDL_floor[1];
  ParamTypes_SDL_floor[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_floor[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_floor, 1, ReturnTypes_SDL_floor, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_floor"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_floor, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_floor */

  /* EXPORT WasmEdgeSDL_SDL_floorf */
  /* float SDL_floorf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_floorf[1], ReturnTypes_SDL_floorf[1];
  ParamTypes_SDL_floorf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_floorf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_floorf, 1, ReturnTypes_SDL_floorf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_floorf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_floorf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_floorf */

  /* EXPORT WasmEdgeSDL_SDL_trunc */
  /* double SDL_trunc(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_trunc[1], ReturnTypes_SDL_trunc[1];
  ParamTypes_SDL_trunc[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_trunc[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_trunc, 1, ReturnTypes_SDL_trunc, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_trunc"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_trunc, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_trunc */

  /* EXPORT WasmEdgeSDL_SDL_truncf */
  /* float SDL_truncf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_truncf[1], ReturnTypes_SDL_truncf[1];
  ParamTypes_SDL_truncf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_truncf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_truncf, 1, ReturnTypes_SDL_truncf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_truncf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_truncf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_truncf */

  /* EXPORT WasmEdgeSDL_SDL_fmod */
  /* double SDL_fmod(double x, double y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_fmod[2], ReturnTypes_SDL_fmod[1];
  ParamTypes_SDL_fmod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_fmod[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_fmod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_fmod, 2, ReturnTypes_SDL_fmod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_fmod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_fmod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_fmod */

  /* EXPORT WasmEdgeSDL_SDL_fmodf */
  /* float SDL_fmodf(float x, float y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_fmodf[2], ReturnTypes_SDL_fmodf[1];
  ParamTypes_SDL_fmodf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_fmodf[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_fmodf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_fmodf, 2, ReturnTypes_SDL_fmodf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_fmodf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_fmodf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_fmodf */

  /* EXPORT WasmEdgeSDL_SDL_isinf */
  /* int SDL_isinf(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isinf[1], ReturnTypes_SDL_isinf[1];
  ParamTypes_SDL_isinf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isinf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isinf, 1, ReturnTypes_SDL_isinf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isinf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isinf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isinf */

  /* EXPORT WasmEdgeSDL_SDL_isinff */
  /* int SDL_isinff(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isinff[1], ReturnTypes_SDL_isinff[1];
  ParamTypes_SDL_isinff[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isinff[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isinff, 1, ReturnTypes_SDL_isinff, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isinff"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isinff, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isinff */

  /* EXPORT WasmEdgeSDL_SDL_isnan */
  /* int SDL_isnan(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isnan[1], ReturnTypes_SDL_isnan[1];
  ParamTypes_SDL_isnan[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isnan[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isnan, 1, ReturnTypes_SDL_isnan, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isnan"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isnan, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isnan */

  /* EXPORT WasmEdgeSDL_SDL_isnanf */
  /* int SDL_isnanf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_isnanf[1], ReturnTypes_SDL_isnanf[1];
  ParamTypes_SDL_isnanf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_isnanf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_isnanf, 1, ReturnTypes_SDL_isnanf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_isnanf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_isnanf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_isnanf */

  /* EXPORT WasmEdgeSDL_SDL_log */
  /* double SDL_log(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_log[1], ReturnTypes_SDL_log[1];
  ParamTypes_SDL_log[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_log[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_log, 1, ReturnTypes_SDL_log, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_log"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_log, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_log */

  /* EXPORT WasmEdgeSDL_SDL_logf */
  /* float SDL_logf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_logf[1], ReturnTypes_SDL_logf[1];
  ParamTypes_SDL_logf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_logf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_logf, 1, ReturnTypes_SDL_logf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_logf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_logf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_logf */

  /* EXPORT WasmEdgeSDL_SDL_log10 */
  /* double SDL_log10(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_log10[1], ReturnTypes_SDL_log10[1];
  ParamTypes_SDL_log10[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_log10[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_log10, 1, ReturnTypes_SDL_log10, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_log10"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_log10, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_log10 */

  /* EXPORT WasmEdgeSDL_SDL_log10f */
  /* float SDL_log10f(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_log10f[1], ReturnTypes_SDL_log10f[1];
  ParamTypes_SDL_log10f[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_log10f[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_log10f, 1, ReturnTypes_SDL_log10f, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_log10f"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_log10f, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_log10f */

  /* EXPORT WasmEdgeSDL_SDL_modf */
  /* double SDL_modf(double x, double *y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_modf[2], ReturnTypes_SDL_modf[1];
  ParamTypes_SDL_modf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_modf[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_modf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_modf, 2, ReturnTypes_SDL_modf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_modf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_modf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_modf */

  /* EXPORT WasmEdgeSDL_SDL_modff */
  /* float SDL_modff(float x, float *y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_modff[2], ReturnTypes_SDL_modff[1];
  ParamTypes_SDL_modff[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_modff[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_modff[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_modff, 2, ReturnTypes_SDL_modff, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_modff"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_modff, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_modff */

  /* EXPORT WasmEdgeSDL_SDL_pow */
  /* double SDL_pow(double x, double y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_pow[2], ReturnTypes_SDL_pow[1];
  ParamTypes_SDL_pow[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_pow[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_pow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_pow, 2, ReturnTypes_SDL_pow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_pow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_pow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_pow */

  /* EXPORT WasmEdgeSDL_SDL_powf */
  /* float SDL_powf(float x, float y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_powf[2], ReturnTypes_SDL_powf[1];
  ParamTypes_SDL_powf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_powf[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_powf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_powf, 2, ReturnTypes_SDL_powf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_powf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_powf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_powf */

  /* EXPORT WasmEdgeSDL_SDL_round */
  /* double SDL_round(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_round[1], ReturnTypes_SDL_round[1];
  ParamTypes_SDL_round[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_round[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_round, 1, ReturnTypes_SDL_round, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_round"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_round, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_round */

  /* EXPORT WasmEdgeSDL_SDL_roundf */
  /* float SDL_roundf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_roundf[1], ReturnTypes_SDL_roundf[1];
  ParamTypes_SDL_roundf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_roundf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_roundf, 1, ReturnTypes_SDL_roundf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_roundf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_roundf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_roundf */

  /* EXPORT WasmEdgeSDL_SDL_lround */
  /* long SDL_lround(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_lround[1], ReturnTypes_SDL_lround[1];
  ParamTypes_SDL_lround[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_lround[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_lround, 1, ReturnTypes_SDL_lround, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_lround"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_lround, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_lround */

  /* EXPORT WasmEdgeSDL_SDL_lroundf */
  /* long SDL_lroundf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_lroundf[1], ReturnTypes_SDL_lroundf[1];
  ParamTypes_SDL_lroundf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_lroundf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_lroundf, 1, ReturnTypes_SDL_lroundf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_lroundf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_lroundf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_lroundf */

  /* EXPORT WasmEdgeSDL_SDL_scalbn */
  /* double SDL_scalbn(double x, int n) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_scalbn[2], ReturnTypes_SDL_scalbn[1];
  ParamTypes_SDL_scalbn[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_scalbn[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_scalbn[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_scalbn, 2, ReturnTypes_SDL_scalbn, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_scalbn"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_scalbn, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_scalbn */

  /* EXPORT WasmEdgeSDL_SDL_scalbnf */
  /* float SDL_scalbnf(float x, int n) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_scalbnf[2], ReturnTypes_SDL_scalbnf[1];
  ParamTypes_SDL_scalbnf[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_scalbnf[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_scalbnf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_scalbnf, 2, ReturnTypes_SDL_scalbnf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_scalbnf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_scalbnf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_scalbnf */

  /* EXPORT WasmEdgeSDL_SDL_sin */
  /* double SDL_sin(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_sin[1], ReturnTypes_SDL_sin[1];
  ParamTypes_SDL_sin[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_sin[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_sin, 1, ReturnTypes_SDL_sin, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_sin"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_sin, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_sin */

  /* EXPORT WasmEdgeSDL_SDL_sinf */
  /* float SDL_sinf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_sinf[1], ReturnTypes_SDL_sinf[1];
  ParamTypes_SDL_sinf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_sinf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_sinf, 1, ReturnTypes_SDL_sinf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_sinf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_sinf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_sinf */

  /* EXPORT WasmEdgeSDL_SDL_sqrt */
  /* double SDL_sqrt(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_sqrt[1], ReturnTypes_SDL_sqrt[1];
  ParamTypes_SDL_sqrt[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_sqrt[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_sqrt, 1, ReturnTypes_SDL_sqrt, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_sqrt"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_sqrt, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_sqrt */

  /* EXPORT WasmEdgeSDL_SDL_sqrtf */
  /* float SDL_sqrtf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_sqrtf[1], ReturnTypes_SDL_sqrtf[1];
  ParamTypes_SDL_sqrtf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_sqrtf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_sqrtf, 1, ReturnTypes_SDL_sqrtf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_sqrtf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_sqrtf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_sqrtf */

  /* EXPORT WasmEdgeSDL_SDL_tan */
  /* double SDL_tan(double x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_tan[1], ReturnTypes_SDL_tan[1];
  ParamTypes_SDL_tan[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_tan[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_tan, 1, ReturnTypes_SDL_tan, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_tan"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_tan, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_tan */

  /* EXPORT WasmEdgeSDL_SDL_tanf */
  /* float SDL_tanf(float x) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_tanf[1], ReturnTypes_SDL_tanf[1];
  ParamTypes_SDL_tanf[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_tanf[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_tanf, 1, ReturnTypes_SDL_tanf, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_tanf"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_tanf, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_tanf */

  /* EXPORT WasmEdgeSDL_SDL_iconv_close */
  /* int SDL_iconv_close(SDL_iconv_t cd) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_iconv_close[1], ReturnTypes_SDL_iconv_close[1];
  ParamTypes_SDL_iconv_close[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_iconv_close[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_iconv_close, 1, ReturnTypes_SDL_iconv_close, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_iconv_close"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_iconv_close, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_iconv_close */

  /* EXPORT WasmEdgeSDL_SDL_OpenTitleStorage */
  /* SDL_Storage * SDL_OpenTitleStorage(const char *override, SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenTitleStorage[2], ReturnTypes_SDL_OpenTitleStorage[1];
  ParamTypes_SDL_OpenTitleStorage[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenTitleStorage[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenTitleStorage[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenTitleStorage, 2, ReturnTypes_SDL_OpenTitleStorage, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenTitleStorage"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenTitleStorage, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenTitleStorage */

  /* EXPORT WasmEdgeSDL_SDL_OpenUserStorage */
  /* SDL_Storage * SDL_OpenUserStorage(const char *org, const char *app, SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenUserStorage[3], ReturnTypes_SDL_OpenUserStorage[1];
  ParamTypes_SDL_OpenUserStorage[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenUserStorage[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenUserStorage[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenUserStorage[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenUserStorage, 3, ReturnTypes_SDL_OpenUserStorage, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenUserStorage"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenUserStorage, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenUserStorage */

  /* EXPORT WasmEdgeSDL_SDL_OpenFileStorage */
  /* SDL_Storage * SDL_OpenFileStorage(const char *path) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenFileStorage[1], ReturnTypes_SDL_OpenFileStorage[1];
  ParamTypes_SDL_OpenFileStorage[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenFileStorage[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenFileStorage, 1, ReturnTypes_SDL_OpenFileStorage, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenFileStorage"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenFileStorage, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenFileStorage */

  /* EXPORT WasmEdgeSDL_SDL_OpenStorage */
  /* SDL_Storage * SDL_OpenStorage(const SDL_StorageInterface *iface, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OpenStorage[2], ReturnTypes_SDL_OpenStorage[1];
  ParamTypes_SDL_OpenStorage[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_OpenStorage[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_OpenStorage[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OpenStorage, 2, ReturnTypes_SDL_OpenStorage, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OpenStorage"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OpenStorage, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OpenStorage */

  /* EXPORT WasmEdgeSDL_SDL_CloseStorage */
  /* bool SDL_CloseStorage(SDL_Storage *storage) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CloseStorage[1], ReturnTypes_SDL_CloseStorage[1];
  ParamTypes_SDL_CloseStorage[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CloseStorage[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CloseStorage, 1, ReturnTypes_SDL_CloseStorage, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CloseStorage"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CloseStorage, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CloseStorage */

  /* EXPORT WasmEdgeSDL_SDL_StorageReady */
  /* bool SDL_StorageReady(SDL_Storage *storage) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StorageReady[1], ReturnTypes_SDL_StorageReady[1];
  ParamTypes_SDL_StorageReady[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StorageReady[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StorageReady, 1, ReturnTypes_SDL_StorageReady, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StorageReady"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StorageReady, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StorageReady */

  /* EXPORT WasmEdgeSDL_SDL_GetStorageFileSize */
  /* bool SDL_GetStorageFileSize(SDL_Storage *storage, const char *path, Uint64 *length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetStorageFileSize[3], ReturnTypes_SDL_GetStorageFileSize[1];
  ParamTypes_SDL_GetStorageFileSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetStorageFileSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetStorageFileSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetStorageFileSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetStorageFileSize, 3, ReturnTypes_SDL_GetStorageFileSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetStorageFileSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetStorageFileSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetStorageFileSize */

  /* EXPORT WasmEdgeSDL_SDL_ReadStorageFile */
  /* bool SDL_ReadStorageFile(SDL_Storage *storage, const char *path, void *destination, Uint64 length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadStorageFile[4], ReturnTypes_SDL_ReadStorageFile[1];
  ParamTypes_SDL_ReadStorageFile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadStorageFile[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadStorageFile[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadStorageFile[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadStorageFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadStorageFile, 4, ReturnTypes_SDL_ReadStorageFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadStorageFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadStorageFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadStorageFile */

  /* EXPORT WasmEdgeSDL_SDL_WriteStorageFile */
  /* bool SDL_WriteStorageFile(SDL_Storage *storage, const char *path, const void *source, Uint64 length) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteStorageFile[4], ReturnTypes_SDL_WriteStorageFile[1];
  ParamTypes_SDL_WriteStorageFile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteStorageFile[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteStorageFile[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteStorageFile[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteStorageFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteStorageFile, 4, ReturnTypes_SDL_WriteStorageFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteStorageFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteStorageFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteStorageFile */

  /* EXPORT WasmEdgeSDL_SDL_CreateStorageDirectory */
  /* bool SDL_CreateStorageDirectory(SDL_Storage *storage, const char *path) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateStorageDirectory[2], ReturnTypes_SDL_CreateStorageDirectory[1];
  ParamTypes_SDL_CreateStorageDirectory[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateStorageDirectory[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateStorageDirectory[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateStorageDirectory, 2, ReturnTypes_SDL_CreateStorageDirectory, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateStorageDirectory"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateStorageDirectory, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateStorageDirectory */

  /* EXPORT WasmEdgeSDL_SDL_EnumerateStorageDirectory */
  /* bool SDL_EnumerateStorageDirectory(SDL_Storage *storage, const char *path, SDL_EnumerateDirectoryCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EnumerateStorageDirectory[4], ReturnTypes_SDL_EnumerateStorageDirectory[1];
  ParamTypes_SDL_EnumerateStorageDirectory[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnumerateStorageDirectory[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnumerateStorageDirectory[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_EnumerateStorageDirectory[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_EnumerateStorageDirectory[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EnumerateStorageDirectory, 4, ReturnTypes_SDL_EnumerateStorageDirectory, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EnumerateStorageDirectory"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EnumerateStorageDirectory, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EnumerateStorageDirectory */

  /* EXPORT WasmEdgeSDL_SDL_RemoveStoragePath */
  /* bool SDL_RemoveStoragePath(SDL_Storage *storage, const char *path) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RemoveStoragePath[2], ReturnTypes_SDL_RemoveStoragePath[1];
  ParamTypes_SDL_RemoveStoragePath[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RemoveStoragePath[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RemoveStoragePath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RemoveStoragePath, 2, ReturnTypes_SDL_RemoveStoragePath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RemoveStoragePath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RemoveStoragePath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RemoveStoragePath */

  /* EXPORT WasmEdgeSDL_SDL_RenameStoragePath */
  /* bool SDL_RenameStoragePath(SDL_Storage *storage, const char *oldpath, const char *newpath) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RenameStoragePath[3], ReturnTypes_SDL_RenameStoragePath[1];
  ParamTypes_SDL_RenameStoragePath[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenameStoragePath[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RenameStoragePath[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RenameStoragePath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RenameStoragePath, 3, ReturnTypes_SDL_RenameStoragePath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RenameStoragePath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RenameStoragePath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RenameStoragePath */

  /* EXPORT WasmEdgeSDL_SDL_CopyStorageFile */
  /* bool SDL_CopyStorageFile(SDL_Storage *storage, const char *oldpath, const char *newpath) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CopyStorageFile[3], ReturnTypes_SDL_CopyStorageFile[1];
  ParamTypes_SDL_CopyStorageFile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CopyStorageFile[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CopyStorageFile[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CopyStorageFile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CopyStorageFile, 3, ReturnTypes_SDL_CopyStorageFile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CopyStorageFile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CopyStorageFile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CopyStorageFile */

  /* EXPORT WasmEdgeSDL_SDL_GetStoragePathInfo */
  /* bool SDL_GetStoragePathInfo(SDL_Storage *storage, const char *path, SDL_PathInfo *info) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetStoragePathInfo[3], ReturnTypes_SDL_GetStoragePathInfo[1];
  ParamTypes_SDL_GetStoragePathInfo[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetStoragePathInfo[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetStoragePathInfo[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetStoragePathInfo[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetStoragePathInfo, 3, ReturnTypes_SDL_GetStoragePathInfo, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetStoragePathInfo"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetStoragePathInfo, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetStoragePathInfo */

  /* EXPORT WasmEdgeSDL_SDL_GetStorageSpaceRemaining */
  /* Uint64 SDL_GetStorageSpaceRemaining(SDL_Storage *storage) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetStorageSpaceRemaining[1], ReturnTypes_SDL_GetStorageSpaceRemaining[1];
  ParamTypes_SDL_GetStorageSpaceRemaining[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetStorageSpaceRemaining[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetStorageSpaceRemaining, 1, ReturnTypes_SDL_GetStorageSpaceRemaining, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetStorageSpaceRemaining"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetStorageSpaceRemaining, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetStorageSpaceRemaining */

  /* EXPORT WasmEdgeSDL_SDL_GlobStorageDirectory */
  /* char ** SDL_GlobStorageDirectory(SDL_Storage *storage, const char *path, const char *pattern, SDL_GlobFlags flags, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GlobStorageDirectory[5], ReturnTypes_SDL_GlobStorageDirectory[1];
  ParamTypes_SDL_GlobStorageDirectory[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GlobStorageDirectory[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GlobStorageDirectory[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GlobStorageDirectory[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GlobStorageDirectory[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GlobStorageDirectory[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GlobStorageDirectory, 5, ReturnTypes_SDL_GlobStorageDirectory, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GlobStorageDirectory"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GlobStorageDirectory, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GlobStorageDirectory */

  /* EXPORT WasmEdgeSDL_SDL_CreateSurface */
  /* SDL_Surface * SDL_CreateSurface(int width, int height, SDL_PixelFormat format) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateSurface[3], ReturnTypes_SDL_CreateSurface[1];
  ParamTypes_SDL_CreateSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateSurface[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateSurface[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateSurface, 3, ReturnTypes_SDL_CreateSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateSurface */

  /* EXPORT WasmEdgeSDL_SDL_CreateSurfaceFrom */
  /* SDL_Surface * SDL_CreateSurfaceFrom(int width, int height, SDL_PixelFormat format, void *pixels, int pitch) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateSurfaceFrom[5], ReturnTypes_SDL_CreateSurfaceFrom[1];
  ParamTypes_SDL_CreateSurfaceFrom[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateSurfaceFrom[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateSurfaceFrom[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateSurfaceFrom[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateSurfaceFrom[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateSurfaceFrom[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateSurfaceFrom, 5, ReturnTypes_SDL_CreateSurfaceFrom, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateSurfaceFrom"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateSurfaceFrom, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateSurfaceFrom */

  /* EXPORT WasmEdgeSDL_SDL_DestroySurface */
  /* void SDL_DestroySurface(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroySurface[1], ReturnTypes_SDL_DestroySurface[1];
  ParamTypes_SDL_DestroySurface[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroySurface, 1, ReturnTypes_SDL_DestroySurface, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroySurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroySurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroySurface */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfaceProperties */
  /* SDL_PropertiesID SDL_GetSurfaceProperties(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfaceProperties[1], ReturnTypes_SDL_GetSurfaceProperties[1];
  ParamTypes_SDL_GetSurfaceProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfaceProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfaceProperties, 1, ReturnTypes_SDL_GetSurfaceProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfaceProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfaceProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfaceProperties */

  /* EXPORT WasmEdgeSDL_SDL_SetSurfaceColorspace */
  /* bool SDL_SetSurfaceColorspace(SDL_Surface *surface, SDL_Colorspace colorspace) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetSurfaceColorspace[2], ReturnTypes_SDL_SetSurfaceColorspace[1];
  ParamTypes_SDL_SetSurfaceColorspace[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceColorspace[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetSurfaceColorspace[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetSurfaceColorspace, 2, ReturnTypes_SDL_SetSurfaceColorspace, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetSurfaceColorspace"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetSurfaceColorspace, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetSurfaceColorspace */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfaceColorspace */
  /* SDL_Colorspace SDL_GetSurfaceColorspace(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfaceColorspace[1], ReturnTypes_SDL_GetSurfaceColorspace[1];
  ParamTypes_SDL_GetSurfaceColorspace[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfaceColorspace[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfaceColorspace, 1, ReturnTypes_SDL_GetSurfaceColorspace, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfaceColorspace"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfaceColorspace, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfaceColorspace */

  /* EXPORT WasmEdgeSDL_SDL_CreateSurfacePalette */
  /* SDL_Palette * SDL_CreateSurfacePalette(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateSurfacePalette[1], ReturnTypes_SDL_CreateSurfacePalette[1];
  ParamTypes_SDL_CreateSurfacePalette[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateSurfacePalette[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateSurfacePalette, 1, ReturnTypes_SDL_CreateSurfacePalette, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateSurfacePalette"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateSurfacePalette, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateSurfacePalette */

  /* EXPORT WasmEdgeSDL_SDL_SetSurfacePalette */
  /* bool SDL_SetSurfacePalette(SDL_Surface *surface, SDL_Palette *palette) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetSurfacePalette[2], ReturnTypes_SDL_SetSurfacePalette[1];
  ParamTypes_SDL_SetSurfacePalette[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfacePalette[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetSurfacePalette[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetSurfacePalette, 2, ReturnTypes_SDL_SetSurfacePalette, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetSurfacePalette"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetSurfacePalette, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetSurfacePalette */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfacePalette */
  /* SDL_Palette * SDL_GetSurfacePalette(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfacePalette[1], ReturnTypes_SDL_GetSurfacePalette[1];
  ParamTypes_SDL_GetSurfacePalette[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfacePalette[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfacePalette, 1, ReturnTypes_SDL_GetSurfacePalette, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfacePalette"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfacePalette, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfacePalette */

  /* EXPORT WasmEdgeSDL_SDL_AddSurfaceAlternateImage */
  /* bool SDL_AddSurfaceAlternateImage(SDL_Surface *surface, SDL_Surface *image) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddSurfaceAlternateImage[2], ReturnTypes_SDL_AddSurfaceAlternateImage[1];
  ParamTypes_SDL_AddSurfaceAlternateImage[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddSurfaceAlternateImage[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddSurfaceAlternateImage[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddSurfaceAlternateImage, 2, ReturnTypes_SDL_AddSurfaceAlternateImage, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddSurfaceAlternateImage"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddSurfaceAlternateImage, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddSurfaceAlternateImage */

  /* EXPORT WasmEdgeSDL_SDL_SurfaceHasAlternateImages */
  /* bool SDL_SurfaceHasAlternateImages(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SurfaceHasAlternateImages[1], ReturnTypes_SDL_SurfaceHasAlternateImages[1];
  ParamTypes_SDL_SurfaceHasAlternateImages[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SurfaceHasAlternateImages[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SurfaceHasAlternateImages, 1, ReturnTypes_SDL_SurfaceHasAlternateImages, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SurfaceHasAlternateImages"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SurfaceHasAlternateImages, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SurfaceHasAlternateImages */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfaceImages */
  /* SDL_Surface ** SDL_GetSurfaceImages(SDL_Surface *surface, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfaceImages[2], ReturnTypes_SDL_GetSurfaceImages[1];
  ParamTypes_SDL_GetSurfaceImages[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSurfaceImages[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfaceImages[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfaceImages, 2, ReturnTypes_SDL_GetSurfaceImages, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfaceImages"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfaceImages, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfaceImages */

  /* EXPORT WasmEdgeSDL_SDL_RemoveSurfaceAlternateImages */
  /* void SDL_RemoveSurfaceAlternateImages(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RemoveSurfaceAlternateImages[1], ReturnTypes_SDL_RemoveSurfaceAlternateImages[1];
  ParamTypes_SDL_RemoveSurfaceAlternateImages[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RemoveSurfaceAlternateImages, 1, ReturnTypes_SDL_RemoveSurfaceAlternateImages, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RemoveSurfaceAlternateImages"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RemoveSurfaceAlternateImages, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RemoveSurfaceAlternateImages */

  /* EXPORT WasmEdgeSDL_SDL_LockSurface */
  /* bool SDL_LockSurface(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LockSurface[1], ReturnTypes_SDL_LockSurface[1];
  ParamTypes_SDL_LockSurface[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LockSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LockSurface, 1, ReturnTypes_SDL_LockSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LockSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LockSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LockSurface */

  /* EXPORT WasmEdgeSDL_SDL_UnlockSurface */
  /* void SDL_UnlockSurface(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UnlockSurface[1], ReturnTypes_SDL_UnlockSurface[1];
  ParamTypes_SDL_UnlockSurface[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UnlockSurface, 1, ReturnTypes_SDL_UnlockSurface, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UnlockSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UnlockSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UnlockSurface */

  /* EXPORT WasmEdgeSDL_SDL_LoadBMP_IO */
  /* SDL_Surface * SDL_LoadBMP_IO(SDL_IOStream *src, bool closeio) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadBMP_IO[2], ReturnTypes_SDL_LoadBMP_IO[1];
  ParamTypes_SDL_LoadBMP_IO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_LoadBMP_IO[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadBMP_IO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadBMP_IO, 2, ReturnTypes_SDL_LoadBMP_IO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadBMP_IO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadBMP_IO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadBMP_IO */

  /* EXPORT WasmEdgeSDL_SDL_LoadBMP */
  /* SDL_Surface * SDL_LoadBMP(const char *file) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_LoadBMP[1], ReturnTypes_SDL_LoadBMP[1];
  ParamTypes_SDL_LoadBMP[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_LoadBMP[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_LoadBMP, 1, ReturnTypes_SDL_LoadBMP, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_LoadBMP"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_LoadBMP, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_LoadBMP */

  /* EXPORT WasmEdgeSDL_SDL_SaveBMP_IO */
  /* bool SDL_SaveBMP_IO(SDL_Surface *surface, SDL_IOStream *dst, bool closeio) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SaveBMP_IO[3], ReturnTypes_SDL_SaveBMP_IO[1];
  ParamTypes_SDL_SaveBMP_IO[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SaveBMP_IO[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SaveBMP_IO[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SaveBMP_IO[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SaveBMP_IO, 3, ReturnTypes_SDL_SaveBMP_IO, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SaveBMP_IO"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SaveBMP_IO, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SaveBMP_IO */

  /* EXPORT WasmEdgeSDL_SDL_SaveBMP */
  /* bool SDL_SaveBMP(SDL_Surface *surface, const char *file) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SaveBMP[2], ReturnTypes_SDL_SaveBMP[1];
  ParamTypes_SDL_SaveBMP[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SaveBMP[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SaveBMP[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SaveBMP, 2, ReturnTypes_SDL_SaveBMP, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SaveBMP"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SaveBMP, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SaveBMP */

  /* EXPORT WasmEdgeSDL_SDL_SetSurfaceRLE */
  /* bool SDL_SetSurfaceRLE(SDL_Surface *surface, bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetSurfaceRLE[2], ReturnTypes_SDL_SetSurfaceRLE[1];
  ParamTypes_SDL_SetSurfaceRLE[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceRLE[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetSurfaceRLE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetSurfaceRLE, 2, ReturnTypes_SDL_SetSurfaceRLE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetSurfaceRLE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetSurfaceRLE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetSurfaceRLE */

  /* EXPORT WasmEdgeSDL_SDL_SurfaceHasRLE */
  /* bool SDL_SurfaceHasRLE(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SurfaceHasRLE[1], ReturnTypes_SDL_SurfaceHasRLE[1];
  ParamTypes_SDL_SurfaceHasRLE[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SurfaceHasRLE[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SurfaceHasRLE, 1, ReturnTypes_SDL_SurfaceHasRLE, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SurfaceHasRLE"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SurfaceHasRLE, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SurfaceHasRLE */

  /* EXPORT WasmEdgeSDL_SDL_SetSurfaceColorKey */
  /* bool SDL_SetSurfaceColorKey(SDL_Surface *surface, bool enabled, Uint32 key) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetSurfaceColorKey[3], ReturnTypes_SDL_SetSurfaceColorKey[1];
  ParamTypes_SDL_SetSurfaceColorKey[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceColorKey[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceColorKey[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetSurfaceColorKey[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetSurfaceColorKey, 3, ReturnTypes_SDL_SetSurfaceColorKey, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetSurfaceColorKey"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetSurfaceColorKey, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetSurfaceColorKey */

  /* EXPORT WasmEdgeSDL_SDL_SurfaceHasColorKey */
  /* bool SDL_SurfaceHasColorKey(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SurfaceHasColorKey[1], ReturnTypes_SDL_SurfaceHasColorKey[1];
  ParamTypes_SDL_SurfaceHasColorKey[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SurfaceHasColorKey[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SurfaceHasColorKey, 1, ReturnTypes_SDL_SurfaceHasColorKey, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SurfaceHasColorKey"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SurfaceHasColorKey, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SurfaceHasColorKey */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfaceColorKey */
  /* bool SDL_GetSurfaceColorKey(SDL_Surface *surface, Uint32 *key) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfaceColorKey[2], ReturnTypes_SDL_GetSurfaceColorKey[1];
  ParamTypes_SDL_GetSurfaceColorKey[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSurfaceColorKey[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfaceColorKey[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfaceColorKey, 2, ReturnTypes_SDL_GetSurfaceColorKey, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfaceColorKey"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfaceColorKey, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfaceColorKey */

  /* EXPORT WasmEdgeSDL_SDL_SetSurfaceColorMod */
  /* bool SDL_SetSurfaceColorMod(SDL_Surface *surface, Uint8 r, Uint8 g, Uint8 b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetSurfaceColorMod[4], ReturnTypes_SDL_SetSurfaceColorMod[1];
  ParamTypes_SDL_SetSurfaceColorMod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceColorMod[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceColorMod[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceColorMod[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetSurfaceColorMod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetSurfaceColorMod, 4, ReturnTypes_SDL_SetSurfaceColorMod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetSurfaceColorMod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetSurfaceColorMod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetSurfaceColorMod */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfaceColorMod */
  /* bool SDL_GetSurfaceColorMod(SDL_Surface *surface, Uint8 *r, Uint8 *g, Uint8 *b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfaceColorMod[4], ReturnTypes_SDL_GetSurfaceColorMod[1];
  ParamTypes_SDL_GetSurfaceColorMod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSurfaceColorMod[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSurfaceColorMod[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSurfaceColorMod[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfaceColorMod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfaceColorMod, 4, ReturnTypes_SDL_GetSurfaceColorMod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfaceColorMod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfaceColorMod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfaceColorMod */

  /* EXPORT WasmEdgeSDL_SDL_SetSurfaceAlphaMod */
  /* bool SDL_SetSurfaceAlphaMod(SDL_Surface *surface, Uint8 alpha) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetSurfaceAlphaMod[2], ReturnTypes_SDL_SetSurfaceAlphaMod[1];
  ParamTypes_SDL_SetSurfaceAlphaMod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceAlphaMod[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetSurfaceAlphaMod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetSurfaceAlphaMod, 2, ReturnTypes_SDL_SetSurfaceAlphaMod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetSurfaceAlphaMod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetSurfaceAlphaMod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetSurfaceAlphaMod */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfaceAlphaMod */
  /* bool SDL_GetSurfaceAlphaMod(SDL_Surface *surface, Uint8 *alpha) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfaceAlphaMod[2], ReturnTypes_SDL_GetSurfaceAlphaMod[1];
  ParamTypes_SDL_GetSurfaceAlphaMod[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSurfaceAlphaMod[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfaceAlphaMod[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfaceAlphaMod, 2, ReturnTypes_SDL_GetSurfaceAlphaMod, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfaceAlphaMod"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfaceAlphaMod, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfaceAlphaMod */

  /* EXPORT WasmEdgeSDL_SDL_SetSurfaceBlendMode */
  /* bool SDL_SetSurfaceBlendMode(SDL_Surface *surface, SDL_BlendMode blendMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetSurfaceBlendMode[2], ReturnTypes_SDL_SetSurfaceBlendMode[1];
  ParamTypes_SDL_SetSurfaceBlendMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceBlendMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetSurfaceBlendMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetSurfaceBlendMode, 2, ReturnTypes_SDL_SetSurfaceBlendMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetSurfaceBlendMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetSurfaceBlendMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetSurfaceBlendMode */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfaceBlendMode */
  /* bool SDL_GetSurfaceBlendMode(SDL_Surface *surface, SDL_BlendMode *blendMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfaceBlendMode[2], ReturnTypes_SDL_GetSurfaceBlendMode[1];
  ParamTypes_SDL_GetSurfaceBlendMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSurfaceBlendMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfaceBlendMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfaceBlendMode, 2, ReturnTypes_SDL_GetSurfaceBlendMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfaceBlendMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfaceBlendMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfaceBlendMode */

  /* EXPORT WasmEdgeSDL_SDL_SetSurfaceClipRect */
  /* bool SDL_SetSurfaceClipRect(SDL_Surface *surface, const SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetSurfaceClipRect[2], ReturnTypes_SDL_SetSurfaceClipRect[1];
  ParamTypes_SDL_SetSurfaceClipRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetSurfaceClipRect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetSurfaceClipRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetSurfaceClipRect, 2, ReturnTypes_SDL_SetSurfaceClipRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetSurfaceClipRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetSurfaceClipRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetSurfaceClipRect */

  /* EXPORT WasmEdgeSDL_SDL_GetSurfaceClipRect */
  /* bool SDL_GetSurfaceClipRect(SDL_Surface *surface, SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSurfaceClipRect[2], ReturnTypes_SDL_GetSurfaceClipRect[1];
  ParamTypes_SDL_GetSurfaceClipRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetSurfaceClipRect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetSurfaceClipRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSurfaceClipRect, 2, ReturnTypes_SDL_GetSurfaceClipRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSurfaceClipRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSurfaceClipRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSurfaceClipRect */

  /* EXPORT WasmEdgeSDL_SDL_FlipSurface */
  /* bool SDL_FlipSurface(SDL_Surface *surface, SDL_FlipMode flip) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FlipSurface[2], ReturnTypes_SDL_FlipSurface[1];
  ParamTypes_SDL_FlipSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FlipSurface[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_FlipSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FlipSurface, 2, ReturnTypes_SDL_FlipSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FlipSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FlipSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FlipSurface */

  /* EXPORT WasmEdgeSDL_SDL_DuplicateSurface */
  /* SDL_Surface * SDL_DuplicateSurface(SDL_Surface *surface) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DuplicateSurface[1], ReturnTypes_SDL_DuplicateSurface[1];
  ParamTypes_SDL_DuplicateSurface[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_DuplicateSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DuplicateSurface, 1, ReturnTypes_SDL_DuplicateSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DuplicateSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DuplicateSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DuplicateSurface */

  /* EXPORT WasmEdgeSDL_SDL_ScaleSurface */
  /* SDL_Surface * SDL_ScaleSurface(SDL_Surface *surface, int width, int height, SDL_ScaleMode scaleMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ScaleSurface[4], ReturnTypes_SDL_ScaleSurface[1];
  ParamTypes_SDL_ScaleSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ScaleSurface[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ScaleSurface[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ScaleSurface[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ScaleSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ScaleSurface, 4, ReturnTypes_SDL_ScaleSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ScaleSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ScaleSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ScaleSurface */

  /* EXPORT WasmEdgeSDL_SDL_ConvertSurface */
  /* SDL_Surface * SDL_ConvertSurface(SDL_Surface *surface, SDL_PixelFormat format) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ConvertSurface[2], ReturnTypes_SDL_ConvertSurface[1];
  ParamTypes_SDL_ConvertSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertSurface[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ConvertSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ConvertSurface, 2, ReturnTypes_SDL_ConvertSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ConvertSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ConvertSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ConvertSurface */

  /* EXPORT WasmEdgeSDL_SDL_ConvertSurfaceAndColorspace */
  /* SDL_Surface * SDL_ConvertSurfaceAndColorspace(SDL_Surface *surface, SDL_PixelFormat format, SDL_Palette *palette, SDL_Colorspace colorspace, SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ConvertSurfaceAndColorspace[5], ReturnTypes_SDL_ConvertSurfaceAndColorspace[1];
  ParamTypes_SDL_ConvertSurfaceAndColorspace[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertSurfaceAndColorspace[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertSurfaceAndColorspace[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertSurfaceAndColorspace[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertSurfaceAndColorspace[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ConvertSurfaceAndColorspace[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ConvertSurfaceAndColorspace, 5, ReturnTypes_SDL_ConvertSurfaceAndColorspace, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ConvertSurfaceAndColorspace"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ConvertSurfaceAndColorspace, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ConvertSurfaceAndColorspace */

  /* EXPORT WasmEdgeSDL_SDL_ConvertPixels */
  /* bool SDL_ConvertPixels(int width, int height, SDL_PixelFormat src_format, const void *src, int src_pitch, SDL_PixelFormat dst_format, void *dst, int dst_pitch) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ConvertPixels[8], ReturnTypes_SDL_ConvertPixels[1];
  ParamTypes_SDL_ConvertPixels[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixels[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixels[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixels[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixels[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixels[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixels[6] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixels[7] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ConvertPixels[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ConvertPixels, 8, ReturnTypes_SDL_ConvertPixels, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ConvertPixels"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ConvertPixels, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ConvertPixels */

  /* EXPORT WasmEdgeSDL_SDL_ConvertPixelsAndColorspace */
  /* bool SDL_ConvertPixelsAndColorspace(int width, int height, SDL_PixelFormat src_format, SDL_Colorspace src_colorspace, SDL_PropertiesID src_properties, const void *src, int src_pitch, SDL_PixelFormat dst_format, SDL_Colorspace dst_colorspace, SDL_PropertiesID dst_properties, void *dst, int dst_pitch) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ConvertPixelsAndColorspace[12], ReturnTypes_SDL_ConvertPixelsAndColorspace[1];
  ParamTypes_SDL_ConvertPixelsAndColorspace[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[6] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[7] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[8] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[9] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[10] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ConvertPixelsAndColorspace[11] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ConvertPixelsAndColorspace[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ConvertPixelsAndColorspace, 12, ReturnTypes_SDL_ConvertPixelsAndColorspace, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ConvertPixelsAndColorspace"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ConvertPixelsAndColorspace, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ConvertPixelsAndColorspace */

  /* EXPORT WasmEdgeSDL_SDL_PremultiplyAlpha */
  /* bool SDL_PremultiplyAlpha(int width, int height, SDL_PixelFormat src_format, const void *src, int src_pitch, SDL_PixelFormat dst_format, void *dst, int dst_pitch, bool linear) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PremultiplyAlpha[9], ReturnTypes_SDL_PremultiplyAlpha[1];
  ParamTypes_SDL_PremultiplyAlpha[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplyAlpha[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplyAlpha[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplyAlpha[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplyAlpha[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplyAlpha[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplyAlpha[6] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplyAlpha[7] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplyAlpha[8] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PremultiplyAlpha[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PremultiplyAlpha, 9, ReturnTypes_SDL_PremultiplyAlpha, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PremultiplyAlpha"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PremultiplyAlpha, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PremultiplyAlpha */

  /* EXPORT WasmEdgeSDL_SDL_PremultiplySurfaceAlpha */
  /* bool SDL_PremultiplySurfaceAlpha(SDL_Surface *surface, bool linear) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_PremultiplySurfaceAlpha[2], ReturnTypes_SDL_PremultiplySurfaceAlpha[1];
  ParamTypes_SDL_PremultiplySurfaceAlpha[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_PremultiplySurfaceAlpha[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_PremultiplySurfaceAlpha[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_PremultiplySurfaceAlpha, 2, ReturnTypes_SDL_PremultiplySurfaceAlpha, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_PremultiplySurfaceAlpha"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_PremultiplySurfaceAlpha, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_PremultiplySurfaceAlpha */

  /* EXPORT WasmEdgeSDL_SDL_ClearSurface */
  /* bool SDL_ClearSurface(SDL_Surface *surface, float r, float g, float b, float a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ClearSurface[5], ReturnTypes_SDL_ClearSurface[1];
  ParamTypes_SDL_ClearSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ClearSurface[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ClearSurface[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ClearSurface[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ClearSurface[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ClearSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ClearSurface, 5, ReturnTypes_SDL_ClearSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ClearSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ClearSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ClearSurface */

  /* EXPORT WasmEdgeSDL_SDL_FillSurfaceRect */
  /* bool SDL_FillSurfaceRect(SDL_Surface *dst, const SDL_Rect *rect, Uint32 color) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FillSurfaceRect[3], ReturnTypes_SDL_FillSurfaceRect[1];
  ParamTypes_SDL_FillSurfaceRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FillSurfaceRect[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FillSurfaceRect[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_FillSurfaceRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FillSurfaceRect, 3, ReturnTypes_SDL_FillSurfaceRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FillSurfaceRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FillSurfaceRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FillSurfaceRect */

  /* EXPORT WasmEdgeSDL_SDL_FillSurfaceRects */
  /* bool SDL_FillSurfaceRects(SDL_Surface *dst, const SDL_Rect *rects, int count, Uint32 color) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FillSurfaceRects[4], ReturnTypes_SDL_FillSurfaceRects[1];
  ParamTypes_SDL_FillSurfaceRects[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FillSurfaceRects[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FillSurfaceRects[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FillSurfaceRects[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_FillSurfaceRects[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FillSurfaceRects, 4, ReturnTypes_SDL_FillSurfaceRects, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FillSurfaceRects"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FillSurfaceRects, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FillSurfaceRects */

  /* EXPORT WasmEdgeSDL_SDL_BlitSurface */
  /* bool SDL_BlitSurface(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BlitSurface[4], ReturnTypes_SDL_BlitSurface[1];
  ParamTypes_SDL_BlitSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BlitSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BlitSurface, 4, ReturnTypes_SDL_BlitSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BlitSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BlitSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BlitSurface */

  /* EXPORT WasmEdgeSDL_SDL_BlitSurfaceUnchecked */
  /* bool SDL_BlitSurfaceUnchecked(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BlitSurfaceUnchecked[4], ReturnTypes_SDL_BlitSurfaceUnchecked[1];
  ParamTypes_SDL_BlitSurfaceUnchecked[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceUnchecked[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceUnchecked[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceUnchecked[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BlitSurfaceUnchecked[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BlitSurfaceUnchecked, 4, ReturnTypes_SDL_BlitSurfaceUnchecked, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BlitSurfaceUnchecked"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BlitSurfaceUnchecked, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BlitSurfaceUnchecked */

  /* EXPORT WasmEdgeSDL_SDL_BlitSurfaceScaled */
  /* bool SDL_BlitSurfaceScaled(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect, SDL_ScaleMode scaleMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BlitSurfaceScaled[5], ReturnTypes_SDL_BlitSurfaceScaled[1];
  ParamTypes_SDL_BlitSurfaceScaled[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceScaled[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceScaled[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceScaled[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceScaled[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BlitSurfaceScaled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BlitSurfaceScaled, 5, ReturnTypes_SDL_BlitSurfaceScaled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BlitSurfaceScaled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BlitSurfaceScaled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BlitSurfaceScaled */

  /* EXPORT WasmEdgeSDL_SDL_BlitSurfaceUncheckedScaled */
  /* bool SDL_BlitSurfaceUncheckedScaled(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect, SDL_ScaleMode scaleMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BlitSurfaceUncheckedScaled[5], ReturnTypes_SDL_BlitSurfaceUncheckedScaled[1];
  ParamTypes_SDL_BlitSurfaceUncheckedScaled[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceUncheckedScaled[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceUncheckedScaled[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceUncheckedScaled[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceUncheckedScaled[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BlitSurfaceUncheckedScaled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BlitSurfaceUncheckedScaled, 5, ReturnTypes_SDL_BlitSurfaceUncheckedScaled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BlitSurfaceUncheckedScaled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BlitSurfaceUncheckedScaled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BlitSurfaceUncheckedScaled */

  /* EXPORT WasmEdgeSDL_SDL_StretchSurface */
  /* bool SDL_StretchSurface(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect, SDL_ScaleMode scaleMode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_StretchSurface[5], ReturnTypes_SDL_StretchSurface[1];
  ParamTypes_SDL_StretchSurface[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_StretchSurface[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_StretchSurface[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_StretchSurface[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_StretchSurface[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_StretchSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_StretchSurface, 5, ReturnTypes_SDL_StretchSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_StretchSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_StretchSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_StretchSurface */

  /* EXPORT WasmEdgeSDL_SDL_BlitSurfaceTiled */
  /* bool SDL_BlitSurfaceTiled(SDL_Surface *src, const SDL_Rect *srcrect, SDL_Surface *dst, const SDL_Rect *dstrect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BlitSurfaceTiled[4], ReturnTypes_SDL_BlitSurfaceTiled[1];
  ParamTypes_SDL_BlitSurfaceTiled[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceTiled[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceTiled[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceTiled[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BlitSurfaceTiled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BlitSurfaceTiled, 4, ReturnTypes_SDL_BlitSurfaceTiled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BlitSurfaceTiled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BlitSurfaceTiled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BlitSurfaceTiled */

  /* EXPORT WasmEdgeSDL_SDL_BlitSurfaceTiledWithScale */
  /* bool SDL_BlitSurfaceTiledWithScale(SDL_Surface *src, const SDL_Rect *srcrect, float scale, SDL_ScaleMode scaleMode, SDL_Surface *dst, const SDL_Rect *dstrect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BlitSurfaceTiledWithScale[6], ReturnTypes_SDL_BlitSurfaceTiledWithScale[1];
  ParamTypes_SDL_BlitSurfaceTiledWithScale[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceTiledWithScale[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceTiledWithScale[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceTiledWithScale[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceTiledWithScale[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurfaceTiledWithScale[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BlitSurfaceTiledWithScale[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BlitSurfaceTiledWithScale, 6, ReturnTypes_SDL_BlitSurfaceTiledWithScale, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BlitSurfaceTiledWithScale"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BlitSurfaceTiledWithScale, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BlitSurfaceTiledWithScale */

  /* EXPORT WasmEdgeSDL_SDL_BlitSurface9Grid */
  /* bool SDL_BlitSurface9Grid(SDL_Surface *src, const SDL_Rect *srcrect, int left_width, int right_width, int top_height, int bottom_height, float scale, SDL_ScaleMode scaleMode, SDL_Surface *dst, const SDL_Rect *dstrect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_BlitSurface9Grid[10], ReturnTypes_SDL_BlitSurface9Grid[1];
  ParamTypes_SDL_BlitSurface9Grid[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[6] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[7] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[8] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_BlitSurface9Grid[9] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_BlitSurface9Grid[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_BlitSurface9Grid, 10, ReturnTypes_SDL_BlitSurface9Grid, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_BlitSurface9Grid"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_BlitSurface9Grid, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_BlitSurface9Grid */

  /* EXPORT WasmEdgeSDL_SDL_MapSurfaceRGB */
  /* Uint32 SDL_MapSurfaceRGB(SDL_Surface *surface, Uint8 r, Uint8 g, Uint8 b) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MapSurfaceRGB[4], ReturnTypes_SDL_MapSurfaceRGB[1];
  ParamTypes_SDL_MapSurfaceRGB[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapSurfaceRGB[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapSurfaceRGB[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapSurfaceRGB[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_MapSurfaceRGB[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MapSurfaceRGB, 4, ReturnTypes_SDL_MapSurfaceRGB, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MapSurfaceRGB"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MapSurfaceRGB, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MapSurfaceRGB */

  /* EXPORT WasmEdgeSDL_SDL_MapSurfaceRGBA */
  /* Uint32 SDL_MapSurfaceRGBA(SDL_Surface *surface, Uint8 r, Uint8 g, Uint8 b, Uint8 a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MapSurfaceRGBA[5], ReturnTypes_SDL_MapSurfaceRGBA[1];
  ParamTypes_SDL_MapSurfaceRGBA[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapSurfaceRGBA[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapSurfaceRGBA[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapSurfaceRGBA[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_MapSurfaceRGBA[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_MapSurfaceRGBA[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MapSurfaceRGBA, 5, ReturnTypes_SDL_MapSurfaceRGBA, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MapSurfaceRGBA"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MapSurfaceRGBA, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MapSurfaceRGBA */

  /* EXPORT WasmEdgeSDL_SDL_ReadSurfacePixel */
  /* bool SDL_ReadSurfacePixel(SDL_Surface *surface, int x, int y, Uint8 *r, Uint8 *g, Uint8 *b, Uint8 *a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadSurfacePixel[7], ReturnTypes_SDL_ReadSurfacePixel[1];
  ParamTypes_SDL_ReadSurfacePixel[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixel[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixel[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixel[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixel[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixel[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixel[6] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadSurfacePixel[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadSurfacePixel, 7, ReturnTypes_SDL_ReadSurfacePixel, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadSurfacePixel"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadSurfacePixel, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadSurfacePixel */

  /* EXPORT WasmEdgeSDL_SDL_ReadSurfacePixelFloat */
  /* bool SDL_ReadSurfacePixelFloat(SDL_Surface *surface, int x, int y, float *r, float *g, float *b, float *a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ReadSurfacePixelFloat[7], ReturnTypes_SDL_ReadSurfacePixelFloat[1];
  ParamTypes_SDL_ReadSurfacePixelFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixelFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixelFloat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixelFloat[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixelFloat[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixelFloat[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ReadSurfacePixelFloat[6] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ReadSurfacePixelFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ReadSurfacePixelFloat, 7, ReturnTypes_SDL_ReadSurfacePixelFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ReadSurfacePixelFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ReadSurfacePixelFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ReadSurfacePixelFloat */

  /* EXPORT WasmEdgeSDL_SDL_WriteSurfacePixel */
  /* bool SDL_WriteSurfacePixel(SDL_Surface *surface, int x, int y, Uint8 r, Uint8 g, Uint8 b, Uint8 a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteSurfacePixel[7], ReturnTypes_SDL_WriteSurfacePixel[1];
  ParamTypes_SDL_WriteSurfacePixel[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixel[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixel[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixel[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixel[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixel[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixel[6] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteSurfacePixel[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteSurfacePixel, 7, ReturnTypes_SDL_WriteSurfacePixel, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteSurfacePixel"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteSurfacePixel, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteSurfacePixel */

  /* EXPORT WasmEdgeSDL_SDL_WriteSurfacePixelFloat */
  /* bool SDL_WriteSurfacePixelFloat(SDL_Surface *surface, int x, int y, float r, float g, float b, float a) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WriteSurfacePixelFloat[7], ReturnTypes_SDL_WriteSurfacePixelFloat[1];
  ParamTypes_SDL_WriteSurfacePixelFloat[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixelFloat[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixelFloat[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixelFloat[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixelFloat[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixelFloat[5] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WriteSurfacePixelFloat[6] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WriteSurfacePixelFloat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WriteSurfacePixelFloat, 7, ReturnTypes_SDL_WriteSurfacePixelFloat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WriteSurfacePixelFloat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WriteSurfacePixelFloat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WriteSurfacePixelFloat */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowsMessageHook */
  /* void SDL_SetWindowsMessageHook(SDL_WindowsMessageHook callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowsMessageHook[2], ReturnTypes_SDL_SetWindowsMessageHook[1];
  ParamTypes_SDL_SetWindowsMessageHook[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowsMessageHook[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowsMessageHook, 2, ReturnTypes_SDL_SetWindowsMessageHook, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowsMessageHook"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowsMessageHook, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowsMessageHook */

  /* EXPORT WasmEdgeSDL_SDL_GetDirect3D9AdapterIndex */
  /* int SDL_GetDirect3D9AdapterIndex(SDL_DisplayID displayID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDirect3D9AdapterIndex[1], ReturnTypes_SDL_GetDirect3D9AdapterIndex[1];
  ParamTypes_SDL_GetDirect3D9AdapterIndex[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDirect3D9AdapterIndex[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDirect3D9AdapterIndex, 1, ReturnTypes_SDL_GetDirect3D9AdapterIndex, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDirect3D9AdapterIndex"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDirect3D9AdapterIndex, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDirect3D9AdapterIndex */

  /* EXPORT WasmEdgeSDL_SDL_GetDXGIOutputInfo */
  /* bool SDL_GetDXGIOutputInfo(SDL_DisplayID displayID, int *adapterIndex, int *outputIndex) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDXGIOutputInfo[3], ReturnTypes_SDL_GetDXGIOutputInfo[1];
  ParamTypes_SDL_GetDXGIOutputInfo[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDXGIOutputInfo[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDXGIOutputInfo[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDXGIOutputInfo[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDXGIOutputInfo, 3, ReturnTypes_SDL_GetDXGIOutputInfo, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDXGIOutputInfo"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDXGIOutputInfo, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDXGIOutputInfo */

  /* EXPORT WasmEdgeSDL_SDL_SetX11EventHook */
  /* void SDL_SetX11EventHook(SDL_X11EventHook callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetX11EventHook[2], ReturnTypes_SDL_SetX11EventHook[1];
  ParamTypes_SDL_SetX11EventHook[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetX11EventHook[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetX11EventHook, 2, ReturnTypes_SDL_SetX11EventHook, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetX11EventHook"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetX11EventHook, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetX11EventHook */

  /* EXPORT WasmEdgeSDL_SDL_SetLinuxThreadPriority */
  /* bool SDL_SetLinuxThreadPriority(Sint64 threadID, int priority) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetLinuxThreadPriority[2], ReturnTypes_SDL_SetLinuxThreadPriority[1];
  ParamTypes_SDL_SetLinuxThreadPriority[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetLinuxThreadPriority[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetLinuxThreadPriority[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetLinuxThreadPriority, 2, ReturnTypes_SDL_SetLinuxThreadPriority, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetLinuxThreadPriority"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetLinuxThreadPriority, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetLinuxThreadPriority */

  /* EXPORT WasmEdgeSDL_SDL_SetLinuxThreadPriorityAndPolicy */
  /* bool SDL_SetLinuxThreadPriorityAndPolicy(Sint64 threadID, int sdlPriority, int schedPolicy) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetLinuxThreadPriorityAndPolicy[3], ReturnTypes_SDL_SetLinuxThreadPriorityAndPolicy[1];
  ParamTypes_SDL_SetLinuxThreadPriorityAndPolicy[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetLinuxThreadPriorityAndPolicy[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetLinuxThreadPriorityAndPolicy[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetLinuxThreadPriorityAndPolicy[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetLinuxThreadPriorityAndPolicy, 3, ReturnTypes_SDL_SetLinuxThreadPriorityAndPolicy, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetLinuxThreadPriorityAndPolicy"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetLinuxThreadPriorityAndPolicy, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetLinuxThreadPriorityAndPolicy */

  /* EXPORT WasmEdgeSDL_SDL_SetiOSAnimationCallback */
  /* bool SDL_SetiOSAnimationCallback(SDL_Window *window, int interval, SDL_iOSAnimationCallback callback, void *callbackParam) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetiOSAnimationCallback[4], ReturnTypes_SDL_SetiOSAnimationCallback[1];
  ParamTypes_SDL_SetiOSAnimationCallback[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetiOSAnimationCallback[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetiOSAnimationCallback[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetiOSAnimationCallback[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetiOSAnimationCallback[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetiOSAnimationCallback, 4, ReturnTypes_SDL_SetiOSAnimationCallback, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetiOSAnimationCallback"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetiOSAnimationCallback, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetiOSAnimationCallback */

  /* EXPORT WasmEdgeSDL_SDL_SetiOSEventPump */
  /* void SDL_SetiOSEventPump(bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetiOSEventPump[1], ReturnTypes_SDL_SetiOSEventPump[1];
  ParamTypes_SDL_SetiOSEventPump[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetiOSEventPump, 1, ReturnTypes_SDL_SetiOSEventPump, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetiOSEventPump"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetiOSEventPump, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetiOSEventPump */

  /* EXPORT WasmEdgeSDL_SDL_GetAndroidJNIEnv */
  /* void * SDL_GetAndroidJNIEnv(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAndroidJNIEnv[1], ReturnTypes_SDL_GetAndroidJNIEnv[1];

  ReturnTypes_SDL_GetAndroidJNIEnv[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAndroidJNIEnv, 0, ReturnTypes_SDL_GetAndroidJNIEnv, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAndroidJNIEnv"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAndroidJNIEnv, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAndroidJNIEnv */

  /* EXPORT WasmEdgeSDL_SDL_GetAndroidActivity */
  /* void * SDL_GetAndroidActivity(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAndroidActivity[1], ReturnTypes_SDL_GetAndroidActivity[1];

  ReturnTypes_SDL_GetAndroidActivity[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAndroidActivity, 0, ReturnTypes_SDL_GetAndroidActivity, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAndroidActivity"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAndroidActivity, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAndroidActivity */

  /* EXPORT WasmEdgeSDL_SDL_GetAndroidSDKVersion */
  /* int SDL_GetAndroidSDKVersion(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAndroidSDKVersion[1], ReturnTypes_SDL_GetAndroidSDKVersion[1];

  ReturnTypes_SDL_GetAndroidSDKVersion[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAndroidSDKVersion, 0, ReturnTypes_SDL_GetAndroidSDKVersion, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAndroidSDKVersion"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAndroidSDKVersion, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAndroidSDKVersion */

  /* EXPORT WasmEdgeSDL_SDL_IsChromebook */
  /* bool SDL_IsChromebook(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsChromebook[1], ReturnTypes_SDL_IsChromebook[1];

  ReturnTypes_SDL_IsChromebook[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsChromebook, 0, ReturnTypes_SDL_IsChromebook, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsChromebook"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsChromebook, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsChromebook */

  /* EXPORT WasmEdgeSDL_SDL_IsDeXMode */
  /* bool SDL_IsDeXMode(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsDeXMode[1], ReturnTypes_SDL_IsDeXMode[1];

  ReturnTypes_SDL_IsDeXMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsDeXMode, 0, ReturnTypes_SDL_IsDeXMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsDeXMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsDeXMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsDeXMode */

  /* EXPORT WasmEdgeSDL_SDL_SendAndroidBackButton */
  /* void SDL_SendAndroidBackButton(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SendAndroidBackButton[1], ReturnTypes_SDL_SendAndroidBackButton[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SendAndroidBackButton, 0, ReturnTypes_SDL_SendAndroidBackButton, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SendAndroidBackButton"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SendAndroidBackButton, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SendAndroidBackButton */

  /* EXPORT WasmEdgeSDL_SDL_GetAndroidInternalStoragePath */
  /* const char * SDL_GetAndroidInternalStoragePath(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAndroidInternalStoragePath[1], ReturnTypes_SDL_GetAndroidInternalStoragePath[1];

  ReturnTypes_SDL_GetAndroidInternalStoragePath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAndroidInternalStoragePath, 0, ReturnTypes_SDL_GetAndroidInternalStoragePath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAndroidInternalStoragePath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAndroidInternalStoragePath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAndroidInternalStoragePath */

  /* EXPORT WasmEdgeSDL_SDL_GetAndroidExternalStorageState */
  /* Uint32 SDL_GetAndroidExternalStorageState(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAndroidExternalStorageState[1], ReturnTypes_SDL_GetAndroidExternalStorageState[1];

  ReturnTypes_SDL_GetAndroidExternalStorageState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAndroidExternalStorageState, 0, ReturnTypes_SDL_GetAndroidExternalStorageState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAndroidExternalStorageState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAndroidExternalStorageState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAndroidExternalStorageState */

  /* EXPORT WasmEdgeSDL_SDL_GetAndroidExternalStoragePath */
  /* const char * SDL_GetAndroidExternalStoragePath(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAndroidExternalStoragePath[1], ReturnTypes_SDL_GetAndroidExternalStoragePath[1];

  ReturnTypes_SDL_GetAndroidExternalStoragePath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAndroidExternalStoragePath, 0, ReturnTypes_SDL_GetAndroidExternalStoragePath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAndroidExternalStoragePath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAndroidExternalStoragePath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAndroidExternalStoragePath */

  /* EXPORT WasmEdgeSDL_SDL_GetAndroidCachePath */
  /* const char * SDL_GetAndroidCachePath(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetAndroidCachePath[1], ReturnTypes_SDL_GetAndroidCachePath[1];

  ReturnTypes_SDL_GetAndroidCachePath[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetAndroidCachePath, 0, ReturnTypes_SDL_GetAndroidCachePath, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetAndroidCachePath"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetAndroidCachePath, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetAndroidCachePath */

  /* EXPORT WasmEdgeSDL_SDL_RequestAndroidPermission */
  /* bool SDL_RequestAndroidPermission(const char *permission, SDL_RequestAndroidPermissionCallback cb, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RequestAndroidPermission[3], ReturnTypes_SDL_RequestAndroidPermission[1];
  ParamTypes_SDL_RequestAndroidPermission[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RequestAndroidPermission[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_RequestAndroidPermission[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RequestAndroidPermission[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RequestAndroidPermission, 3, ReturnTypes_SDL_RequestAndroidPermission, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RequestAndroidPermission"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RequestAndroidPermission, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RequestAndroidPermission */

  /* EXPORT WasmEdgeSDL_SDL_ShowAndroidToast */
  /* bool SDL_ShowAndroidToast(const char *message, int duration, int gravity, int xoffset, int yoffset) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowAndroidToast[5], ReturnTypes_SDL_ShowAndroidToast[1];
  ParamTypes_SDL_ShowAndroidToast[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowAndroidToast[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowAndroidToast[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowAndroidToast[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowAndroidToast[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ShowAndroidToast[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowAndroidToast, 5, ReturnTypes_SDL_ShowAndroidToast, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowAndroidToast"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowAndroidToast, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowAndroidToast */

  /* EXPORT WasmEdgeSDL_SDL_SendAndroidMessage */
  /* bool SDL_SendAndroidMessage(Uint32 command, int param) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SendAndroidMessage[2], ReturnTypes_SDL_SendAndroidMessage[1];
  ParamTypes_SDL_SendAndroidMessage[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SendAndroidMessage[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SendAndroidMessage[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SendAndroidMessage, 2, ReturnTypes_SDL_SendAndroidMessage, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SendAndroidMessage"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SendAndroidMessage, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SendAndroidMessage */

  /* EXPORT WasmEdgeSDL_SDL_IsTablet */
  /* bool SDL_IsTablet(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsTablet[1], ReturnTypes_SDL_IsTablet[1];

  ReturnTypes_SDL_IsTablet[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsTablet, 0, ReturnTypes_SDL_IsTablet, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsTablet"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsTablet, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsTablet */

  /* EXPORT WasmEdgeSDL_SDL_IsTV */
  /* bool SDL_IsTV(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_IsTV[1], ReturnTypes_SDL_IsTV[1];

  ReturnTypes_SDL_IsTV[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_IsTV, 0, ReturnTypes_SDL_IsTV, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_IsTV"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_IsTV, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_IsTV */

  /* EXPORT WasmEdgeSDL_SDL_GetSandbox */
  /* SDL_Sandbox SDL_GetSandbox(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSandbox[1], ReturnTypes_SDL_GetSandbox[1];

  ReturnTypes_SDL_GetSandbox[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSandbox, 0, ReturnTypes_SDL_GetSandbox, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSandbox"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSandbox, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSandbox */

  /* EXPORT WasmEdgeSDL_SDL_OnApplicationWillTerminate */
  /* void SDL_OnApplicationWillTerminate(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OnApplicationWillTerminate[1], ReturnTypes_SDL_OnApplicationWillTerminate[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OnApplicationWillTerminate, 0, ReturnTypes_SDL_OnApplicationWillTerminate, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OnApplicationWillTerminate"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OnApplicationWillTerminate, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OnApplicationWillTerminate */

  /* EXPORT WasmEdgeSDL_SDL_OnApplicationDidReceiveMemoryWarning */
  /* void SDL_OnApplicationDidReceiveMemoryWarning(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OnApplicationDidReceiveMemoryWarning[1], ReturnTypes_SDL_OnApplicationDidReceiveMemoryWarning[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OnApplicationDidReceiveMemoryWarning, 0, ReturnTypes_SDL_OnApplicationDidReceiveMemoryWarning, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OnApplicationDidReceiveMemoryWarning"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OnApplicationDidReceiveMemoryWarning, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OnApplicationDidReceiveMemoryWarning */

  /* EXPORT WasmEdgeSDL_SDL_OnApplicationWillEnterBackground */
  /* void SDL_OnApplicationWillEnterBackground(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OnApplicationWillEnterBackground[1], ReturnTypes_SDL_OnApplicationWillEnterBackground[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OnApplicationWillEnterBackground, 0, ReturnTypes_SDL_OnApplicationWillEnterBackground, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OnApplicationWillEnterBackground"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OnApplicationWillEnterBackground, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OnApplicationWillEnterBackground */

  /* EXPORT WasmEdgeSDL_SDL_OnApplicationDidEnterBackground */
  /* void SDL_OnApplicationDidEnterBackground(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OnApplicationDidEnterBackground[1], ReturnTypes_SDL_OnApplicationDidEnterBackground[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OnApplicationDidEnterBackground, 0, ReturnTypes_SDL_OnApplicationDidEnterBackground, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OnApplicationDidEnterBackground"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OnApplicationDidEnterBackground, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OnApplicationDidEnterBackground */

  /* EXPORT WasmEdgeSDL_SDL_OnApplicationWillEnterForeground */
  /* void SDL_OnApplicationWillEnterForeground(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OnApplicationWillEnterForeground[1], ReturnTypes_SDL_OnApplicationWillEnterForeground[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OnApplicationWillEnterForeground, 0, ReturnTypes_SDL_OnApplicationWillEnterForeground, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OnApplicationWillEnterForeground"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OnApplicationWillEnterForeground, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OnApplicationWillEnterForeground */

  /* EXPORT WasmEdgeSDL_SDL_OnApplicationDidEnterForeground */
  /* void SDL_OnApplicationDidEnterForeground(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OnApplicationDidEnterForeground[1], ReturnTypes_SDL_OnApplicationDidEnterForeground[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OnApplicationDidEnterForeground, 0, ReturnTypes_SDL_OnApplicationDidEnterForeground, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OnApplicationDidEnterForeground"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OnApplicationDidEnterForeground, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OnApplicationDidEnterForeground */

  /* EXPORT WasmEdgeSDL_SDL_OnApplicationDidChangeStatusBarOrientation */
  /* void SDL_OnApplicationDidChangeStatusBarOrientation(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_OnApplicationDidChangeStatusBarOrientation[1], ReturnTypes_SDL_OnApplicationDidChangeStatusBarOrientation[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_OnApplicationDidChangeStatusBarOrientation, 0, ReturnTypes_SDL_OnApplicationDidChangeStatusBarOrientation, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_OnApplicationDidChangeStatusBarOrientation"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_OnApplicationDidChangeStatusBarOrientation, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_OnApplicationDidChangeStatusBarOrientation */

  /* EXPORT WasmEdgeSDL_SDL_GetGDKTaskQueue */
  /* bool SDL_GetGDKTaskQueue(XTaskQueueHandle *outTaskQueue) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGDKTaskQueue[1], ReturnTypes_SDL_GetGDKTaskQueue[1];
  ParamTypes_SDL_GetGDKTaskQueue[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGDKTaskQueue[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGDKTaskQueue, 1, ReturnTypes_SDL_GetGDKTaskQueue, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGDKTaskQueue"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGDKTaskQueue, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGDKTaskQueue */

  /* EXPORT WasmEdgeSDL_SDL_GetGDKDefaultUser */
  /* bool SDL_GetGDKDefaultUser(XUserHandle *outUserHandle) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGDKDefaultUser[1], ReturnTypes_SDL_GetGDKDefaultUser[1];
  ParamTypes_SDL_GetGDKDefaultUser[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetGDKDefaultUser[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGDKDefaultUser, 1, ReturnTypes_SDL_GetGDKDefaultUser, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGDKDefaultUser"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGDKDefaultUser, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGDKDefaultUser */

  /* EXPORT WasmEdgeSDL_SDL_CreateThread */
  /* SDL_Thread * SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateThread[3], ReturnTypes_SDL_CreateThread[1];
  ParamTypes_SDL_CreateThread[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateThread[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateThread[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateThread[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateThread, 3, ReturnTypes_SDL_CreateThread, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateThread"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateThread, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateThread */

  /* EXPORT WasmEdgeSDL_SDL_CreateThreadWithProperties */
  /* SDL_Thread * SDL_CreateThreadWithProperties(SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateThreadWithProperties[1], ReturnTypes_SDL_CreateThreadWithProperties[1];
  ParamTypes_SDL_CreateThreadWithProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateThreadWithProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateThreadWithProperties, 1, ReturnTypes_SDL_CreateThreadWithProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateThreadWithProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateThreadWithProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateThreadWithProperties */

  /* EXPORT WasmEdgeSDL_SDL_CreateThreadRuntime */
  /* SDL_Thread * SDL_CreateThreadRuntime(SDL_ThreadFunction fn, const char *name, void *data, SDL_FunctionPointer pfnBeginThread, SDL_FunctionPointer pfnEndThread) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateThreadRuntime[5], ReturnTypes_SDL_CreateThreadRuntime[1];
  ParamTypes_SDL_CreateThreadRuntime[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateThreadRuntime[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateThreadRuntime[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateThreadRuntime[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateThreadRuntime[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateThreadRuntime[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateThreadRuntime, 5, ReturnTypes_SDL_CreateThreadRuntime, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateThreadRuntime"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateThreadRuntime, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateThreadRuntime */

  /* EXPORT WasmEdgeSDL_SDL_CreateThreadWithPropertiesRuntime */
  /* SDL_Thread * SDL_CreateThreadWithPropertiesRuntime(SDL_PropertiesID props, SDL_FunctionPointer pfnBeginThread, SDL_FunctionPointer pfnEndThread) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateThreadWithPropertiesRuntime[3], ReturnTypes_SDL_CreateThreadWithPropertiesRuntime[1];
  ParamTypes_SDL_CreateThreadWithPropertiesRuntime[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateThreadWithPropertiesRuntime[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateThreadWithPropertiesRuntime[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateThreadWithPropertiesRuntime[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateThreadWithPropertiesRuntime, 3, ReturnTypes_SDL_CreateThreadWithPropertiesRuntime, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateThreadWithPropertiesRuntime"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateThreadWithPropertiesRuntime, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateThreadWithPropertiesRuntime */

  /* EXPORT WasmEdgeSDL_SDL_GetThreadName */
  /* const char * SDL_GetThreadName(SDL_Thread *thread) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetThreadName[1], ReturnTypes_SDL_GetThreadName[1];
  ParamTypes_SDL_GetThreadName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetThreadName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetThreadName, 1, ReturnTypes_SDL_GetThreadName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetThreadName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetThreadName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetThreadName */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentThreadID */
  /* SDL_ThreadID SDL_GetCurrentThreadID(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentThreadID[1], ReturnTypes_SDL_GetCurrentThreadID[1];

  ReturnTypes_SDL_GetCurrentThreadID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentThreadID, 0, ReturnTypes_SDL_GetCurrentThreadID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentThreadID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentThreadID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentThreadID */

  /* EXPORT WasmEdgeSDL_SDL_GetThreadID */
  /* SDL_ThreadID SDL_GetThreadID(SDL_Thread *thread) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetThreadID[1], ReturnTypes_SDL_GetThreadID[1];
  ParamTypes_SDL_GetThreadID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetThreadID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetThreadID, 1, ReturnTypes_SDL_GetThreadID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetThreadID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetThreadID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetThreadID */

  /* EXPORT WasmEdgeSDL_SDL_SetCurrentThreadPriority */
  /* bool SDL_SetCurrentThreadPriority(SDL_ThreadPriority priority) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetCurrentThreadPriority[1], ReturnTypes_SDL_SetCurrentThreadPriority[1];
  ParamTypes_SDL_SetCurrentThreadPriority[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetCurrentThreadPriority[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetCurrentThreadPriority, 1, ReturnTypes_SDL_SetCurrentThreadPriority, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetCurrentThreadPriority"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetCurrentThreadPriority, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetCurrentThreadPriority */

  /* EXPORT WasmEdgeSDL_SDL_WaitThread */
  /* void SDL_WaitThread(SDL_Thread *thread, int *status) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WaitThread[2], ReturnTypes_SDL_WaitThread[1];
  ParamTypes_SDL_WaitThread[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_WaitThread[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WaitThread, 2, ReturnTypes_SDL_WaitThread, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WaitThread"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WaitThread, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WaitThread */

  /* EXPORT WasmEdgeSDL_SDL_GetThreadState */
  /* SDL_ThreadState SDL_GetThreadState(SDL_Thread *thread) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetThreadState[1], ReturnTypes_SDL_GetThreadState[1];
  ParamTypes_SDL_GetThreadState[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetThreadState[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetThreadState, 1, ReturnTypes_SDL_GetThreadState, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetThreadState"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetThreadState, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetThreadState */

  /* EXPORT WasmEdgeSDL_SDL_DetachThread */
  /* void SDL_DetachThread(SDL_Thread *thread) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DetachThread[1], ReturnTypes_SDL_DetachThread[1];
  ParamTypes_SDL_DetachThread[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DetachThread, 1, ReturnTypes_SDL_DetachThread, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DetachThread"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DetachThread, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DetachThread */

  /* EXPORT WasmEdgeSDL_SDL_GetTLS */
  /* void * SDL_GetTLS(SDL_TLSID *id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTLS[1], ReturnTypes_SDL_GetTLS[1];
  ParamTypes_SDL_GetTLS[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTLS[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTLS, 1, ReturnTypes_SDL_GetTLS, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTLS"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTLS, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTLS */

  /* EXPORT WasmEdgeSDL_SDL_SetTLS */
  /* bool SDL_SetTLS(SDL_TLSID *id, const void *value, SDL_TLSDestructorCallback destructor) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTLS[3], ReturnTypes_SDL_SetTLS[1];
  ParamTypes_SDL_SetTLS[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTLS[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTLS[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetTLS[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTLS, 3, ReturnTypes_SDL_SetTLS, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTLS"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTLS, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTLS */

  /* EXPORT WasmEdgeSDL_SDL_CleanupTLS */
  /* void SDL_CleanupTLS(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CleanupTLS[1], ReturnTypes_SDL_CleanupTLS[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CleanupTLS, 0, ReturnTypes_SDL_CleanupTLS, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CleanupTLS"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CleanupTLS, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CleanupTLS */

  /* EXPORT WasmEdgeSDL_SDL_GetDateTimeLocalePreferences */
  /* bool SDL_GetDateTimeLocalePreferences(SDL_DateFormat *dateFormat, SDL_TimeFormat *timeFormat) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDateTimeLocalePreferences[2], ReturnTypes_SDL_GetDateTimeLocalePreferences[1];
  ParamTypes_SDL_GetDateTimeLocalePreferences[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDateTimeLocalePreferences[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDateTimeLocalePreferences[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDateTimeLocalePreferences, 2, ReturnTypes_SDL_GetDateTimeLocalePreferences, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDateTimeLocalePreferences"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDateTimeLocalePreferences, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDateTimeLocalePreferences */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentTime */
  /* bool SDL_GetCurrentTime(SDL_Time *ticks) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentTime[1], ReturnTypes_SDL_GetCurrentTime[1];
  ParamTypes_SDL_GetCurrentTime[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCurrentTime[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentTime, 1, ReturnTypes_SDL_GetCurrentTime, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentTime"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentTime, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentTime */

  /* EXPORT WasmEdgeSDL_SDL_TimeToDateTime */
  /* bool SDL_TimeToDateTime(SDL_Time ticks, SDL_DateTime *dt, bool localTime) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TimeToDateTime[3], ReturnTypes_SDL_TimeToDateTime[1];
  ParamTypes_SDL_TimeToDateTime[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_TimeToDateTime[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_TimeToDateTime[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TimeToDateTime[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TimeToDateTime, 3, ReturnTypes_SDL_TimeToDateTime, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TimeToDateTime"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TimeToDateTime, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TimeToDateTime */

  /* EXPORT WasmEdgeSDL_SDL_DateTimeToTime */
  /* bool SDL_DateTimeToTime(const SDL_DateTime *dt, SDL_Time *ticks) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DateTimeToTime[2], ReturnTypes_SDL_DateTimeToTime[1];
  ParamTypes_SDL_DateTimeToTime[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_DateTimeToTime[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_DateTimeToTime[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DateTimeToTime, 2, ReturnTypes_SDL_DateTimeToTime, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DateTimeToTime"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DateTimeToTime, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DateTimeToTime */

  /* EXPORT WasmEdgeSDL_SDL_TimeToWindows */
  /* void SDL_TimeToWindows(SDL_Time ticks, Uint32 *dwLowDateTime, Uint32 *dwHighDateTime) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TimeToWindows[3], ReturnTypes_SDL_TimeToWindows[1];
  ParamTypes_SDL_TimeToWindows[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_TimeToWindows[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_TimeToWindows[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TimeToWindows, 3, ReturnTypes_SDL_TimeToWindows, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TimeToWindows"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TimeToWindows, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TimeToWindows */

  /* EXPORT WasmEdgeSDL_SDL_TimeFromWindows */
  /* SDL_Time SDL_TimeFromWindows(Uint32 dwLowDateTime, Uint32 dwHighDateTime) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_TimeFromWindows[2], ReturnTypes_SDL_TimeFromWindows[1];
  ParamTypes_SDL_TimeFromWindows[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_TimeFromWindows[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_TimeFromWindows[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_TimeFromWindows, 2, ReturnTypes_SDL_TimeFromWindows, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_TimeFromWindows"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_TimeFromWindows, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_TimeFromWindows */

  /* EXPORT WasmEdgeSDL_SDL_GetDaysInMonth */
  /* int SDL_GetDaysInMonth(int year, int month) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDaysInMonth[2], ReturnTypes_SDL_GetDaysInMonth[1];
  ParamTypes_SDL_GetDaysInMonth[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDaysInMonth[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDaysInMonth[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDaysInMonth, 2, ReturnTypes_SDL_GetDaysInMonth, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDaysInMonth"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDaysInMonth, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDaysInMonth */

  /* EXPORT WasmEdgeSDL_SDL_GetDayOfYear */
  /* int SDL_GetDayOfYear(int year, int month, int day) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDayOfYear[3], ReturnTypes_SDL_GetDayOfYear[1];
  ParamTypes_SDL_GetDayOfYear[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDayOfYear[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDayOfYear[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDayOfYear[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDayOfYear, 3, ReturnTypes_SDL_GetDayOfYear, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDayOfYear"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDayOfYear, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDayOfYear */

  /* EXPORT WasmEdgeSDL_SDL_GetDayOfWeek */
  /* int SDL_GetDayOfWeek(int year, int month, int day) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDayOfWeek[3], ReturnTypes_SDL_GetDayOfWeek[1];
  ParamTypes_SDL_GetDayOfWeek[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDayOfWeek[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDayOfWeek[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDayOfWeek[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDayOfWeek, 3, ReturnTypes_SDL_GetDayOfWeek, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDayOfWeek"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDayOfWeek, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDayOfWeek */

  /* EXPORT WasmEdgeSDL_SDL_GetTicks */
  /* Uint64 SDL_GetTicks(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTicks[1], ReturnTypes_SDL_GetTicks[1];

  ReturnTypes_SDL_GetTicks[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTicks, 0, ReturnTypes_SDL_GetTicks, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTicks"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTicks, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTicks */

  /* EXPORT WasmEdgeSDL_SDL_GetTicksNS */
  /* Uint64 SDL_GetTicksNS(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTicksNS[1], ReturnTypes_SDL_GetTicksNS[1];

  ReturnTypes_SDL_GetTicksNS[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTicksNS, 0, ReturnTypes_SDL_GetTicksNS, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTicksNS"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTicksNS, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTicksNS */

  /* EXPORT WasmEdgeSDL_SDL_GetPerformanceCounter */
  /* Uint64 SDL_GetPerformanceCounter(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPerformanceCounter[1], ReturnTypes_SDL_GetPerformanceCounter[1];

  ReturnTypes_SDL_GetPerformanceCounter[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPerformanceCounter, 0, ReturnTypes_SDL_GetPerformanceCounter, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPerformanceCounter"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPerformanceCounter, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPerformanceCounter */

  /* EXPORT WasmEdgeSDL_SDL_GetPerformanceFrequency */
  /* Uint64 SDL_GetPerformanceFrequency(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPerformanceFrequency[1], ReturnTypes_SDL_GetPerformanceFrequency[1];

  ReturnTypes_SDL_GetPerformanceFrequency[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPerformanceFrequency, 0, ReturnTypes_SDL_GetPerformanceFrequency, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPerformanceFrequency"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPerformanceFrequency, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPerformanceFrequency */

  /* EXPORT WasmEdgeSDL_SDL_Delay */
  /* void SDL_Delay(Uint32 ms) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_Delay[1], ReturnTypes_SDL_Delay[1];
  ParamTypes_SDL_Delay[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Delay, 1, ReturnTypes_SDL_Delay, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Delay"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Delay, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Delay */

  /* EXPORT WasmEdgeSDL_SDL_DelayNS */
  /* void SDL_DelayNS(Uint64 ns) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DelayNS[1], ReturnTypes_SDL_DelayNS[1];
  ParamTypes_SDL_DelayNS[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DelayNS, 1, ReturnTypes_SDL_DelayNS, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DelayNS"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DelayNS, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DelayNS */

  /* EXPORT WasmEdgeSDL_SDL_DelayPrecise */
  /* void SDL_DelayPrecise(Uint64 ns) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DelayPrecise[1], ReturnTypes_SDL_DelayPrecise[1];
  ParamTypes_SDL_DelayPrecise[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DelayPrecise, 1, ReturnTypes_SDL_DelayPrecise, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DelayPrecise"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DelayPrecise, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DelayPrecise */

  /* EXPORT WasmEdgeSDL_SDL_AddTimer */
  /* SDL_TimerID SDL_AddTimer(Uint32 interval, SDL_TimerCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddTimer[3], ReturnTypes_SDL_AddTimer[1];
  ParamTypes_SDL_AddTimer[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddTimer[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddTimer[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddTimer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddTimer, 3, ReturnTypes_SDL_AddTimer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddTimer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddTimer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddTimer */

  /* EXPORT WasmEdgeSDL_SDL_AddTimerNS */
  /* SDL_TimerID SDL_AddTimerNS(Uint64 interval, SDL_NSTimerCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_AddTimerNS[3], ReturnTypes_SDL_AddTimerNS[1];
  ParamTypes_SDL_AddTimerNS[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddTimerNS[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_AddTimerNS[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_AddTimerNS[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_AddTimerNS, 3, ReturnTypes_SDL_AddTimerNS, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_AddTimerNS"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_AddTimerNS, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_AddTimerNS */

  /* EXPORT WasmEdgeSDL_SDL_RemoveTimer */
  /* bool SDL_RemoveTimer(SDL_TimerID id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RemoveTimer[1], ReturnTypes_SDL_RemoveTimer[1];
  ParamTypes_SDL_RemoveTimer[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RemoveTimer[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RemoveTimer, 1, ReturnTypes_SDL_RemoveTimer, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RemoveTimer"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RemoveTimer, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RemoveTimer */

  /* EXPORT WasmEdgeSDL_SDL_GetTouchDevices */
  /* SDL_TouchID * SDL_GetTouchDevices(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTouchDevices[1], ReturnTypes_SDL_GetTouchDevices[1];
  ParamTypes_SDL_GetTouchDevices[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTouchDevices[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTouchDevices, 1, ReturnTypes_SDL_GetTouchDevices, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTouchDevices"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTouchDevices, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTouchDevices */

  /* EXPORT WasmEdgeSDL_SDL_GetTouchDeviceName */
  /* const char * SDL_GetTouchDeviceName(SDL_TouchID touchID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTouchDeviceName[1], ReturnTypes_SDL_GetTouchDeviceName[1];
  ParamTypes_SDL_GetTouchDeviceName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTouchDeviceName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTouchDeviceName, 1, ReturnTypes_SDL_GetTouchDeviceName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTouchDeviceName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTouchDeviceName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTouchDeviceName */

  /* EXPORT WasmEdgeSDL_SDL_GetTouchDeviceType */
  /* SDL_TouchDeviceType SDL_GetTouchDeviceType(SDL_TouchID touchID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTouchDeviceType[1], ReturnTypes_SDL_GetTouchDeviceType[1];
  ParamTypes_SDL_GetTouchDeviceType[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTouchDeviceType[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTouchDeviceType, 1, ReturnTypes_SDL_GetTouchDeviceType, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTouchDeviceType"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTouchDeviceType, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTouchDeviceType */

  /* EXPORT WasmEdgeSDL_SDL_GetTouchFingers */
  /* SDL_Finger ** SDL_GetTouchFingers(SDL_TouchID touchID, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTouchFingers[2], ReturnTypes_SDL_GetTouchFingers[1];
  ParamTypes_SDL_GetTouchFingers[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTouchFingers[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTouchFingers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTouchFingers, 2, ReturnTypes_SDL_GetTouchFingers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTouchFingers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTouchFingers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTouchFingers */

  /* EXPORT WasmEdgeSDL_SDL_CreateTray */
  /* SDL_Tray * SDL_CreateTray(SDL_Surface *icon, const char *tooltip) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateTray[2], ReturnTypes_SDL_CreateTray[1];
  ParamTypes_SDL_CreateTray[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateTray[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateTray[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateTray, 2, ReturnTypes_SDL_CreateTray, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateTray"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateTray, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateTray */

  /* EXPORT WasmEdgeSDL_SDL_SetTrayIcon */
  /* void SDL_SetTrayIcon(SDL_Tray *tray, SDL_Surface *icon) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTrayIcon[2], ReturnTypes_SDL_SetTrayIcon[1];
  ParamTypes_SDL_SetTrayIcon[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTrayIcon[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTrayIcon, 2, ReturnTypes_SDL_SetTrayIcon, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTrayIcon"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTrayIcon, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTrayIcon */

  /* EXPORT WasmEdgeSDL_SDL_SetTrayTooltip */
  /* void SDL_SetTrayTooltip(SDL_Tray *tray, const char *tooltip) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTrayTooltip[2], ReturnTypes_SDL_SetTrayTooltip[1];
  ParamTypes_SDL_SetTrayTooltip[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTrayTooltip[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTrayTooltip, 2, ReturnTypes_SDL_SetTrayTooltip, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTrayTooltip"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTrayTooltip, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTrayTooltip */

  /* EXPORT WasmEdgeSDL_SDL_CreateTrayMenu */
  /* SDL_TrayMenu * SDL_CreateTrayMenu(SDL_Tray *tray) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateTrayMenu[1], ReturnTypes_SDL_CreateTrayMenu[1];
  ParamTypes_SDL_CreateTrayMenu[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateTrayMenu[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateTrayMenu, 1, ReturnTypes_SDL_CreateTrayMenu, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateTrayMenu"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateTrayMenu, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateTrayMenu */

  /* EXPORT WasmEdgeSDL_SDL_CreateTraySubmenu */
  /* SDL_TrayMenu * SDL_CreateTraySubmenu(SDL_TrayEntry *entry) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateTraySubmenu[1], ReturnTypes_SDL_CreateTraySubmenu[1];
  ParamTypes_SDL_CreateTraySubmenu[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateTraySubmenu[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateTraySubmenu, 1, ReturnTypes_SDL_CreateTraySubmenu, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateTraySubmenu"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateTraySubmenu, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateTraySubmenu */

  /* EXPORT WasmEdgeSDL_SDL_GetTrayMenu */
  /* SDL_TrayMenu * SDL_GetTrayMenu(SDL_Tray *tray) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTrayMenu[1], ReturnTypes_SDL_GetTrayMenu[1];
  ParamTypes_SDL_GetTrayMenu[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTrayMenu[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTrayMenu, 1, ReturnTypes_SDL_GetTrayMenu, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTrayMenu"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTrayMenu, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTrayMenu */

  /* EXPORT WasmEdgeSDL_SDL_GetTraySubmenu */
  /* SDL_TrayMenu * SDL_GetTraySubmenu(SDL_TrayEntry *entry) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTraySubmenu[1], ReturnTypes_SDL_GetTraySubmenu[1];
  ParamTypes_SDL_GetTraySubmenu[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTraySubmenu[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTraySubmenu, 1, ReturnTypes_SDL_GetTraySubmenu, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTraySubmenu"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTraySubmenu, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTraySubmenu */

  /* EXPORT WasmEdgeSDL_SDL_GetTrayEntries */
  /* const SDL_TrayEntry ** SDL_GetTrayEntries(SDL_TrayMenu *menu, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTrayEntries[2], ReturnTypes_SDL_GetTrayEntries[1];
  ParamTypes_SDL_GetTrayEntries[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetTrayEntries[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTrayEntries[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTrayEntries, 2, ReturnTypes_SDL_GetTrayEntries, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTrayEntries"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTrayEntries, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTrayEntries */

  /* EXPORT WasmEdgeSDL_SDL_RemoveTrayEntry */
  /* void SDL_RemoveTrayEntry(SDL_TrayEntry *entry) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RemoveTrayEntry[1], ReturnTypes_SDL_RemoveTrayEntry[1];
  ParamTypes_SDL_RemoveTrayEntry[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RemoveTrayEntry, 1, ReturnTypes_SDL_RemoveTrayEntry, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RemoveTrayEntry"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RemoveTrayEntry, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RemoveTrayEntry */

  /* EXPORT WasmEdgeSDL_SDL_InsertTrayEntryAt */
  /* SDL_TrayEntry * SDL_InsertTrayEntryAt(SDL_TrayMenu *menu, int pos, const char *label, SDL_TrayEntryFlags flags) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_InsertTrayEntryAt[4], ReturnTypes_SDL_InsertTrayEntryAt[1];
  ParamTypes_SDL_InsertTrayEntryAt[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_InsertTrayEntryAt[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_InsertTrayEntryAt[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_InsertTrayEntryAt[3] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_InsertTrayEntryAt[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_InsertTrayEntryAt, 4, ReturnTypes_SDL_InsertTrayEntryAt, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_InsertTrayEntryAt"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_InsertTrayEntryAt, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_InsertTrayEntryAt */

  /* EXPORT WasmEdgeSDL_SDL_SetTrayEntryLabel */
  /* void SDL_SetTrayEntryLabel(SDL_TrayEntry *entry, const char *label) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTrayEntryLabel[2], ReturnTypes_SDL_SetTrayEntryLabel[1];
  ParamTypes_SDL_SetTrayEntryLabel[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTrayEntryLabel[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTrayEntryLabel, 2, ReturnTypes_SDL_SetTrayEntryLabel, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTrayEntryLabel"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTrayEntryLabel, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTrayEntryLabel */

  /* EXPORT WasmEdgeSDL_SDL_GetTrayEntryLabel */
  /* const char * SDL_GetTrayEntryLabel(SDL_TrayEntry *entry) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTrayEntryLabel[1], ReturnTypes_SDL_GetTrayEntryLabel[1];
  ParamTypes_SDL_GetTrayEntryLabel[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTrayEntryLabel[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTrayEntryLabel, 1, ReturnTypes_SDL_GetTrayEntryLabel, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTrayEntryLabel"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTrayEntryLabel, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTrayEntryLabel */

  /* EXPORT WasmEdgeSDL_SDL_SetTrayEntryChecked */
  /* void SDL_SetTrayEntryChecked(SDL_TrayEntry *entry, bool checked) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTrayEntryChecked[2], ReturnTypes_SDL_SetTrayEntryChecked[1];
  ParamTypes_SDL_SetTrayEntryChecked[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTrayEntryChecked[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTrayEntryChecked, 2, ReturnTypes_SDL_SetTrayEntryChecked, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTrayEntryChecked"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTrayEntryChecked, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTrayEntryChecked */

  /* EXPORT WasmEdgeSDL_SDL_GetTrayEntryChecked */
  /* bool SDL_GetTrayEntryChecked(SDL_TrayEntry *entry) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTrayEntryChecked[1], ReturnTypes_SDL_GetTrayEntryChecked[1];
  ParamTypes_SDL_GetTrayEntryChecked[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTrayEntryChecked[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTrayEntryChecked, 1, ReturnTypes_SDL_GetTrayEntryChecked, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTrayEntryChecked"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTrayEntryChecked, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTrayEntryChecked */

  /* EXPORT WasmEdgeSDL_SDL_SetTrayEntryEnabled */
  /* void SDL_SetTrayEntryEnabled(SDL_TrayEntry *entry, bool enabled) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTrayEntryEnabled[2], ReturnTypes_SDL_SetTrayEntryEnabled[1];
  ParamTypes_SDL_SetTrayEntryEnabled[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTrayEntryEnabled[1] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTrayEntryEnabled, 2, ReturnTypes_SDL_SetTrayEntryEnabled, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTrayEntryEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTrayEntryEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTrayEntryEnabled */

  /* EXPORT WasmEdgeSDL_SDL_GetTrayEntryEnabled */
  /* bool SDL_GetTrayEntryEnabled(SDL_TrayEntry *entry) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTrayEntryEnabled[1], ReturnTypes_SDL_GetTrayEntryEnabled[1];
  ParamTypes_SDL_GetTrayEntryEnabled[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTrayEntryEnabled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTrayEntryEnabled, 1, ReturnTypes_SDL_GetTrayEntryEnabled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTrayEntryEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTrayEntryEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTrayEntryEnabled */

  /* EXPORT WasmEdgeSDL_SDL_SetTrayEntryCallback */
  /* void SDL_SetTrayEntryCallback(SDL_TrayEntry *entry, SDL_TrayCallback callback, void *userdata) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetTrayEntryCallback[3], ReturnTypes_SDL_SetTrayEntryCallback[1];
  ParamTypes_SDL_SetTrayEntryCallback[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTrayEntryCallback[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetTrayEntryCallback[2] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetTrayEntryCallback, 3, ReturnTypes_SDL_SetTrayEntryCallback, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetTrayEntryCallback"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetTrayEntryCallback, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetTrayEntryCallback */

  /* EXPORT WasmEdgeSDL_SDL_ClickTrayEntry */
  /* void SDL_ClickTrayEntry(SDL_TrayEntry *entry) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ClickTrayEntry[1], ReturnTypes_SDL_ClickTrayEntry[1];
  ParamTypes_SDL_ClickTrayEntry[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ClickTrayEntry, 1, ReturnTypes_SDL_ClickTrayEntry, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ClickTrayEntry"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ClickTrayEntry, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ClickTrayEntry */

  /* EXPORT WasmEdgeSDL_SDL_DestroyTray */
  /* void SDL_DestroyTray(SDL_Tray *tray) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyTray[1], ReturnTypes_SDL_DestroyTray[1];
  ParamTypes_SDL_DestroyTray[0] = WasmEdge_ValTypeGenI32();

  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyTray, 1, ReturnTypes_SDL_DestroyTray, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyTray"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyTray, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyTray */

  /* EXPORT WasmEdgeSDL_SDL_GetTrayEntryParent */
  /* SDL_TrayMenu * SDL_GetTrayEntryParent(SDL_TrayEntry *entry) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTrayEntryParent[1], ReturnTypes_SDL_GetTrayEntryParent[1];
  ParamTypes_SDL_GetTrayEntryParent[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTrayEntryParent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTrayEntryParent, 1, ReturnTypes_SDL_GetTrayEntryParent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTrayEntryParent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTrayEntryParent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTrayEntryParent */

  /* EXPORT WasmEdgeSDL_SDL_GetTrayMenuParentEntry */
  /* SDL_TrayEntry * SDL_GetTrayMenuParentEntry(SDL_TrayMenu *menu) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTrayMenuParentEntry[1], ReturnTypes_SDL_GetTrayMenuParentEntry[1];
  ParamTypes_SDL_GetTrayMenuParentEntry[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTrayMenuParentEntry[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTrayMenuParentEntry, 1, ReturnTypes_SDL_GetTrayMenuParentEntry, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTrayMenuParentEntry"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTrayMenuParentEntry, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTrayMenuParentEntry */

  /* EXPORT WasmEdgeSDL_SDL_GetTrayMenuParentTray */
  /* SDL_Tray * SDL_GetTrayMenuParentTray(SDL_TrayMenu *menu) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetTrayMenuParentTray[1], ReturnTypes_SDL_GetTrayMenuParentTray[1];
  ParamTypes_SDL_GetTrayMenuParentTray[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetTrayMenuParentTray[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetTrayMenuParentTray, 1, ReturnTypes_SDL_GetTrayMenuParentTray, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetTrayMenuParentTray"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetTrayMenuParentTray, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetTrayMenuParentTray */

  /* EXPORT WasmEdgeSDL_SDL_UpdateTrays */
  /* void SDL_UpdateTrays(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UpdateTrays[1], ReturnTypes_SDL_UpdateTrays[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UpdateTrays, 0, ReturnTypes_SDL_UpdateTrays, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UpdateTrays"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UpdateTrays, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UpdateTrays */

  /* EXPORT WasmEdgeSDL_SDL_GetVersion */
  /* int SDL_GetVersion(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetVersion[1], ReturnTypes_SDL_GetVersion[1];

  ReturnTypes_SDL_GetVersion[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetVersion, 0, ReturnTypes_SDL_GetVersion, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetVersion"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetVersion, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetVersion */

  /* EXPORT WasmEdgeSDL_SDL_GetRevision */
  /* const char * SDL_GetRevision(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetRevision[1], ReturnTypes_SDL_GetRevision[1];

  ReturnTypes_SDL_GetRevision[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetRevision, 0, ReturnTypes_SDL_GetRevision, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetRevision"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetRevision, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetRevision */

  /* EXPORT WasmEdgeSDL_SDL_GetNumVideoDrivers */
  /* int SDL_GetNumVideoDrivers(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNumVideoDrivers[1], ReturnTypes_SDL_GetNumVideoDrivers[1];

  ReturnTypes_SDL_GetNumVideoDrivers[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNumVideoDrivers, 0, ReturnTypes_SDL_GetNumVideoDrivers, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNumVideoDrivers"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNumVideoDrivers, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNumVideoDrivers */

  /* EXPORT WasmEdgeSDL_SDL_GetVideoDriver */
  /* const char * SDL_GetVideoDriver(int index) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetVideoDriver[1], ReturnTypes_SDL_GetVideoDriver[1];
  ParamTypes_SDL_GetVideoDriver[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetVideoDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetVideoDriver, 1, ReturnTypes_SDL_GetVideoDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetVideoDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetVideoDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetVideoDriver */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentVideoDriver */
  /* const char * SDL_GetCurrentVideoDriver(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentVideoDriver[1], ReturnTypes_SDL_GetCurrentVideoDriver[1];

  ReturnTypes_SDL_GetCurrentVideoDriver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentVideoDriver, 0, ReturnTypes_SDL_GetCurrentVideoDriver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentVideoDriver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentVideoDriver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentVideoDriver */

  /* EXPORT WasmEdgeSDL_SDL_GetSystemTheme */
  /* SDL_SystemTheme SDL_GetSystemTheme(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetSystemTheme[1], ReturnTypes_SDL_GetSystemTheme[1];

  ReturnTypes_SDL_GetSystemTheme[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetSystemTheme, 0, ReturnTypes_SDL_GetSystemTheme, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetSystemTheme"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetSystemTheme, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetSystemTheme */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplays */
  /* SDL_DisplayID * SDL_GetDisplays(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplays[1], ReturnTypes_SDL_GetDisplays[1];
  ParamTypes_SDL_GetDisplays[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplays[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplays, 1, ReturnTypes_SDL_GetDisplays, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplays"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplays, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplays */

  /* EXPORT WasmEdgeSDL_SDL_GetPrimaryDisplay */
  /* SDL_DisplayID SDL_GetPrimaryDisplay(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetPrimaryDisplay[1], ReturnTypes_SDL_GetPrimaryDisplay[1];

  ReturnTypes_SDL_GetPrimaryDisplay[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetPrimaryDisplay, 0, ReturnTypes_SDL_GetPrimaryDisplay, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetPrimaryDisplay"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetPrimaryDisplay, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetPrimaryDisplay */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplayProperties */
  /* SDL_PropertiesID SDL_GetDisplayProperties(SDL_DisplayID displayID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplayProperties[1], ReturnTypes_SDL_GetDisplayProperties[1];
  ParamTypes_SDL_GetDisplayProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplayProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplayProperties, 1, ReturnTypes_SDL_GetDisplayProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplayProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplayProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplayProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplayName */
  /* const char * SDL_GetDisplayName(SDL_DisplayID displayID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplayName[1], ReturnTypes_SDL_GetDisplayName[1];
  ParamTypes_SDL_GetDisplayName[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplayName[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplayName, 1, ReturnTypes_SDL_GetDisplayName, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplayName"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplayName, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplayName */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplayBounds */
  /* bool SDL_GetDisplayBounds(SDL_DisplayID displayID, SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplayBounds[2], ReturnTypes_SDL_GetDisplayBounds[1];
  ParamTypes_SDL_GetDisplayBounds[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDisplayBounds[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplayBounds[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplayBounds, 2, ReturnTypes_SDL_GetDisplayBounds, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplayBounds"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplayBounds, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplayBounds */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplayUsableBounds */
  /* bool SDL_GetDisplayUsableBounds(SDL_DisplayID displayID, SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplayUsableBounds[2], ReturnTypes_SDL_GetDisplayUsableBounds[1];
  ParamTypes_SDL_GetDisplayUsableBounds[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetDisplayUsableBounds[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplayUsableBounds[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplayUsableBounds, 2, ReturnTypes_SDL_GetDisplayUsableBounds, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplayUsableBounds"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplayUsableBounds, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplayUsableBounds */

  /* EXPORT WasmEdgeSDL_SDL_GetNaturalDisplayOrientation */
  /* SDL_DisplayOrientation SDL_GetNaturalDisplayOrientation(SDL_DisplayID displayID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetNaturalDisplayOrientation[1], ReturnTypes_SDL_GetNaturalDisplayOrientation[1];
  ParamTypes_SDL_GetNaturalDisplayOrientation[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetNaturalDisplayOrientation[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetNaturalDisplayOrientation, 1, ReturnTypes_SDL_GetNaturalDisplayOrientation, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetNaturalDisplayOrientation"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetNaturalDisplayOrientation, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetNaturalDisplayOrientation */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentDisplayOrientation */
  /* SDL_DisplayOrientation SDL_GetCurrentDisplayOrientation(SDL_DisplayID displayID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentDisplayOrientation[1], ReturnTypes_SDL_GetCurrentDisplayOrientation[1];
  ParamTypes_SDL_GetCurrentDisplayOrientation[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCurrentDisplayOrientation[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentDisplayOrientation, 1, ReturnTypes_SDL_GetCurrentDisplayOrientation, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentDisplayOrientation"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentDisplayOrientation, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentDisplayOrientation */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplayContentScale */
  /* float SDL_GetDisplayContentScale(SDL_DisplayID displayID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplayContentScale[1], ReturnTypes_SDL_GetDisplayContentScale[1];
  ParamTypes_SDL_GetDisplayContentScale[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplayContentScale[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplayContentScale, 1, ReturnTypes_SDL_GetDisplayContentScale, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplayContentScale"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplayContentScale, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplayContentScale */

  /* EXPORT WasmEdgeSDL_SDL_GetFullscreenDisplayModes */
  /* SDL_DisplayMode ** SDL_GetFullscreenDisplayModes(SDL_DisplayID displayID, int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetFullscreenDisplayModes[2], ReturnTypes_SDL_GetFullscreenDisplayModes[1];
  ParamTypes_SDL_GetFullscreenDisplayModes[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetFullscreenDisplayModes[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetFullscreenDisplayModes[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetFullscreenDisplayModes, 2, ReturnTypes_SDL_GetFullscreenDisplayModes, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetFullscreenDisplayModes"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetFullscreenDisplayModes, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetFullscreenDisplayModes */

  /* EXPORT WasmEdgeSDL_SDL_GetClosestFullscreenDisplayMode */
  /* bool SDL_GetClosestFullscreenDisplayMode(SDL_DisplayID displayID, int w, int h, float refresh_rate, bool include_high_density_modes, SDL_DisplayMode *closest) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetClosestFullscreenDisplayMode[6], ReturnTypes_SDL_GetClosestFullscreenDisplayMode[1];
  ParamTypes_SDL_GetClosestFullscreenDisplayMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetClosestFullscreenDisplayMode[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetClosestFullscreenDisplayMode[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetClosestFullscreenDisplayMode[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetClosestFullscreenDisplayMode[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetClosestFullscreenDisplayMode[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetClosestFullscreenDisplayMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetClosestFullscreenDisplayMode, 6, ReturnTypes_SDL_GetClosestFullscreenDisplayMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetClosestFullscreenDisplayMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetClosestFullscreenDisplayMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetClosestFullscreenDisplayMode */

  /* EXPORT WasmEdgeSDL_SDL_GetDesktopDisplayMode */
  /* const SDL_DisplayMode * SDL_GetDesktopDisplayMode(SDL_DisplayID displayID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDesktopDisplayMode[1], ReturnTypes_SDL_GetDesktopDisplayMode[1];
  ParamTypes_SDL_GetDesktopDisplayMode[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDesktopDisplayMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDesktopDisplayMode, 1, ReturnTypes_SDL_GetDesktopDisplayMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDesktopDisplayMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDesktopDisplayMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDesktopDisplayMode */

  /* EXPORT WasmEdgeSDL_SDL_GetCurrentDisplayMode */
  /* const SDL_DisplayMode * SDL_GetCurrentDisplayMode(SDL_DisplayID displayID) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetCurrentDisplayMode[1], ReturnTypes_SDL_GetCurrentDisplayMode[1];
  ParamTypes_SDL_GetCurrentDisplayMode[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetCurrentDisplayMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetCurrentDisplayMode, 1, ReturnTypes_SDL_GetCurrentDisplayMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetCurrentDisplayMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetCurrentDisplayMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetCurrentDisplayMode */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplayForPoint */
  /* SDL_DisplayID SDL_GetDisplayForPoint(const SDL_Point *point) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplayForPoint[1], ReturnTypes_SDL_GetDisplayForPoint[1];
  ParamTypes_SDL_GetDisplayForPoint[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplayForPoint[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplayForPoint, 1, ReturnTypes_SDL_GetDisplayForPoint, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplayForPoint"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplayForPoint, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplayForPoint */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplayForRect */
  /* SDL_DisplayID SDL_GetDisplayForRect(const SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplayForRect[1], ReturnTypes_SDL_GetDisplayForRect[1];
  ParamTypes_SDL_GetDisplayForRect[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplayForRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplayForRect, 1, ReturnTypes_SDL_GetDisplayForRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplayForRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplayForRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplayForRect */

  /* EXPORT WasmEdgeSDL_SDL_GetDisplayForWindow */
  /* SDL_DisplayID SDL_GetDisplayForWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetDisplayForWindow[1], ReturnTypes_SDL_GetDisplayForWindow[1];
  ParamTypes_SDL_GetDisplayForWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetDisplayForWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetDisplayForWindow, 1, ReturnTypes_SDL_GetDisplayForWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetDisplayForWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetDisplayForWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetDisplayForWindow */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowPixelDensity */
  /* float SDL_GetWindowPixelDensity(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowPixelDensity[1], ReturnTypes_SDL_GetWindowPixelDensity[1];
  ParamTypes_SDL_GetWindowPixelDensity[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowPixelDensity[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowPixelDensity, 1, ReturnTypes_SDL_GetWindowPixelDensity, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowPixelDensity"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowPixelDensity, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowPixelDensity */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowDisplayScale */
  /* float SDL_GetWindowDisplayScale(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowDisplayScale[1], ReturnTypes_SDL_GetWindowDisplayScale[1];
  ParamTypes_SDL_GetWindowDisplayScale[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowDisplayScale[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowDisplayScale, 1, ReturnTypes_SDL_GetWindowDisplayScale, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowDisplayScale"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowDisplayScale, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowDisplayScale */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowFullscreenMode */
  /* bool SDL_SetWindowFullscreenMode(SDL_Window *window, const SDL_DisplayMode *mode) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowFullscreenMode[2], ReturnTypes_SDL_SetWindowFullscreenMode[1];
  ParamTypes_SDL_SetWindowFullscreenMode[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowFullscreenMode[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowFullscreenMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowFullscreenMode, 2, ReturnTypes_SDL_SetWindowFullscreenMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowFullscreenMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowFullscreenMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowFullscreenMode */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowFullscreenMode */
  /* const SDL_DisplayMode * SDL_GetWindowFullscreenMode(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowFullscreenMode[1], ReturnTypes_SDL_GetWindowFullscreenMode[1];
  ParamTypes_SDL_GetWindowFullscreenMode[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowFullscreenMode[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowFullscreenMode, 1, ReturnTypes_SDL_GetWindowFullscreenMode, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowFullscreenMode"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowFullscreenMode, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowFullscreenMode */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowICCProfile */
  /* void * SDL_GetWindowICCProfile(SDL_Window *window, size_t *size) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowICCProfile[2], ReturnTypes_SDL_GetWindowICCProfile[1];
  ParamTypes_SDL_GetWindowICCProfile[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowICCProfile[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowICCProfile[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowICCProfile, 2, ReturnTypes_SDL_GetWindowICCProfile, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowICCProfile"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowICCProfile, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowICCProfile */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowPixelFormat */
  /* SDL_PixelFormat SDL_GetWindowPixelFormat(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowPixelFormat[1], ReturnTypes_SDL_GetWindowPixelFormat[1];
  ParamTypes_SDL_GetWindowPixelFormat[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowPixelFormat[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowPixelFormat, 1, ReturnTypes_SDL_GetWindowPixelFormat, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowPixelFormat"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowPixelFormat, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowPixelFormat */

  /* EXPORT WasmEdgeSDL_SDL_GetWindows */
  /* SDL_Window ** SDL_GetWindows(int *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindows[1], ReturnTypes_SDL_GetWindows[1];
  ParamTypes_SDL_GetWindows[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindows[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindows, 1, ReturnTypes_SDL_GetWindows, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindows"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindows, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindows */

  /* EXPORT WasmEdgeSDL_SDL_CreateWindow */
  /* SDL_Window * SDL_CreateWindow(const char *title, int w, int h, SDL_WindowFlags flags) */
  WasmEdge_ValType ParamTypes_SDL_CreateWindow[4], ReturnTypes_SDL_CreateWindow[1];
  ParamTypes_SDL_CreateWindow[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateWindow[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateWindow[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreateWindow[3] = WasmEdge_ValTypeGenI64();
  ReturnTypes_SDL_CreateWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateWindow, 4, ReturnTypes_SDL_CreateWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateWindow */

  /* EXPORT WasmEdgeSDL_SDL_CreatePopupWindow */
  /* SDL_Window * SDL_CreatePopupWindow(SDL_Window *parent, int offset_x, int offset_y, int w, int h, SDL_WindowFlags flags) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreatePopupWindow[6], ReturnTypes_SDL_CreatePopupWindow[1];
  ParamTypes_SDL_CreatePopupWindow[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreatePopupWindow[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreatePopupWindow[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreatePopupWindow[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreatePopupWindow[4] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_CreatePopupWindow[5] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreatePopupWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreatePopupWindow, 6, ReturnTypes_SDL_CreatePopupWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreatePopupWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreatePopupWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreatePopupWindow */

  /* EXPORT WasmEdgeSDL_SDL_CreateWindowWithProperties */
  /* SDL_Window * SDL_CreateWindowWithProperties(SDL_PropertiesID props) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_CreateWindowWithProperties[1], ReturnTypes_SDL_CreateWindowWithProperties[1];
  ParamTypes_SDL_CreateWindowWithProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_CreateWindowWithProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_CreateWindowWithProperties, 1, ReturnTypes_SDL_CreateWindowWithProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_CreateWindowWithProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_CreateWindowWithProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_CreateWindowWithProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowID */
  /* SDL_WindowID SDL_GetWindowID(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowID[1], ReturnTypes_SDL_GetWindowID[1];
  ParamTypes_SDL_GetWindowID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowID, 1, ReturnTypes_SDL_GetWindowID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowID */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowFromID */
  /* SDL_Window * SDL_GetWindowFromID(SDL_WindowID id) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowFromID[1], ReturnTypes_SDL_GetWindowFromID[1];
  ParamTypes_SDL_GetWindowFromID[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowFromID[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowFromID, 1, ReturnTypes_SDL_GetWindowFromID, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowFromID"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowFromID, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowFromID */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowParent */
  /* SDL_Window * SDL_GetWindowParent(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowParent[1], ReturnTypes_SDL_GetWindowParent[1];
  ParamTypes_SDL_GetWindowParent[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowParent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowParent, 1, ReturnTypes_SDL_GetWindowParent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowParent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowParent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowParent */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowProperties */
  /* SDL_PropertiesID SDL_GetWindowProperties(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowProperties[1], ReturnTypes_SDL_GetWindowProperties[1];
  ParamTypes_SDL_GetWindowProperties[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowProperties[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowProperties, 1, ReturnTypes_SDL_GetWindowProperties, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowProperties"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowProperties, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowProperties */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowFlags */
  /* SDL_WindowFlags SDL_GetWindowFlags(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowFlags[1], ReturnTypes_SDL_GetWindowFlags[1];
  ParamTypes_SDL_GetWindowFlags[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowFlags[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowFlags, 1, ReturnTypes_SDL_GetWindowFlags, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowFlags"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowFlags, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowFlags */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowTitle */
  /* bool SDL_SetWindowTitle(SDL_Window *window, const char *title) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowTitle[2], ReturnTypes_SDL_SetWindowTitle[1];
  ParamTypes_SDL_SetWindowTitle[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowTitle[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowTitle[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowTitle, 2, ReturnTypes_SDL_SetWindowTitle, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowTitle"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowTitle, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowTitle */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowTitle */
  /* const char * SDL_GetWindowTitle(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowTitle[1], ReturnTypes_SDL_GetWindowTitle[1];
  ParamTypes_SDL_GetWindowTitle[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowTitle[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowTitle, 1, ReturnTypes_SDL_GetWindowTitle, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowTitle"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowTitle, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowTitle */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowIcon */
  /* bool SDL_SetWindowIcon(SDL_Window *window, SDL_Surface *icon) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowIcon[2], ReturnTypes_SDL_SetWindowIcon[1];
  ParamTypes_SDL_SetWindowIcon[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowIcon[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowIcon[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowIcon, 2, ReturnTypes_SDL_SetWindowIcon, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowIcon"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowIcon, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowIcon */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowPosition */
  /* bool SDL_SetWindowPosition(SDL_Window *window, int x, int y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowPosition[3], ReturnTypes_SDL_SetWindowPosition[1];
  ParamTypes_SDL_SetWindowPosition[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowPosition[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowPosition[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowPosition[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowPosition, 3, ReturnTypes_SDL_SetWindowPosition, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowPosition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowPosition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowPosition */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowPosition */
  /* bool SDL_GetWindowPosition(SDL_Window *window, int *x, int *y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowPosition[3], ReturnTypes_SDL_GetWindowPosition[1];
  ParamTypes_SDL_GetWindowPosition[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowPosition[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowPosition[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowPosition[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowPosition, 3, ReturnTypes_SDL_GetWindowPosition, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowPosition"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowPosition, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowPosition */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowSize */
  /* bool SDL_SetWindowSize(SDL_Window *window, int w, int h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowSize[3], ReturnTypes_SDL_SetWindowSize[1];
  ParamTypes_SDL_SetWindowSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowSize, 3, ReturnTypes_SDL_SetWindowSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowSize */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowSize */
  /* bool SDL_GetWindowSize(SDL_Window *window, int *w, int *h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowSize[3], ReturnTypes_SDL_GetWindowSize[1];
  ParamTypes_SDL_GetWindowSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowSize, 3, ReturnTypes_SDL_GetWindowSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowSize */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowSafeArea */
  /* bool SDL_GetWindowSafeArea(SDL_Window *window, SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowSafeArea[2], ReturnTypes_SDL_GetWindowSafeArea[1];
  ParamTypes_SDL_GetWindowSafeArea[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowSafeArea[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowSafeArea[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowSafeArea, 2, ReturnTypes_SDL_GetWindowSafeArea, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowSafeArea"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowSafeArea, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowSafeArea */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowAspectRatio */
  /* bool SDL_SetWindowAspectRatio(SDL_Window *window, float min_aspect, float max_aspect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowAspectRatio[3], ReturnTypes_SDL_SetWindowAspectRatio[1];
  ParamTypes_SDL_SetWindowAspectRatio[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowAspectRatio[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowAspectRatio[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowAspectRatio[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowAspectRatio, 3, ReturnTypes_SDL_SetWindowAspectRatio, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowAspectRatio"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowAspectRatio, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowAspectRatio */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowAspectRatio */
  /* bool SDL_GetWindowAspectRatio(SDL_Window *window, float *min_aspect, float *max_aspect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowAspectRatio[3], ReturnTypes_SDL_GetWindowAspectRatio[1];
  ParamTypes_SDL_GetWindowAspectRatio[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowAspectRatio[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowAspectRatio[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowAspectRatio[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowAspectRatio, 3, ReturnTypes_SDL_GetWindowAspectRatio, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowAspectRatio"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowAspectRatio, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowAspectRatio */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowBordersSize */
  /* bool SDL_GetWindowBordersSize(SDL_Window *window, int *top, int *left, int *bottom, int *right) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowBordersSize[5], ReturnTypes_SDL_GetWindowBordersSize[1];
  ParamTypes_SDL_GetWindowBordersSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowBordersSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowBordersSize[2] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowBordersSize[3] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowBordersSize[4] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowBordersSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowBordersSize, 5, ReturnTypes_SDL_GetWindowBordersSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowBordersSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowBordersSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowBordersSize */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowSizeInPixels */
  /* bool SDL_GetWindowSizeInPixels(SDL_Window *window, int *w, int *h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowSizeInPixels[3], ReturnTypes_SDL_GetWindowSizeInPixels[1];
  ParamTypes_SDL_GetWindowSizeInPixels[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowSizeInPixels[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowSizeInPixels[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowSizeInPixels[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowSizeInPixels, 3, ReturnTypes_SDL_GetWindowSizeInPixels, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowSizeInPixels"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowSizeInPixels, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowSizeInPixels */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowMinimumSize */
  /* bool SDL_SetWindowMinimumSize(SDL_Window *window, int min_w, int min_h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowMinimumSize[3], ReturnTypes_SDL_SetWindowMinimumSize[1];
  ParamTypes_SDL_SetWindowMinimumSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowMinimumSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowMinimumSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowMinimumSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowMinimumSize, 3, ReturnTypes_SDL_SetWindowMinimumSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowMinimumSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowMinimumSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowMinimumSize */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowMinimumSize */
  /* bool SDL_GetWindowMinimumSize(SDL_Window *window, int *w, int *h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowMinimumSize[3], ReturnTypes_SDL_GetWindowMinimumSize[1];
  ParamTypes_SDL_GetWindowMinimumSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowMinimumSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowMinimumSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowMinimumSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowMinimumSize, 3, ReturnTypes_SDL_GetWindowMinimumSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowMinimumSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowMinimumSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowMinimumSize */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowMaximumSize */
  /* bool SDL_SetWindowMaximumSize(SDL_Window *window, int max_w, int max_h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowMaximumSize[3], ReturnTypes_SDL_SetWindowMaximumSize[1];
  ParamTypes_SDL_SetWindowMaximumSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowMaximumSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowMaximumSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowMaximumSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowMaximumSize, 3, ReturnTypes_SDL_SetWindowMaximumSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowMaximumSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowMaximumSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowMaximumSize */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowMaximumSize */
  /* bool SDL_GetWindowMaximumSize(SDL_Window *window, int *w, int *h) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowMaximumSize[3], ReturnTypes_SDL_GetWindowMaximumSize[1];
  ParamTypes_SDL_GetWindowMaximumSize[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowMaximumSize[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowMaximumSize[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowMaximumSize[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowMaximumSize, 3, ReturnTypes_SDL_GetWindowMaximumSize, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowMaximumSize"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowMaximumSize, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowMaximumSize */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowBordered */
  /* bool SDL_SetWindowBordered(SDL_Window *window, bool bordered) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowBordered[2], ReturnTypes_SDL_SetWindowBordered[1];
  ParamTypes_SDL_SetWindowBordered[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowBordered[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowBordered[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowBordered, 2, ReturnTypes_SDL_SetWindowBordered, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowBordered"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowBordered, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowBordered */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowResizable */
  /* bool SDL_SetWindowResizable(SDL_Window *window, bool resizable) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowResizable[2], ReturnTypes_SDL_SetWindowResizable[1];
  ParamTypes_SDL_SetWindowResizable[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowResizable[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowResizable[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowResizable, 2, ReturnTypes_SDL_SetWindowResizable, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowResizable"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowResizable, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowResizable */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowAlwaysOnTop */
  /* bool SDL_SetWindowAlwaysOnTop(SDL_Window *window, bool on_top) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowAlwaysOnTop[2], ReturnTypes_SDL_SetWindowAlwaysOnTop[1];
  ParamTypes_SDL_SetWindowAlwaysOnTop[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowAlwaysOnTop[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowAlwaysOnTop[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowAlwaysOnTop, 2, ReturnTypes_SDL_SetWindowAlwaysOnTop, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowAlwaysOnTop"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowAlwaysOnTop, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowAlwaysOnTop */

  /* EXPORT WasmEdgeSDL_SDL_ShowWindow */
  /* bool SDL_ShowWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowWindow[1], ReturnTypes_SDL_ShowWindow[1];
  ParamTypes_SDL_ShowWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ShowWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowWindow, 1, ReturnTypes_SDL_ShowWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowWindow */

  /* EXPORT WasmEdgeSDL_SDL_HideWindow */
  /* bool SDL_HideWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_HideWindow[1], ReturnTypes_SDL_HideWindow[1];
  ParamTypes_SDL_HideWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_HideWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_HideWindow, 1, ReturnTypes_SDL_HideWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_HideWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_HideWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_HideWindow */

  /* EXPORT WasmEdgeSDL_SDL_RaiseWindow */
  /* bool SDL_RaiseWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RaiseWindow[1], ReturnTypes_SDL_RaiseWindow[1];
  ParamTypes_SDL_RaiseWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RaiseWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RaiseWindow, 1, ReturnTypes_SDL_RaiseWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RaiseWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RaiseWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RaiseWindow */

  /* EXPORT WasmEdgeSDL_SDL_MaximizeWindow */
  /* bool SDL_MaximizeWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MaximizeWindow[1], ReturnTypes_SDL_MaximizeWindow[1];
  ParamTypes_SDL_MaximizeWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_MaximizeWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MaximizeWindow, 1, ReturnTypes_SDL_MaximizeWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MaximizeWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MaximizeWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MaximizeWindow */

  /* EXPORT WasmEdgeSDL_SDL_MinimizeWindow */
  /* bool SDL_MinimizeWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_MinimizeWindow[1], ReturnTypes_SDL_MinimizeWindow[1];
  ParamTypes_SDL_MinimizeWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_MinimizeWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_MinimizeWindow, 1, ReturnTypes_SDL_MinimizeWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_MinimizeWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_MinimizeWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_MinimizeWindow */

  /* EXPORT WasmEdgeSDL_SDL_RestoreWindow */
  /* bool SDL_RestoreWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_RestoreWindow[1], ReturnTypes_SDL_RestoreWindow[1];
  ParamTypes_SDL_RestoreWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_RestoreWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_RestoreWindow, 1, ReturnTypes_SDL_RestoreWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_RestoreWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_RestoreWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_RestoreWindow */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowFullscreen */
  /* bool SDL_SetWindowFullscreen(SDL_Window *window, bool fullscreen) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowFullscreen[2], ReturnTypes_SDL_SetWindowFullscreen[1];
  ParamTypes_SDL_SetWindowFullscreen[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowFullscreen[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowFullscreen[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowFullscreen, 2, ReturnTypes_SDL_SetWindowFullscreen, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowFullscreen"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowFullscreen, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowFullscreen */

  /* EXPORT WasmEdgeSDL_SDL_SyncWindow */
  /* bool SDL_SyncWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SyncWindow[1], ReturnTypes_SDL_SyncWindow[1];
  ParamTypes_SDL_SyncWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SyncWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SyncWindow, 1, ReturnTypes_SDL_SyncWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SyncWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SyncWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SyncWindow */

  /* EXPORT WasmEdgeSDL_SDL_WindowHasSurface */
  /* bool SDL_WindowHasSurface(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_WindowHasSurface[1], ReturnTypes_SDL_WindowHasSurface[1];
  ParamTypes_SDL_WindowHasSurface[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_WindowHasSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_WindowHasSurface, 1, ReturnTypes_SDL_WindowHasSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_WindowHasSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_WindowHasSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_WindowHasSurface */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowSurface */
  /* SDL_Surface * SDL_GetWindowSurface(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowSurface[1], ReturnTypes_SDL_GetWindowSurface[1];
  ParamTypes_SDL_GetWindowSurface[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowSurface, 1, ReturnTypes_SDL_GetWindowSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowSurface */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowSurfaceVSync */
  /* bool SDL_SetWindowSurfaceVSync(SDL_Window *window, int vsync) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowSurfaceVSync[2], ReturnTypes_SDL_SetWindowSurfaceVSync[1];
  ParamTypes_SDL_SetWindowSurfaceVSync[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowSurfaceVSync[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowSurfaceVSync[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowSurfaceVSync, 2, ReturnTypes_SDL_SetWindowSurfaceVSync, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowSurfaceVSync"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowSurfaceVSync, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowSurfaceVSync */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowSurfaceVSync */
  /* bool SDL_GetWindowSurfaceVSync(SDL_Window *window, int *vsync) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowSurfaceVSync[2], ReturnTypes_SDL_GetWindowSurfaceVSync[1];
  ParamTypes_SDL_GetWindowSurfaceVSync[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GetWindowSurfaceVSync[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowSurfaceVSync[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowSurfaceVSync, 2, ReturnTypes_SDL_GetWindowSurfaceVSync, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowSurfaceVSync"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowSurfaceVSync, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowSurfaceVSync */

  /* EXPORT WasmEdgeSDL_SDL_UpdateWindowSurface */
  /* bool SDL_UpdateWindowSurface(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UpdateWindowSurface[1], ReturnTypes_SDL_UpdateWindowSurface[1];
  ParamTypes_SDL_UpdateWindowSurface[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_UpdateWindowSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UpdateWindowSurface, 1, ReturnTypes_SDL_UpdateWindowSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UpdateWindowSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UpdateWindowSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UpdateWindowSurface */

  /* EXPORT WasmEdgeSDL_SDL_UpdateWindowSurfaceRects */
  /* bool SDL_UpdateWindowSurfaceRects(SDL_Window *window, const SDL_Rect *rects, int numrects) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_UpdateWindowSurfaceRects[3], ReturnTypes_SDL_UpdateWindowSurfaceRects[1];
  ParamTypes_SDL_UpdateWindowSurfaceRects[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UpdateWindowSurfaceRects[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_UpdateWindowSurfaceRects[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_UpdateWindowSurfaceRects[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_UpdateWindowSurfaceRects, 3, ReturnTypes_SDL_UpdateWindowSurfaceRects, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_UpdateWindowSurfaceRects"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_UpdateWindowSurfaceRects, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_UpdateWindowSurfaceRects */

  /* EXPORT WasmEdgeSDL_SDL_DestroyWindowSurface */
  /* bool SDL_DestroyWindowSurface(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DestroyWindowSurface[1], ReturnTypes_SDL_DestroyWindowSurface[1];
  ParamTypes_SDL_DestroyWindowSurface[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_DestroyWindowSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyWindowSurface, 1, ReturnTypes_SDL_DestroyWindowSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyWindowSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyWindowSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyWindowSurface */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowKeyboardGrab */
  /* bool SDL_SetWindowKeyboardGrab(SDL_Window *window, bool grabbed) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowKeyboardGrab[2], ReturnTypes_SDL_SetWindowKeyboardGrab[1];
  ParamTypes_SDL_SetWindowKeyboardGrab[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowKeyboardGrab[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowKeyboardGrab[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowKeyboardGrab, 2, ReturnTypes_SDL_SetWindowKeyboardGrab, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowKeyboardGrab"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowKeyboardGrab, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowKeyboardGrab */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowMouseGrab */
  /* bool SDL_SetWindowMouseGrab(SDL_Window *window, bool grabbed) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowMouseGrab[2], ReturnTypes_SDL_SetWindowMouseGrab[1];
  ParamTypes_SDL_SetWindowMouseGrab[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowMouseGrab[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowMouseGrab[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowMouseGrab, 2, ReturnTypes_SDL_SetWindowMouseGrab, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowMouseGrab"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowMouseGrab, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowMouseGrab */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowKeyboardGrab */
  /* bool SDL_GetWindowKeyboardGrab(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowKeyboardGrab[1], ReturnTypes_SDL_GetWindowKeyboardGrab[1];
  ParamTypes_SDL_GetWindowKeyboardGrab[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowKeyboardGrab[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowKeyboardGrab, 1, ReturnTypes_SDL_GetWindowKeyboardGrab, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowKeyboardGrab"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowKeyboardGrab, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowKeyboardGrab */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowMouseGrab */
  /* bool SDL_GetWindowMouseGrab(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowMouseGrab[1], ReturnTypes_SDL_GetWindowMouseGrab[1];
  ParamTypes_SDL_GetWindowMouseGrab[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowMouseGrab[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowMouseGrab, 1, ReturnTypes_SDL_GetWindowMouseGrab, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowMouseGrab"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowMouseGrab, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowMouseGrab */

  /* EXPORT WasmEdgeSDL_SDL_GetGrabbedWindow */
  /* SDL_Window * SDL_GetGrabbedWindow(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetGrabbedWindow[1], ReturnTypes_SDL_GetGrabbedWindow[1];

  ReturnTypes_SDL_GetGrabbedWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetGrabbedWindow, 0, ReturnTypes_SDL_GetGrabbedWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetGrabbedWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetGrabbedWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetGrabbedWindow */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowMouseRect */
  /* bool SDL_SetWindowMouseRect(SDL_Window *window, const SDL_Rect *rect) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowMouseRect[2], ReturnTypes_SDL_SetWindowMouseRect[1];
  ParamTypes_SDL_SetWindowMouseRect[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowMouseRect[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowMouseRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowMouseRect, 2, ReturnTypes_SDL_SetWindowMouseRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowMouseRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowMouseRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowMouseRect */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowMouseRect */
  /* const SDL_Rect * SDL_GetWindowMouseRect(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowMouseRect[1], ReturnTypes_SDL_GetWindowMouseRect[1];
  ParamTypes_SDL_GetWindowMouseRect[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowMouseRect[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowMouseRect, 1, ReturnTypes_SDL_GetWindowMouseRect, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowMouseRect"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowMouseRect, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowMouseRect */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowOpacity */
  /* bool SDL_SetWindowOpacity(SDL_Window *window, float opacity) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowOpacity[2], ReturnTypes_SDL_SetWindowOpacity[1];
  ParamTypes_SDL_SetWindowOpacity[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowOpacity[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowOpacity[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowOpacity, 2, ReturnTypes_SDL_SetWindowOpacity, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowOpacity"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowOpacity, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowOpacity */

  /* EXPORT WasmEdgeSDL_SDL_GetWindowOpacity */
  /* float SDL_GetWindowOpacity(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GetWindowOpacity[1], ReturnTypes_SDL_GetWindowOpacity[1];
  ParamTypes_SDL_GetWindowOpacity[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GetWindowOpacity[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GetWindowOpacity, 1, ReturnTypes_SDL_GetWindowOpacity, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GetWindowOpacity"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GetWindowOpacity, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GetWindowOpacity */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowParent */
  /* bool SDL_SetWindowParent(SDL_Window *window, SDL_Window *parent) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowParent[2], ReturnTypes_SDL_SetWindowParent[1];
  ParamTypes_SDL_SetWindowParent[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowParent[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowParent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowParent, 2, ReturnTypes_SDL_SetWindowParent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowParent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowParent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowParent */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowModal */
  /* bool SDL_SetWindowModal(SDL_Window *window, bool modal) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowModal[2], ReturnTypes_SDL_SetWindowModal[1];
  ParamTypes_SDL_SetWindowModal[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowModal[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowModal[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowModal, 2, ReturnTypes_SDL_SetWindowModal, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowModal"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowModal, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowModal */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowFocusable */
  /* bool SDL_SetWindowFocusable(SDL_Window *window, bool focusable) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowFocusable[2], ReturnTypes_SDL_SetWindowFocusable[1];
  ParamTypes_SDL_SetWindowFocusable[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowFocusable[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowFocusable[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowFocusable, 2, ReturnTypes_SDL_SetWindowFocusable, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowFocusable"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowFocusable, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowFocusable */

  /* EXPORT WasmEdgeSDL_SDL_ShowWindowSystemMenu */
  /* bool SDL_ShowWindowSystemMenu(SDL_Window *window, int x, int y) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ShowWindowSystemMenu[3], ReturnTypes_SDL_ShowWindowSystemMenu[1];
  ParamTypes_SDL_ShowWindowSystemMenu[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowWindowSystemMenu[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_ShowWindowSystemMenu[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_ShowWindowSystemMenu[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ShowWindowSystemMenu, 3, ReturnTypes_SDL_ShowWindowSystemMenu, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ShowWindowSystemMenu"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ShowWindowSystemMenu, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ShowWindowSystemMenu */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowHitTest */
  /* bool SDL_SetWindowHitTest(SDL_Window *window, SDL_HitTest callback, void *callback_data) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowHitTest[3], ReturnTypes_SDL_SetWindowHitTest[1];
  ParamTypes_SDL_SetWindowHitTest[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowHitTest[1] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowHitTest[2] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowHitTest[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowHitTest, 3, ReturnTypes_SDL_SetWindowHitTest, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowHitTest"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowHitTest, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowHitTest */

  /* EXPORT WasmEdgeSDL_SDL_SetWindowShape */
  /* bool SDL_SetWindowShape(SDL_Window *window, SDL_Surface *shape) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_SetWindowShape[2], ReturnTypes_SDL_SetWindowShape[1];
  ParamTypes_SDL_SetWindowShape[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_SetWindowShape[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_SetWindowShape[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_SetWindowShape, 2, ReturnTypes_SDL_SetWindowShape, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_SetWindowShape"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_SetWindowShape, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_SetWindowShape */

  /* EXPORT WasmEdgeSDL_SDL_FlashWindow */
  /* bool SDL_FlashWindow(SDL_Window *window, SDL_FlashOperation operation) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_FlashWindow[2], ReturnTypes_SDL_FlashWindow[1];
  ParamTypes_SDL_FlashWindow[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_FlashWindow[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_FlashWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_FlashWindow, 2, ReturnTypes_SDL_FlashWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_FlashWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_FlashWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_FlashWindow */

  /* EXPORT WasmEdgeSDL_SDL_DestroyWindow */
  /* void SDL_DestroyWindow(SDL_Window *window) */
  WasmEdge_ValType ParamTypes_SDL_DestroyWindow[1], ReturnTypes_SDL_DestroyWindow[1];
  ParamTypes_SDL_DestroyWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DestroyWindow, 1, ReturnTypes_SDL_DestroyWindow, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DestroyWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DestroyWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DestroyWindow */

  /* EXPORT WasmEdgeSDL_SDL_ScreenSaverEnabled */
  /* bool SDL_ScreenSaverEnabled(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_ScreenSaverEnabled[1], ReturnTypes_SDL_ScreenSaverEnabled[1];

  ReturnTypes_SDL_ScreenSaverEnabled[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_ScreenSaverEnabled, 0, ReturnTypes_SDL_ScreenSaverEnabled, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_ScreenSaverEnabled"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_ScreenSaverEnabled, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_ScreenSaverEnabled */

  /* EXPORT WasmEdgeSDL_SDL_EnableScreenSaver */
  /* bool SDL_EnableScreenSaver(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EnableScreenSaver[1], ReturnTypes_SDL_EnableScreenSaver[1];

  ReturnTypes_SDL_EnableScreenSaver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EnableScreenSaver, 0, ReturnTypes_SDL_EnableScreenSaver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EnableScreenSaver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EnableScreenSaver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EnableScreenSaver */

  /* EXPORT WasmEdgeSDL_SDL_DisableScreenSaver */
  /* bool SDL_DisableScreenSaver(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_DisableScreenSaver[1], ReturnTypes_SDL_DisableScreenSaver[1];

  ReturnTypes_SDL_DisableScreenSaver[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_DisableScreenSaver, 0, ReturnTypes_SDL_DisableScreenSaver, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_DisableScreenSaver"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_DisableScreenSaver, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_DisableScreenSaver */

  /* EXPORT WasmEdgeSDL_SDL_GL_LoadLibrary */
  /* bool SDL_GL_LoadLibrary(const char *path) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_LoadLibrary[1], ReturnTypes_SDL_GL_LoadLibrary[1];
  ParamTypes_SDL_GL_LoadLibrary[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_LoadLibrary[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_LoadLibrary, 1, ReturnTypes_SDL_GL_LoadLibrary, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_LoadLibrary"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_LoadLibrary, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_LoadLibrary */

  /* EXPORT WasmEdgeSDL_SDL_GL_GetProcAddress */
  /* SDL_FunctionPointer SDL_GL_GetProcAddress(const char *proc) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_GetProcAddress[1], ReturnTypes_SDL_GL_GetProcAddress[1];
  ParamTypes_SDL_GL_GetProcAddress[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_GetProcAddress[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_GetProcAddress, 1, ReturnTypes_SDL_GL_GetProcAddress, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_GetProcAddress"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_GetProcAddress, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_GetProcAddress */

  /* EXPORT WasmEdgeSDL_SDL_EGL_GetProcAddress */
  /* SDL_FunctionPointer SDL_EGL_GetProcAddress(const char *proc) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EGL_GetProcAddress[1], ReturnTypes_SDL_EGL_GetProcAddress[1];
  ParamTypes_SDL_EGL_GetProcAddress[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_EGL_GetProcAddress[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EGL_GetProcAddress, 1, ReturnTypes_SDL_EGL_GetProcAddress, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EGL_GetProcAddress"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EGL_GetProcAddress, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EGL_GetProcAddress */

  /* EXPORT WasmEdgeSDL_SDL_GL_UnloadLibrary */
  /* void SDL_GL_UnloadLibrary(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_UnloadLibrary[1], ReturnTypes_SDL_GL_UnloadLibrary[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_UnloadLibrary, 0, ReturnTypes_SDL_GL_UnloadLibrary, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_UnloadLibrary"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_UnloadLibrary, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_UnloadLibrary */

  /* EXPORT WasmEdgeSDL_SDL_GL_ExtensionSupported */
  /* bool SDL_GL_ExtensionSupported(const char *extension) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_ExtensionSupported[1], ReturnTypes_SDL_GL_ExtensionSupported[1];
  ParamTypes_SDL_GL_ExtensionSupported[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_ExtensionSupported[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_ExtensionSupported, 1, ReturnTypes_SDL_GL_ExtensionSupported, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_ExtensionSupported"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_ExtensionSupported, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_ExtensionSupported */

  /* EXPORT WasmEdgeSDL_SDL_GL_ResetAttributes */
  /* void SDL_GL_ResetAttributes(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_ResetAttributes[1], ReturnTypes_SDL_GL_ResetAttributes[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_ResetAttributes, 0, ReturnTypes_SDL_GL_ResetAttributes, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_ResetAttributes"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_ResetAttributes, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_ResetAttributes */

  /* EXPORT WasmEdgeSDL_SDL_GL_SetAttribute */
  /* bool SDL_GL_SetAttribute(SDL_GLAttr attr, int value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_SetAttribute[2], ReturnTypes_SDL_GL_SetAttribute[1];
  ParamTypes_SDL_GL_SetAttribute[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GL_SetAttribute[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_SetAttribute[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_SetAttribute, 2, ReturnTypes_SDL_GL_SetAttribute, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_SetAttribute"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_SetAttribute, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_SetAttribute */

  /* EXPORT WasmEdgeSDL_SDL_GL_GetAttribute */
  /* bool SDL_GL_GetAttribute(SDL_GLAttr attr, int *value) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_GetAttribute[2], ReturnTypes_SDL_GL_GetAttribute[1];
  ParamTypes_SDL_GL_GetAttribute[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GL_GetAttribute[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_GetAttribute[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_GetAttribute, 2, ReturnTypes_SDL_GL_GetAttribute, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_GetAttribute"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_GetAttribute, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_GetAttribute */

  /* EXPORT WasmEdgeSDL_SDL_GL_CreateContext */
  /* SDL_GLContext SDL_GL_CreateContext(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_CreateContext[1], ReturnTypes_SDL_GL_CreateContext[1];
  ParamTypes_SDL_GL_CreateContext[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_CreateContext[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_CreateContext, 1, ReturnTypes_SDL_GL_CreateContext, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_CreateContext"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_CreateContext, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_CreateContext */

  /* EXPORT WasmEdgeSDL_SDL_GL_MakeCurrent */
  /* bool SDL_GL_MakeCurrent(SDL_Window *window, SDL_GLContext context) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_MakeCurrent[2], ReturnTypes_SDL_GL_MakeCurrent[1];
  ParamTypes_SDL_GL_MakeCurrent[0] = WasmEdge_ValTypeGenI32();
  ParamTypes_SDL_GL_MakeCurrent[1] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_MakeCurrent[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_MakeCurrent, 2, ReturnTypes_SDL_GL_MakeCurrent, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_MakeCurrent"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_MakeCurrent, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_MakeCurrent */

  /* EXPORT WasmEdgeSDL_SDL_GL_GetCurrentWindow */
  /* SDL_Window * SDL_GL_GetCurrentWindow(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_GetCurrentWindow[1], ReturnTypes_SDL_GL_GetCurrentWindow[1];

  ReturnTypes_SDL_GL_GetCurrentWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_GetCurrentWindow, 0, ReturnTypes_SDL_GL_GetCurrentWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_GetCurrentWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_GetCurrentWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_GetCurrentWindow */

  /* EXPORT WasmEdgeSDL_SDL_GL_GetCurrentContext */
  /* SDL_GLContext SDL_GL_GetCurrentContext(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_GetCurrentContext[1], ReturnTypes_SDL_GL_GetCurrentContext[1];

  ReturnTypes_SDL_GL_GetCurrentContext[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_GetCurrentContext, 0, ReturnTypes_SDL_GL_GetCurrentContext, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_GetCurrentContext"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_GetCurrentContext, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_GetCurrentContext */

  /* EXPORT WasmEdgeSDL_SDL_EGL_GetCurrentDisplay */
  /* SDL_EGLDisplay SDL_EGL_GetCurrentDisplay(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EGL_GetCurrentDisplay[1], ReturnTypes_SDL_EGL_GetCurrentDisplay[1];

  ReturnTypes_SDL_EGL_GetCurrentDisplay[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EGL_GetCurrentDisplay, 0, ReturnTypes_SDL_EGL_GetCurrentDisplay, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EGL_GetCurrentDisplay"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EGL_GetCurrentDisplay, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EGL_GetCurrentDisplay */

  /* EXPORT WasmEdgeSDL_SDL_EGL_GetCurrentConfig */
  /* SDL_EGLConfig SDL_EGL_GetCurrentConfig(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EGL_GetCurrentConfig[1], ReturnTypes_SDL_EGL_GetCurrentConfig[1];

  ReturnTypes_SDL_EGL_GetCurrentConfig[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EGL_GetCurrentConfig, 0, ReturnTypes_SDL_EGL_GetCurrentConfig, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EGL_GetCurrentConfig"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EGL_GetCurrentConfig, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EGL_GetCurrentConfig */

  /* EXPORT WasmEdgeSDL_SDL_EGL_GetWindowSurface */
  /* SDL_EGLSurface SDL_EGL_GetWindowSurface(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_EGL_GetWindowSurface[1], ReturnTypes_SDL_EGL_GetWindowSurface[1];
  ParamTypes_SDL_EGL_GetWindowSurface[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_EGL_GetWindowSurface[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_EGL_GetWindowSurface, 1, ReturnTypes_SDL_EGL_GetWindowSurface, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_EGL_GetWindowSurface"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_EGL_GetWindowSurface, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_EGL_GetWindowSurface */

  /* EXPORT WasmEdgeSDL_SDL_GL_SetSwapInterval */
  /* bool SDL_GL_SetSwapInterval(int interval) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_SetSwapInterval[1], ReturnTypes_SDL_GL_SetSwapInterval[1];
  ParamTypes_SDL_GL_SetSwapInterval[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_SetSwapInterval[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_SetSwapInterval, 1, ReturnTypes_SDL_GL_SetSwapInterval, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_SetSwapInterval"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_SetSwapInterval, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_SetSwapInterval */

  /* EXPORT WasmEdgeSDL_SDL_GL_GetSwapInterval */
  /* bool SDL_GL_GetSwapInterval(int *interval) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_GetSwapInterval[1], ReturnTypes_SDL_GL_GetSwapInterval[1];
  ParamTypes_SDL_GL_GetSwapInterval[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_GetSwapInterval[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_GetSwapInterval, 1, ReturnTypes_SDL_GL_GetSwapInterval, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_GetSwapInterval"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_GetSwapInterval, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_GetSwapInterval */

  /* EXPORT WasmEdgeSDL_SDL_GL_SwapWindow */
  /* bool SDL_GL_SwapWindow(SDL_Window *window) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_SwapWindow[1], ReturnTypes_SDL_GL_SwapWindow[1];
  ParamTypes_SDL_GL_SwapWindow[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_SwapWindow[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_SwapWindow, 1, ReturnTypes_SDL_GL_SwapWindow, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_SwapWindow"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_SwapWindow, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_SwapWindow */

  /* EXPORT WasmEdgeSDL_SDL_GL_DestroyContext */
  /* bool SDL_GL_DestroyContext(SDL_GLContext context) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_GL_DestroyContext[1], ReturnTypes_SDL_GL_DestroyContext[1];
  ParamTypes_SDL_GL_DestroyContext[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_GL_DestroyContext[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_GL_DestroyContext, 1, ReturnTypes_SDL_GL_DestroyContext, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_GL_DestroyContext"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_GL_DestroyContext, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_GL_DestroyContext */

  /* EXPORT WasmEdgeSDL_SDL_Vulkan_LoadLibrary */
  /* bool SDL_Vulkan_LoadLibrary(const char *path) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_Vulkan_LoadLibrary[1], ReturnTypes_SDL_Vulkan_LoadLibrary[1];
  ParamTypes_SDL_Vulkan_LoadLibrary[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_Vulkan_LoadLibrary[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Vulkan_LoadLibrary, 1, ReturnTypes_SDL_Vulkan_LoadLibrary, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Vulkan_LoadLibrary"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Vulkan_LoadLibrary, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Vulkan_LoadLibrary */

  /* EXPORT WasmEdgeSDL_SDL_Vulkan_GetVkGetInstanceProcAddr */
  /* SDL_FunctionPointer SDL_Vulkan_GetVkGetInstanceProcAddr(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_Vulkan_GetVkGetInstanceProcAddr[1], ReturnTypes_SDL_Vulkan_GetVkGetInstanceProcAddr[1];

  ReturnTypes_SDL_Vulkan_GetVkGetInstanceProcAddr[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Vulkan_GetVkGetInstanceProcAddr, 0, ReturnTypes_SDL_Vulkan_GetVkGetInstanceProcAddr, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Vulkan_GetVkGetInstanceProcAddr"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Vulkan_GetVkGetInstanceProcAddr, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Vulkan_GetVkGetInstanceProcAddr */

  /* EXPORT WasmEdgeSDL_SDL_Vulkan_UnloadLibrary */
  /* void SDL_Vulkan_UnloadLibrary(void) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_Vulkan_UnloadLibrary[1], ReturnTypes_SDL_Vulkan_UnloadLibrary[1];


  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Vulkan_UnloadLibrary, 0, ReturnTypes_SDL_Vulkan_UnloadLibrary, 0); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Vulkan_UnloadLibrary"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Vulkan_UnloadLibrary, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Vulkan_UnloadLibrary */

  /* EXPORT WasmEdgeSDL_SDL_Vulkan_GetInstanceExtensions */
  /* char const * const * SDL_Vulkan_GetInstanceExtensions(Uint32 *count) */
  /* TODO: Implement */
  WasmEdge_ValType ParamTypes_SDL_Vulkan_GetInstanceExtensions[1], ReturnTypes_SDL_Vulkan_GetInstanceExtensions[1];
  ParamTypes_SDL_Vulkan_GetInstanceExtensions[0] = WasmEdge_ValTypeGenI32();
  ReturnTypes_SDL_Vulkan_GetInstanceExtensions[0] = WasmEdge_ValTypeGenI32();
  FType = WasmEdge_FunctionTypeCreate(ParamTypes_SDL_Vulkan_GetInstanceExtensions, 1, ReturnTypes_SDL_Vulkan_GetInstanceExtensions, 1); 
  FuncName = WasmEdge_StringCreateByCString("SDL_Vulkan_GetInstanceExtensions"); 
  FuncCxt = WasmEdge_FunctionInstanceCreate(FType, WasmEdgeSDL_SDL_Vulkan_GetInstanceExtensions, NULL, 0);
  WasmEdge_ModuleInstanceAddFunction(Mod, FuncName, FuncCxt);
  WasmEdge_StringDelete(FuncName);
  /* END WasmEdgeSDL_SDL_Vulkan_GetInstanceExtensions */

  /* EXPORT_END */

  return Mod;
}
