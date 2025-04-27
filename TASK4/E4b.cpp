#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clear the newline character from the input buffer
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Age: " << age << ", Name: " << name << endl;
    return 0;
}
