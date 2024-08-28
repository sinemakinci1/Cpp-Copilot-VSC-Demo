cmake_minimum_required(VERSION 3.21)
project(my-cmake-project)

set (CMAKE_AUTOMOC ON)
find_package(Qt5 COMPONENTS Widgets REQUIRED)
enable_testing()
find_package(GTest CONFIG REQUIRED)

add_executable(calculator src/calculator.cpp src/main.cpp src/CalculatorUI.cpp)

target_link_libraries(calculator Qt5::Widgets)

add_executable(calculatortests src/test_calculator.cpp src/calculator.cpp)

target_link_libraries(calculatortests GTest::gtest)

add_test(AllTestsInCalculator calculatortests)