#include "Calculator.h"
#include <limits> // Include limits for NaN

double Calculator::add(double num1, double num2) {
    return num1 + num2;
}

double Calculator::subtract(double num1, double num2) {
    return num1 - num2;
}

double Calculator::multiply(double num1, double num2) {
    return num1 * num2;
}

double Calculator::divide(double num1, double num2) {
    double result;
    if (num2 != 0) {
        result = num1 / num2;
    } else {
        std::cerr << "Error! Division by zero is not allowed.\n";
        result = std::numeric_limits<double>::quiet_NaN();
    }
    return result;
}

double Calculator::squareRoot(double num) {
    double result;
myfunc(num, result);
    return result;
}

void Calculator::myfunc(double num, double &result)
{
    if (num >= 0) {
        result = sqrt(num);
    } else {
        std::cerr << "Error! Square root of a negative number is not a real number.\n";
        result = std::numeric_limits<double>::quiet_NaN();
    }
}

double Calculator::power(double base, double exponent) {
    return pow(base, exponent);
}