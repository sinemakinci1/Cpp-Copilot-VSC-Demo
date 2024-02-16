
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


    static double squareRoot(double num) {
        if(num < 0) {
            cerr << "Error! Square root of negative number is not allowed." << endl;
            return std::numeric_limits<double>::quiet_NaN();
        }
        return sqrt(num);
    }


};

