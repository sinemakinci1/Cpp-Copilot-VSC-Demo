#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <cmath> // Include the cmath library for NaN

class Calculator {
public:
    double add(double num1, double num2);
    double subtract(double num1, double num2);
    double multiply(double num1, double num2);
    double divide(double num1, double num2);
};

#endif // CALCULATOR_H