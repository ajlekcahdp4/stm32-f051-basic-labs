cmake_minimum_required(VERSION 3.16)

set(PROJECT_SOURCES
    src/main.cc
)

add_executable(03-delay ${PROJECT_SOURCES})
target_include_directories(03-delay PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_COMMON_INCLUDE_DIR})
target_link_libraries(03-delay CMSIS::STM32::F051R8 )
stm32_print_size_of_target(03-delay)
stm32_generate_binary_file(03-delay)

add_custom_target(03-delay-flash COMMAND st-flash write 03-delay.bin 0x08000000)
add_dependencies(03-delay-flash 03-delay)