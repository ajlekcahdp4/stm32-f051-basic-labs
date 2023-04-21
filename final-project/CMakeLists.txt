cmake_minimum_required(VERSION 3.16)

set(PROJECT_SOURCES
    src/main.cc
)

add_executable(final-proj ${PROJECT_SOURCES})
target_include_directories(final-proj PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_COMMON_INCLUDE_DIR})
target_link_libraries(final-proj CMSIS::STM32::F051R8 )
stm32_print_size_of_target(final-proj)
stm32_generate_binary_file(final-proj)

add_custom_target(final-proj-flash COMMAND st-flash write final-proj.bin 0x08000000)
add_dependencies(final-proj-flash final-proj)