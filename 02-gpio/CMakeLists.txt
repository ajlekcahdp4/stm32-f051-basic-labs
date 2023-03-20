cmake_minimum_required(VERSION 3.16)

set(PROJECT_SOURCES
    src/main.cc
)

add_executable(02-gpio ${PROJECT_SOURCES})
target_include_directories(02-gpio PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_COMMON_INCLUDE_DIR})
target_link_libraries(02-gpio CMSIS::STM32::F051R8 )
stm32_print_size_of_target(02-gpio)
stm32_generate_binary_file(02-gpio)

add_custom_target(02-gpio-flash COMMAND st-flash write 02-gpio.bin 0x08000000)
add_dependencies(02-gpio-flash 02-gpio)