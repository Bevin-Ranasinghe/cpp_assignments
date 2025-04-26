#include <iostream>

int main() {
    int x = 100;

    int* p1 = &x;   // p1 points to x
    int* p2 = p1;   // p2 is a shallow copy (points to the same memory as p1)

    std::cout << "Before modification:" << std::endl;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "*p1: " << *p1 << std::endl;
    std::cout << "*p2: " << *p2 << std::endl;

    // Modify value through p1
    *p1 = 200;

    std::cout << "\nAfter modifying = 200:" << std::endl;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "*p1: " << *p1 << std::endl;
    std::cout << "*p2: " << *p2 << std::endl;

    // Modify value through p2
    *p2 = 300;

    std::cout << "\nAfter modifying = 300:" << std::endl;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "*p1: " << *p1 << std::endl;
    std::cout << "*p2: " << *p2 << std::endl;

    return 0;
}
