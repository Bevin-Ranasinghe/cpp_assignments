#include <iostream>

int main() {
    float number;

    while (true) {
        // Ask the user for a number
        std::cout << "Enter a number: ";
        std::cin >> number;

        // Stop if the number is negative
        if (number < 0) {
            std::cout << "Negative number entered. Program stopped." << std::endl;
            break;
        }
        // Stop if the number is zero
        if (number == 0) {
            std::cout << "Zero entered. Processing skipped." << std::endl;
            continue;
        }
        // Calculate the square of the number
        float square = number * number;
        std::cout << "Square of " << number << " is " << square << std::endl;
    }
    return 0;
}

