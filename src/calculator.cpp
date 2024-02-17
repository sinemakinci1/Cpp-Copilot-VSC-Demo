#include "Calculator.h"

int calc() {
    Calculator calculator;
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
    case '+':
        cout << "Result: " << calculator.add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << calculator.subtract(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << calculator.multiply(num1, num2) << endl;
        break;
    case '/':
        cout << "Result: " << calculator.divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operation!" << endl;
    }

    return 0;
}