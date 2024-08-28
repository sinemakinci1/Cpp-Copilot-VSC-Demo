#include "Calculator.h"
#include "user.h"
#include <iostream>

int main() {
    Calculator calculator;
    double num1, num2;
    char operation;

    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << "\n";

    User user;
    user.setName(name);

    std::cout << "Enter your company name: ";
    std::string company;
    std::cin >> company;
    user.setCompany(company);

    std::cout << "Welcome, " << user.getName() << " from " << user.getCompany() << "!\n";

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
