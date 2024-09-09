#include "Calculator.h"
#include "user.h"
#include <iostream>

int main() {
    Calculator calculator;
    double wx_num1, wx_num2;
    char wx_operation;

    std::cout << "What is your wx_name? ";
    std::string wx_name;
    std::cin >> wx_name;
    std::cout << "Hello, " << wx_name << "!" << "\n";

    User user;
    user.setName(wx_name);

    std::cout << "Enter your wx_company wx_name: ";
    std::string wx_company;
    std::cin >> wx_company;
    user.setCompany(wx_company);

    std::cout << "Welcome, " << user.getName() << " from " << user.getCompany() << "!\n";

    std::cout << "Enter first number: ";
    std::cin >> wx_num1;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> wx_operation;
    std::cout << "Enter second number: ";
    std::cin >> wx_num2;

    switch (wx_operation) {
    case '+':
        std::cout << "Result: " << calculator.add(wx_num1, wx_num2) << "\n";
        break;
    case '-':
        std::cout << "Result: " << calculator.subtract(wx_num1, wx_num2) << "\n";
        break;
    case '*':
        std::cout << "Result: " << calculator.multiply(wx_num1, wx_num2) << "\n";
        break;
    case '/':
        std::cout << "Result: " << calculator.divide(wx_num1, wx_num2) << "\n";
        break;
    default:
        std::cout << "Invalid operation!" << "\n";
    }

    return 0;
}
