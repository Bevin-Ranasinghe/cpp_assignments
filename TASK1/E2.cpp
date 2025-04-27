#include <iostream>
#include <string>
using namespace std;

// Function to count vowels
int countVowels(const string& str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        // Convert to lowercase manually
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

// Function to convert string to uppercase
void toUpperCase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);

    // Convert to uppercase
    string upperStr = input;
    toUpperCase(upperStr);
    cout << "\nUppercase string: " << upperStr << endl;

    // Count vowels
    int vowelCount = countVowels(input);
    cout << "Number of vowels: " << vowelCount << endl;

    // Reverse the string
    string reversedStr = reverseString(input);
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}
