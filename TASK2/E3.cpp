#include <iostream>

int main() {
    float value1, value2;
    char operation;


    // User inputs
    std::cout << "Enter first number: ";
    std::cin >> value1;
    std::cout << "Enter second number: ";
    std::cin >> value2;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;

    // Perform calculation using switch
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
            std::cout << "Result: " << value1 / value2 << std::endl;
            break;
        default:
            std::cout << "Error" << std::endl;
            break;

        return 0;    

        }
}


