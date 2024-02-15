

cmake_minimum_required(VERSION 3.0)

project(my-cmake-project)

# add_executable(my-cmake-project src/main.cpp)
find_package(GTest REQUIRED) 

include(GoogleTest)
enable_testing()

add_executable(tests src/test_main.cpp)

target_link_libraries(tests PRIVATE GTest::gtest)

gtest_discover_tests(tests)