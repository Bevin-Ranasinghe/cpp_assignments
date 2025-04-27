#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Name: " << name << ", Age: " << age << endl;

    return 0;
}
