#include <iostream>
using namespace std;

int main() {
    int num, reversed= 0;
    // Take integer input from the user
    cout << "Enter number: ";
    cin >> num;
    // Reverse the number
    for (; num > 0; num /= 10) {
        reversed = reversed * 10 + num % 10;
    }
    // Print the reversed number
    cout << "The reversed number is: " << reversed << endl;
    return 0;
}