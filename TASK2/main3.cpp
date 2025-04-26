#include <iostream>
#include "E3.h"

void calculate(float value1, float value2, char operation) {
    switch (operation) {
        case '+':
            std::cout << "Result: " << value1 + value2 << std::endl;
            break; 
        case '-':
            std::cout << "Result: " << value1 - value2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << value1 * value2 << std::endl;
            break;
        case '/':
            if (value2 != 0)
                std::cout << "Result: " << value1 / value2 << std::endl;
            else
                std::cout << "Division by zero error." << std::endl;
            break;
        default:
            std::cout << "Invalid operator." << std::endl;
            break;
    }
}

int main() {
    float value1, value2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> value1;
    std::cout << "Enter second number: ";
    std::cin >> value2;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    calculate(value1, value2, operation);

    return 0;
}
