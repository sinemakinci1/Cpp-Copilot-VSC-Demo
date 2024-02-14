

cmake_minimum_required(VERSION 3.0)

project(my-cmake-project)

# add_executable(my-cmake-project src/main.cpp)

include(CTest)
enable_testing()
add_executable(tests src/test_main.cpp)

add_test(NAME calculatortests COMMAND tests)


