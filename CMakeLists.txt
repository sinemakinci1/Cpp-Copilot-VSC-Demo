cmake_minimum_required(VERSION 3.0)

project(my-cmake-project)

add_executable(my-cmake-project src/main.cpp)

include(CTest)

add_executable(calculatortests src/test_main.cpp)

add_test(NAME calculator COMMAND calculatortests)