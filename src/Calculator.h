#include <iostream>
#include <cmath> // Include the cmath library for NaN

class Calculator {
public:
    static double add(double num1, double num2) {
        return num1 + num2;
    }

    static double subtract(double num1, double num2) {
        return num1 - num2;
    }

    static double multiply(double num1, double num2) {
        return num1 * num2;
    }

    static double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error! Division by zero is not allowed.\n";
            return std::numeric_limits<double>::quiet_NaN();
        }
    }


};
