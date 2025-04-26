#include <iostream>

// Swap without pointers or references
void swapWithoutPointersOrReferences(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
// Swap with pointers
void swapWithPointers(int * a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Swap with references
void swapWithReferences(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
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

