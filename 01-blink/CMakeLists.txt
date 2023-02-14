
cmake_minimum_required(VERSION 3.16)

project(01-blink C ASM CXX)

set(PROJECT_SOURCES
    src/main.cc
)

add_executable(01-blink ${PROJECT_SOURCES})
add_dependencies(01-blink stm32JL)
target_link_libraries(01-blink CMSIS::STM32::F051R8 )
stm32_print_size_of_target(01-blink)
stm32_generate_binary_file(01-blink)

add_custom_target(01-blink-flash COMMAND st-flash write 01-blink.bin 0x08000000)
add_dependencies(01-blink-flash 01-blink)