cmake_minimum_required(VERSION 3.16)
project(numberings VERSION 0.1.0)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

configure_file(config.hpp.in config.hpp)

add_library(numberings INTERFACE)
target_include_directories(numberings INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include())
target_include_directories(numberings INTERFACE ${CMAKE_CURRENT_BINARY_DIR})

enable_testing()
add_subdirectory(tests)
