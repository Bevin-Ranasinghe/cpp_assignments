#include <iostream>
using namespace std;

// Define the macro SQUARE(x)
#define SQUARE(x) ((x) * (x))

int main() {
    int num;

    // Take integer input from the user
    cout << "Enter an integer: ";
    cin >> num;

    // Use the SQUARE macro to calculate and print the square
    cout << "The square is: " << SQUARE(num) << endl;

    return 0;
}