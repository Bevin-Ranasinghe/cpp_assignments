#include <iostream>

int main() {
    int a = 100;       
    int& refA = a;     

    std::cout << "Initial value of a: " << a << std::endl;


    refA = 30;

    std::cout << "Value of a after modifying refA: " << a << std::endl;

    return 0;
}