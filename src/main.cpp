// main.cpp
#include <iostream>
#include <cmath> // Include the cmath library for NaN
using namespace std;

class Calculator {
public:
    static double add(double num1, double num2) {
        double added_result = num1 + num2;
        return added_result;
    }

    static double subtract(double num1, double num2) {
        double subtracted_result = num1 - num2;
        return subtracted_result;
    }

    static double multiply(double num1, double num2) {
        double multiplied_result = num1 * num2;
        return multiplied_result;
    }

    static double divide(double num1, double num2) {
        double divided_result = 0;
        if (num2 != 0) {
            divided_result = num1 / num2;
            return divided_result;
        }
        else {
            cerr << "Error! Division by zero is not allowed." << endl;
            divided_result = std::numeric_limits<double>::quiet_NaN();
            return divided_result;
        }
    }

};



// int main() {
//     Calculator calculator;
//     double num1, num2;
//     char operation;

//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter operation (+, -, *, /): ";
//     cin >> operation;
//     cout << "Enter second number: ";
//     cin >> num2;

//     switch (operation) {
//     case '+':
//         cout << "Result: " << calculator.add(num1, num2) << endl;
//         break;
//     case '-':
//         cout << "Result: " << calculator.subtract(num1, num2) << endl;
//         break;
//     case '*':
//         cout << "Result: " << calculator.multiply(num1, num2) << endl;
//         break;
//     case '/':
//         cout << "Result: " << calculator.divide(num1, num2) << endl;
//         break;
//     default:
//         cout << "Invalid operation!" << endl;
//     }

//     return 0;
// }
