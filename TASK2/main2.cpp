#include <iostream>
#include "E2.h"

int main() {
    int a, b;
    std::cout << "Enter two numbers : ";
    std::cin >> a >> b;

    // Swap without pointers or references
    std::cout << "Before swap : a = " << a << ", b = " << b << std::endl;
    swapWithoutPointersOrReferences(a, b);
    std::cout << "After swap : a = " << a << ", b = " << b << std::endl;
    // Swap with pointers
    swapWithPointers(&a, &b);
    // Swap with references
    std::cout << "After swap : a = " << a << ", b = " << b << std::endl;
    swapWithReferences(a, b);
    std::cout << "After swap : a = " << a << ", b = " << b << std::endl;
    return 0;
}