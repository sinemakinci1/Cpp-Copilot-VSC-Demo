#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <cmath> // Include the cmath library for NaN

class Calculator {
public:
    static double add(double num1, double num2);
    static double subtract(double num1, double num2);
    static double multiply(double num1, double num2);
    static double divide(double num1, double num2);
};

#endif // CALCULATOR_H