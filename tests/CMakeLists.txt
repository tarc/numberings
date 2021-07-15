include(GoogleTest)

add_executable(
    tests
    ${CMAKE_CURRENT_SOURCE_DIR}/trivial.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/buffer.cpp)

target_link_libraries(tests PUBLIC numberings CONAN_PKG::gtest)

gtest_discover_tests(tests)
