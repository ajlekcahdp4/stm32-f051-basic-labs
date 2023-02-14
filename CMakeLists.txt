cmake_minimum_required(VERSION 3.16)

set(CMAKE_GENERATOR "Unix Makefiles" CACHE INTERNAL "" FORCE)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/stm32-cmake/cmake/stm32_gcc.cmake)
set(CMAKE_COMMON_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/wrapper)

include_directories(${CMAKE_COMMON_INCLUDE_DIR})
project(mipt-rt-stm32-f0-labs C ASM CXX)

stm32_fetch_cmsis(F0)
stm32_fetch_cube(F0)

find_package(CMSIS COMPONENTS STM32F051R8 REQUIRED)

add_compile_options(-Wall -Wextra -fno-rtti -fno-exceptions)
add_link_options(-fno-rtti -fno-exceptions)

add_subdirectory(01-blink)