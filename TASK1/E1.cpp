#include <iostream>
#include <string>

using namespace std;

// Namespace for mathematical operations
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

// Namespace for text operations
namespace TextOperations {
    string concat(const string& str1, const string& str2) {
        return str1 + str2;
    }
}

int main() {
    // Input for MathOperations
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum : " 
         << MathOperations::add(num1, num2) << endl;

    // Input for TextOperations
    string text1, text2;
    cout << "Enter the first string: ";
    cin.ignore(); // To ignore the leftover newline character from previous input
    getline(cin, text1);
    cout << "Enter the second string: ";
    getline(cin, text2);
    cout << "Concatenated string: " 
         << TextOperations::concat(text1, text2) << endl;

    return 0;
}