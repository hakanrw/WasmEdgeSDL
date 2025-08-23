#include "WasmEdgeSDL_shim.h"
#include <SDL3/SDL.h>

/* int SDL_AddGamepadMapping(const char *mapping) */
WasmEdge_Result WasmEdgeSDL_SDL_AddGamepadMapping(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_AddGamepadMappingsFromIO(SDL_IOStream *src, bool closeio) */
WasmEdge_Result WasmEdgeSDL_SDL_AddGamepadMappingsFromIO(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_AddGamepadMappingsFromFile(const char *file) */
WasmEdge_Result WasmEdgeSDL_SDL_AddGamepadMappingsFromFile(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_ReloadGamepadMappings(void) */
WasmEdge_Result WasmEdgeSDL_SDL_ReloadGamepadMappings(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char ** SDL_GetGamepadMappings(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadMappings(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_GetGamepadMappingForGUID(SDL_GUID guid) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadMappingForGUID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_GetGamepadMapping(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadMapping(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetGamepadMapping(SDL_JoystickID instance_id, const char *mapping) */
WasmEdge_Result WasmEdgeSDL_SDL_SetGamepadMapping(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_HasGamepad(void) */
WasmEdge_Result WasmEdgeSDL_SDL_HasGamepad(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_JoystickID * SDL_GetGamepads(int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepads(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_IsGamepad(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_IsGamepad(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadNameForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadNameForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadPathForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadPathForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetGamepadPlayerIndexForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadPlayerIndexForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GUID SDL_GetGamepadGUIDForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadGUIDForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint16 SDL_GetGamepadVendorForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadVendorForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint16 SDL_GetGamepadProductForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadProductForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint16 SDL_GetGamepadProductVersionForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadProductVersionForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadType SDL_GetGamepadTypeForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadTypeForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadType SDL_GetRealGamepadTypeForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRealGamepadTypeForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* char * SDL_GetGamepadMappingForID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadMappingForID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Gamepad * SDL_OpenGamepad(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_OpenGamepad(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Gamepad * SDL_GetGamepadFromID(SDL_JoystickID instance_id) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadFromID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Gamepad * SDL_GetGamepadFromPlayerIndex(int player_index) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadFromPlayerIndex(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PropertiesID SDL_GetGamepadProperties(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadProperties(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_JoystickID SDL_GetGamepadID(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadID(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadName(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadName(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadPath(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadPath(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadType SDL_GetGamepadType(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadType(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadType SDL_GetRealGamepadType(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetRealGamepadType(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetGamepadPlayerIndex(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadPlayerIndex(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetGamepadPlayerIndex(SDL_Gamepad *gamepad, int player_index) */
WasmEdge_Result WasmEdgeSDL_SDL_SetGamepadPlayerIndex(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint16 SDL_GetGamepadVendor(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadVendor(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint16 SDL_GetGamepadProduct(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadProduct(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint16 SDL_GetGamepadProductVersion(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadProductVersion(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint16 SDL_GetGamepadFirmwareVersion(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadFirmwareVersion(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadSerial(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadSerial(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Uint64 SDL_GetGamepadSteamHandle(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadSteamHandle(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_JoystickConnectionState SDL_GetGamepadConnectionState(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadConnectionState(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_PowerState SDL_GetGamepadPowerInfo(SDL_Gamepad *gamepad, int *percent) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadPowerInfo(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GamepadConnected(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GamepadConnected(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_Joystick * SDL_GetGamepadJoystick(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadJoystick(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_SetGamepadEventsEnabled(bool enabled) */
WasmEdge_Result WasmEdgeSDL_SDL_SetGamepadEventsEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GamepadEventsEnabled(void) */
WasmEdge_Result WasmEdgeSDL_SDL_GamepadEventsEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadBinding ** SDL_GetGamepadBindings(SDL_Gamepad *gamepad, int *count) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadBindings(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_UpdateGamepads(void) */
WasmEdge_Result WasmEdgeSDL_SDL_UpdateGamepads(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadType SDL_GetGamepadTypeFromString(const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadTypeFromString(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadStringForType(SDL_GamepadType type) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadStringForType(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadAxis SDL_GetGamepadAxisFromString(const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadAxisFromString(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadStringForAxis(SDL_GamepadAxis axis) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadStringForAxis(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GamepadHasAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis) */
WasmEdge_Result WasmEdgeSDL_SDL_GamepadHasAxis(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* Sint16 SDL_GetGamepadAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadAxis(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadButton SDL_GetGamepadButtonFromString(const char *str) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadButtonFromString(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadStringForButton(SDL_GamepadButton button) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadStringForButton(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GamepadHasButton(SDL_Gamepad *gamepad, SDL_GamepadButton button) */
WasmEdge_Result WasmEdgeSDL_SDL_GamepadHasButton(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetGamepadButton(SDL_Gamepad *gamepad, SDL_GamepadButton button) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadButton(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadButtonLabel SDL_GetGamepadButtonLabelForType(SDL_GamepadType type, SDL_GamepadButton button) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadButtonLabelForType(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* SDL_GamepadButtonLabel SDL_GetGamepadButtonLabel(SDL_Gamepad *gamepad, SDL_GamepadButton button) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadButtonLabel(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetNumGamepadTouchpads(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetNumGamepadTouchpads(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* int SDL_GetNumGamepadTouchpadFingers(SDL_Gamepad *gamepad, int touchpad) */
WasmEdge_Result WasmEdgeSDL_SDL_GetNumGamepadTouchpadFingers(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetGamepadTouchpadFinger(SDL_Gamepad *gamepad, int touchpad, int finger, bool *down, float *x, float *y, float *pressure) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadTouchpadFinger(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GamepadHasSensor(SDL_Gamepad *gamepad, SDL_SensorType type) */
WasmEdge_Result WasmEdgeSDL_SDL_GamepadHasSensor(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetGamepadSensorEnabled(SDL_Gamepad *gamepad, SDL_SensorType type, bool enabled) */
WasmEdge_Result WasmEdgeSDL_SDL_SetGamepadSensorEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GamepadSensorEnabled(SDL_Gamepad *gamepad, SDL_SensorType type) */
WasmEdge_Result WasmEdgeSDL_SDL_GamepadSensorEnabled(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* float SDL_GetGamepadSensorDataRate(SDL_Gamepad *gamepad, SDL_SensorType type) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadSensorDataRate(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_GetGamepadSensorData(SDL_Gamepad *gamepad, SDL_SensorType type, float *data, int num_values) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadSensorData(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RumbleGamepad(SDL_Gamepad *gamepad, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms) */
WasmEdge_Result WasmEdgeSDL_SDL_RumbleGamepad(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_RumbleGamepadTriggers(SDL_Gamepad *gamepad, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms) */
WasmEdge_Result WasmEdgeSDL_SDL_RumbleGamepadTriggers(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SetGamepadLED(SDL_Gamepad *gamepad, Uint8 red, Uint8 green, Uint8 blue) */
WasmEdge_Result WasmEdgeSDL_SDL_SetGamepadLED(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* bool SDL_SendGamepadEffect(SDL_Gamepad *gamepad, const void *data, int size) */
WasmEdge_Result WasmEdgeSDL_SDL_SendGamepadEffect(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* void SDL_CloseGamepad(SDL_Gamepad *gamepad) */
WasmEdge_Result WasmEdgeSDL_SDL_CloseGamepad(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadAppleSFSymbolsNameForButton(SDL_Gamepad *gamepad, SDL_GamepadButton button) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadAppleSFSymbolsNameForButton(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

/* const char * SDL_GetGamepadAppleSFSymbolsNameForAxis(SDL_Gamepad *gamepad, SDL_GamepadAxis axis) */
WasmEdge_Result WasmEdgeSDL_SDL_GetGamepadAppleSFSymbolsNameForAxis(void *Data,
                            const WasmEdge_CallingFrameContext *CallFrameCxt,
                            const WasmEdge_Value *In, WasmEdge_Value *Out) {
  /* TODO: Implement */
  return WasmEdge_Result_Fail;
}

