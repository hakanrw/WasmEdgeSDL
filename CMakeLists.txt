cmake_minimum_required(VERSION 3.31)
project(wasmedgePluginWasmEdgeSDL)

set(WASMEDGE_LIB_DIR "" CACHE PATH "Directory containing WasmEdge libraries")
set(WASMEDGE_INCLUDE_DIR "" CACHE PATH "Directory containing WasmEdge headers")

# Search for the shared library in that directory
find_library(WASMEDGE_LIBRARY
    NAMES wasmedge
    PATHS ${WASMEDGE_LIB_DIR}
    NO_DEFAULT_PATH
)

if(NOT WASMEDGE_LIBRARY)
    message(FATAL_ERROR "Could not find WasmEdge library in ${WASMEDGE_LIB_DIR}")
endif()

# On Windows also search for the import lib (.lib)
find_library(WASMEDGE_IMPLIB
    NAMES wasmedge
    PATHS ${WASMEDGE_LIB_DIR}
    NO_DEFAULT_PATH
)

if(NOT WASMEDGE_IMPLIB)
    message(FATAL_ERROR "Could not find WasmEdge library in ${WASMEDGE_LIB_DIR}")
endif()

add_library(WasmEdge::wasmedge SHARED IMPORTED)
set_target_properties(WasmEdge::wasmedge PROPERTIES
    IMPORTED_LOCATION "${WASMEDGE_LIBRARY}"      # DLL/.so/.dylib
    IMPORTED_IMPLIB "${WASMEDGE_IMPLIB}"        # .lib (Windows only, ignored elsewhere)
    INTERFACE_INCLUDE_DIRECTORIES "${WASMEDGE_INCLUDE_DIR}"
)

find_package(SDL3 REQUIRED)

add_library(wasmedgePluginWasmEdgeSDL
  SHARED
  WasmEdgeSDL_module.c
  WasmEdgeSDL_map.c
  shim/WasmEdgeSDL.c
  shim/WasmEdgeSDL_assert.c
  shim/WasmEdgeSDL_asyncio.c
  shim/WasmEdgeSDL_atomic.c
  shim/WasmEdgeSDL_audio.c
  shim/WasmEdgeSDL_begin_code.c
  shim/WasmEdgeSDL_bits.c
  shim/WasmEdgeSDL_blendmode.c
  shim/WasmEdgeSDL_camera.c
  shim/WasmEdgeSDL_clipboard.c
  shim/WasmEdgeSDL_close_code.c
  shim/WasmEdgeSDL_copying.c
  shim/WasmEdgeSDL_cpuinfo.c
  shim/WasmEdgeSDL_dialog.c
  shim/WasmEdgeSDL_egl.c
  shim/WasmEdgeSDL_endian.c
  shim/WasmEdgeSDL_error.c
  shim/WasmEdgeSDL_events.c
  shim/WasmEdgeSDL_filesystem.c
  shim/WasmEdgeSDL_gamepad.c
  shim/WasmEdgeSDL_gpu.c
  shim/WasmEdgeSDL_guid.c
  shim/WasmEdgeSDL_haptic.c
  shim/WasmEdgeSDL_hidapi.c
  shim/WasmEdgeSDL_hints.c
  shim/WasmEdgeSDL_init.c
  shim/WasmEdgeSDL_intrin.c
  shim/WasmEdgeSDL_iostream.c
  shim/WasmEdgeSDL_joystick.c
  shim/WasmEdgeSDL_keyboard.c
  shim/WasmEdgeSDL_keycode.c
  shim/WasmEdgeSDL_loadso.c
  shim/WasmEdgeSDL_locale.c
  shim/WasmEdgeSDL_log.c
  shim/WasmEdgeSDL_main.c
  shim/WasmEdgeSDL_main_impl.c
  shim/WasmEdgeSDL_messagebox.c
  shim/WasmEdgeSDL_metal.c
  shim/WasmEdgeSDL_misc.c
  shim/WasmEdgeSDL_mouse.c
  shim/WasmEdgeSDL_mutex.c
  shim/WasmEdgeSDL_oldnames.c
  shim/WasmEdgeSDL_opengl.c
  shim/WasmEdgeSDL_opengles.c
  shim/WasmEdgeSDL_opengles2.c
  shim/WasmEdgeSDL_opengles2_gl2.c
  shim/WasmEdgeSDL_opengles2_gl2ext.c
  shim/WasmEdgeSDL_opengles2_gl2platform.c
  shim/WasmEdgeSDL_opengles2_khrplatform.c
  shim/WasmEdgeSDL_opengl_glext.c
  shim/WasmEdgeSDL_pen.c
  shim/WasmEdgeSDL_pixels.c
  shim/WasmEdgeSDL_platform.c
  shim/WasmEdgeSDL_platform_defines.c
  shim/WasmEdgeSDL_power.c
  shim/WasmEdgeSDL_process.c
  shim/WasmEdgeSDL_properties.c
  shim/WasmEdgeSDL_rect.c
  shim/WasmEdgeSDL_render.c
  shim/WasmEdgeSDL_revision.c
  shim/WasmEdgeSDL_scancode.c
  shim/WasmEdgeSDL_sensor.c
  shim/WasmEdgeSDL_shim.c
  shim/WasmEdgeSDL_stdinc.c
  shim/WasmEdgeSDL_storage.c
  shim/WasmEdgeSDL_surface.c
  shim/WasmEdgeSDL_system.c
  shim/WasmEdgeSDL_test.c
  shim/WasmEdgeSDL_test_assert.c
  shim/WasmEdgeSDL_test_common.c
  shim/WasmEdgeSDL_test_compare.c
  shim/WasmEdgeSDL_test_crc32.c
  shim/WasmEdgeSDL_test_font.c
  shim/WasmEdgeSDL_test_fuzzer.c
  shim/WasmEdgeSDL_test_harness.c
  shim/WasmEdgeSDL_test_log.c
  shim/WasmEdgeSDL_test_md5.c
  shim/WasmEdgeSDL_test_memory.c
  shim/WasmEdgeSDL_thread.c
  shim/WasmEdgeSDL_time.c
  shim/WasmEdgeSDL_timer.c
  shim/WasmEdgeSDL_touch.c
  shim/WasmEdgeSDL_tray.c
  shim/WasmEdgeSDL_version.c
  shim/WasmEdgeSDL_video.c
  shim/WasmEdgeSDL_vulkan.c
)

set_target_properties(wasmedgePluginWasmEdgeSDL PROPERTIES
  C_STANDARD 11
)

target_compile_options(wasmedgePluginWasmEdgeSDL
  PUBLIC
  -DWASMEDGE_PLUGIN
)

target_link_libraries(wasmedgePluginWasmEdgeSDL
  PRIVATE
  WasmEdge::wasmedge
  SDL3::SDL3
)

target_include_directories(wasmedgePluginWasmEdgeSDL
  PRIVATE
  ${CMAKE_SOURCE_DIR}
)

install(
  TARGETS wasmedgePluginWasmEdgeSDL
  DESTINATION ${CMAKE_INSTALL_LIBDIR}/wasmedge
)
