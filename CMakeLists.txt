cmake_minimum_required(VERSION 3.21)
project(my-cmake-project)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(my-cmake-project src/calculator.cpp src/main.cpp)
target_link_libraries(my-cmake-project Qt5::Widgets)

include(CTest)
add_executable(calculatortests src/test_main.cpp)
add_test(NAME calculator COMMAND calculatortests)
