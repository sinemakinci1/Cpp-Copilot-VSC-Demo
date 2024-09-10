cmake_minimum_required(VERSION 3.21)

project(my-cmake-project)

//set Language standard to C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(calculator src/calculator.cpp src/main.cpp src/user.cpp)

enable_testing()
find_package(GTest CONFIG REQUIRED)

add_library(calculatorlib src/calculator.cpp)
add_executable(calculatortests src/test_calculator.cpp)

target_link_libraries(calculatortests calculatorlib GTest::gtest)

add_test(AllTestsInCalculator calculatorlib calculatortests)
