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

    static double square(double num) {
    return num * num;
}

static double squareRoot(double num) {
    if(num < 0) {
        cerr << "Error! Square root of negative number is not allowed." << endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
    return sqrt(num);
}

static double power(double base, double exponent) {
    return pow(base, exponent);
}

static double factorial(int num) {
    if(num < 0) {
        cerr << "Error! Factorial of negative number is not allowed." << endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
    double result = 1;
    for(int i = 1; i <= num; ++i)
        result *= i;
    return result;
}

static double log(double num) {
    if(num <= 0) {
        cerr << "Error! Logarithm of non-positive number is not allowed." << endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
    return log(num);
}

static double sin(double num) {
    return sin(num);
}

static double cos(double num) {
    return cos(num);
}

static double tan(double num) {
    return tan(num);
}

static double inverse(double num) {
    if(num == 0) {
        cerr << "Error! Division by zero is not allowed." << endl;
        return std::numeric_limits<double>::quiet_NaN();
    }
    return 1 / num;
}

static double percent(double num) {
    return num / 100;
}

static double abs(double num) {
    return abs(num);
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