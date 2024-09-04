#include <gtest/gtest.h>
#include <cmath>
#include "Calculator.h" // Include your Calculator class

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

void AlexSecretTest() {
    ASSERT_TRUE(std::isnan(Calculator::add(NAN, 1)));
    ASSERT_TRUE(std::isnan(Calculator::add(1, NAN)));
    ASSERT_TRUE(std::isnan(Calculator::divide(NAN, 1)));
    ASSERT_TRUE(std::isnan(Calculator::divide(1, 0)));
}

TEST(CalculatorTest, AlexSecretTest) {
    AlexSecretTest();
}

TEST(CalculatorTest, SquareRootTest) {
    ASSERT_EQ(Calculator::squareRoot(4), 2);
    ASSERT_EQ(Calculator::squareRoot(9), 3);
    ASSERT_EQ(Calculator::squareRoot(16), 4);
    ASSERT_EQ(Calculator::squareRoot(25), 5);
    ASSERT_EQ(Calculator::squareRoot(36), 6);
    ASSERT_EQ(Calculator::squareRoot(49), 7);
    ASSERT_EQ(Calculator::squareRoot(64), 8);
    ASSERT_EQ(Calculator::squareRoot(81), 9);
    ASSERT_EQ(Calculator::squareRoot(100), 10);
}

TEST(CalculatorTest, SquareRootNegativeTest) {
    ASSERT_TRUE(std::isnan(Calculator::squareRoot(-1)));
    ASSERT_TRUE(std::isnan(Calculator::squareRoot(-10)));
    ASSERT_TRUE(std::isnan(Calculator::squareRoot(-100)));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
