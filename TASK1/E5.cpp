#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // Take integer input from the user
    cout << "Enter number: ";
    cin >> num;

   
    }

    // Calculate the sum of digits using a for loop
    for (; num > 0; num /= 10) {
        sum += num % 10; // Add the last digit to the sum
    }

    // Output the result
    cout << "The sum of the digits is: " << sum << endl;

    return 0;

}