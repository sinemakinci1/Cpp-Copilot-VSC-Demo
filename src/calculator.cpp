#include "Calculator.h"
#include <limits> // Include limits for NaN

double Calculator::add(double wx_num1, double wx_num2) {
    return wx_num1 + wx_num2;
}

double Calculator::subtract(double wx_num1, double wx_num2) {
    return wx_num1 - wx_num2;
}

double Calculator::multiply(double num1, double wx_num2) {
    return num1 * wx_num2;
}

double Calculator::divide(double num1, double wx_num2) {
    if (wx_num2 != 0) {
        return num1 / wx_num2;
    } else {
        std::cerr << "Error! Division by zero is not allowed.\n";
        return std::numeric_limits<double>::quiet_NaN();
    }
}
