#include <cassert>
#include <cmath>
#include <iostream> // Include the iostream header

#include "Calculator.h" // Include your Calculator class

using namespace std;

int main() {
    // Test add()
    Calculator calculator;
    assert(calculator.add(1, 1) == 2);
    assert(calculator.add(1, -1) == 0);
    assert(calculator.add(1, 0) == 1);

    // Test subtract()
    assert(calculator.subtract(5, 3) == 2);
    assert(calculator.subtract(5, -3) == 8);
    assert(calculator.subtract(5, 0) == 5);

    // Test multiply()
    assert(calculator.multiply(2, 3) == 6);
    assert(calculator.multiply(2, -3) == -6);
    assert(calculator.multiply(2, 0) == 0);

    // Test divide()
    assert(calculator.divide(6, 3) == 2);
    assert(calculator.divide(6, -3) == -2);
    assert(std::isnan(calculator.divide(6, 0)));

    cout << "All tests passed!\n"; // Remove the 'std::' prefix

}
