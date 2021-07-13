cmake_minimum_required(VERSION 3.16)
project(numberings VERSION 0.1.0)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

include(CTest)
enable_testing()

add_executable(simple ${CMAKE_CURRENT_SOURCE_DIR}/tests/simple.cpp)
target_include_directories(simple PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_test(NAME simple
        COMMAND simple)
