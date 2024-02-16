#include <iostream>
#include <gtest/gtest.h>
#include "Calculator.h"

using namespace std;

TEST(CalculatorTest, AddTest) {
    EXPECT_EQ(Calculator::add(2, 3), 5);
    EXPECT_EQ(Calculator::add(-2, 3), 1);
    EXPECT_EQ(Calculator::add(0, 0), 0);
}

TEST(CalculatorTest, SubtractTest) {
    EXPECT_EQ(Calculator::subtract(5, 3), 2);
    EXPECT_EQ(Calculator::subtract(3, 5), -2);
    EXPECT_EQ(Calculator::subtract(0, 0), 0);
}

TEST(CalculatorTest, MultiplyTest) {
    EXPECT_EQ(Calculator::multiply(2, 3), 6);
    EXPECT_EQ(Calculator::multiply(-2, 3), -6);
    EXPECT_EQ(Calculator::multiply(0, 5), 0);
}

TEST(CalculatorTest, DivideTest) {
    EXPECT_EQ(Calculator::divide(6, 3), 2);
    EXPECT_EQ(Calculator::divide(0, 5), 0);
}


TEST(CalculatorTest, SquareRootTest) {
    EXPECT_EQ(Calculator::squareRoot(16), 4);
    EXPECT_EQ(Calculator::squareRoot(9), 3);
    EXPECT_EQ(Calculator::squareRoot(0), 0);
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}