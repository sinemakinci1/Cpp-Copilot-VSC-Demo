#include <gtest/gtest.h>
#include <cmath>
#include "calculator.cpp" // Include your Calculator class

TEST(CalculatorTest, AddTest) {
    ASSERT_EQ(Calculator::add(1, 1), 2);
    ASSERT_EQ(Calculator::add(1, -1), 0);
    ASSERT_EQ(Calculator::add(1, 0), 1);
}

TEST(CalculatorTest, SubtractTest) {
    ASSERT_EQ(Calculator::subtract(5, 3), 2);
    ASSERT_EQ(Calculator::subtract(5, -3), 8);
    ASSERT_EQ(Calculator::subtract(5, 0), 5);
}

TEST(CalculatorTest, MultiplyTest) {
    ASSERT_EQ(Calculator::multiply(2, 3), 6);
    ASSERT_EQ(Calculator::multiply(2, -3), -6);
    ASSERT_EQ(Calculator::multiply(2, 0), 0);
}

TEST(CalculatorTest, DivideTest) {
    ASSERT_EQ(Calculator::divide(6, 3), 2);
    ASSERT_EQ(Calculator::divide(6, -3), -2);
    ASSERT_TRUE(std::isnan(Calculator::divide(6, 0)));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}