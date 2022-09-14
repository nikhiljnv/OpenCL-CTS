set(MODULE_NAME PRINTF)

set(CMAKE_CXX_STANDARD 11)

add_definitions(-D__USE_MSVC_STDIO)

set(${MODULE_NAME}_SOURCES
         test_printf.cpp
         util_printf.cpp
         )

include(../CMakeCommon.txt)
