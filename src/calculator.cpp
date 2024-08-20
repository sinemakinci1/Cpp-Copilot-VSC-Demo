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

int main() {
    Calculator calculator;
    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (operation) {
    case '+':
        std::cout << "Result: " << calculator.add(num1, num2) << "\n";
        break;
    case '-':
        std::cout << "Result: " << calculator.subtract(num1, num2) << "\n";
        break;
    case '*':
        std::cout << "Result: " << calculator.multiply(num1, num2) << "\n";
        break;
    case '/':
        std::cout << "Result: " << calculator.divide(num1, num2) << "\n";
        break;
    default:
        std::cout << "Invalid operation!" << "\n";
    }

    return 0;
}