#include <iostream>
#include <cassert>
#include <cmath>
#include "main.cpp"
#include <limits>

using namespace std;

int main() {
    // Test add()
    assert(Calculator::add(2, 3) == 5);
    assert(Calculator::add(-2, 3) == 1);
    assert(Calculator::add(0, 0) == 0);

    // Test subtract()
    assert(Calculator::subtract(5, 3) == 2);
    assert(Calculator::subtract(3, 5) == -2);
    assert(Calculator::subtract(0, 0) == 0);

    // Test multiply()
    assert(Calculator::multiply(2, 3) == 6);
    assert(Calculator::multiply(-2, 3) == -6);
    assert(Calculator::multiply(0, 5) == 0);

    // Test divide()
    assert(Calculator::divide(6, 3) == 2);
    // assert(Calculator::divide(6, 0) == std::numeric_limits<double>::quiet_NaN());
    assert(Calculator::divide(0, 5) == 0);

    
    cout << "All tests passed!" << endl;

    return 0;
}