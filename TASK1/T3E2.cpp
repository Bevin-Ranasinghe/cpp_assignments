#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    string name;
    int age;
    char grade;
    string group = "2025 group";

public:

void setName(string n) {
    name = n;
}
    string getName() {
        return name;
    }
void setAge(int a) {
    age = a;
}
    int getAge() {
        return age;
    }
void setGrade(char g) {
    grade = g;
}
    char getGrade() {
        return grade;
    }   

    void displayInfo() {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Grade: " << getGrade() << endl;
        cout << "Group: " << group << endl;
    }
};

int main() {
    // Create a Student object
    Student student;

    // Use setters to assign values
    student.setName("Bevin");
    student.setAge(20);
    student.setGrade('A');

    // Use getters to retrieve and print values
    cout << "Student Details:" << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Grade: " << student.getGrade() << endl;

    // Call displayInfo to show full student data
    cout << "\nFull Student Info:" << endl;
    student.displayInfo();

    return 0;
}