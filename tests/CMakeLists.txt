include(GoogleTest)

add_executable(trivial ${CMAKE_CURRENT_SOURCE_DIR}/trivial.cpp)
target_link_libraries(trivial PUBLIC numberings CONAN_PKG::gtest)

gtest_discover_tests(trivial)
