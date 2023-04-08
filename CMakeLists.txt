cmake_minimum_required(VERSION 3.16)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/stm32-cmake/cmake/stm32_gcc.cmake)
set(CMAKE_COMMON_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/wrapper)

include_directories(${CMAKE_COMMON_INCLUDE_DIR})
project(mipt-rt-stm32-f0-labs C ASM CXX)

stm32_fetch_cmsis(F0)
stm32_fetch_cube(F0)

set(CMAKE_CXX_STANDARD 23)

find_package(CMSIS COMPONENTS STM32F051R8 REQUIRED)

add_compile_options(-Wall -Wextra -Wno-volatile -fno-rtti -fexceptions -ffreestanding --specs=nosys.specs)
add_link_options(-fno-rtti -fexceptions -ffreestanding --specs=nosys.specs )
include_directories(include)

add_subdirectory(01-blink)
add_subdirectory(03-delay)
add_subdirectory(02-gpio)