#include <iostream>
#include "E1.h"



int main() {
    // a
    int a, b;
    std::cout << "Enter two numbers to multiply: ";
    std::cin >> a >> b;
    int result = multiply(a, b);
    std::cout << "Result: " << result << std::endl;

    // b
    double doubleResult;
    std::cout << "Enter two double numbers to multiply: ";
    double aDouble, bDouble;
    std::cin >> aDouble >> bDouble;
    doubleResult = multiply(aDouble, bDouble);
    std::cout << "Result: " << doubleResult << std::endl;

    // c
    std::cout << "Enter: ";
    int aInt;
    double bDouble2;
    bool flag;
    std::cin >> aInt >> bDouble2 >> flag;
    doubleResult = multiply(aInt, bDouble2, flag);
    std::cout << "Result: " << doubleResult << std::endl;

    return 0;
}
