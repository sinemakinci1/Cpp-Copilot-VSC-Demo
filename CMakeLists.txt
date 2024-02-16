
cmake_minimum_required(VERSION 3.5)

project(my-cmake-project)

add_executable(main src/calculator.cpp)

include(GoogleTest)

enable_testing()
add_subdirectory(googletest)
include_directories(googletest/include)

add_executable(calculatortests src/test_main.cpp)

target_link_libraries(calculatortests PRIVATE gtest)

gtest_discover_tests(calculatortests)