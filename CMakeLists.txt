

cmake_minimum_required(VERSION 3.0)

project(my-cmake-project)

# add_executable(my-cmake-project src/main.cpp)

include(GoogleTest)
enable_testing()
add_subdirectory(googletest)
include_directories(googletest/include)

add_executable(tests src/test_main.cpp)

target_link_libraries(tests PRIVATE gtest)

gtest_discover_tests(tests)

