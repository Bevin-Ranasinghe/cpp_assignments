#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    // Take integer input from the user
    cout << "Enter number: ";
    cin >> num;

    //Calculate the sum of digits
    for (; num > 0; num /= 10) {
        sum += num % 10;
    }
    // Print the sum
    cout << "The sum of digits is: " << sum << endl;
    return 0;
}