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
    if (num2 != 0) {
        return num1 / num2;
    } else {
        std::cerr << "Error! Division by zero is not allowed.\n";
        return std::numeric_limits<double>::quiet_NaN();
    }
}

double Calculator::squareRoot(double num) {
    if (num >= 0) {
        return sqrt(num);
    } else {
        std::cerr << "Error! Square root of a negative number is not a real number.\n";
        return std::numeric_limits<double>::quiet_NaN();
    }
}