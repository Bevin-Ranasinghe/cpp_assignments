#include <iostream>
#include <vector>
#include <cstring>

// Define the Student struct
struct Student {
    char name[50];
    int id;
    float grade;
};

// Function to add a student
void addStudent(std::vector<Student>& students) {
    Student newStudent;
    std::cout << "Enter student name: ";
    std::cin.ignore(); // Clear the input buffer
    std::cin.getline(newStudent.name, 50);
    std::cout << "Enter student ID: ";
    std::cin >> newStudent.id;
    std::cout << "Enter student grade: ";
    std::cin >> newStudent.grade;
    students.push_back(newStudent);
    std::cout << "Student added successfully!\n";
}

// Function to display all students
void displayStudents(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "No students to display.\n";
        return;
    }
    std::cout << "Student Records:\n";
    for (const auto& student : students) {
        std::cout << "Name: " << student.name
                  << ", ID: " << student.id
                  << ", Grade: " << student.grade << "\n";
    }
}

// Function to search for a student by ID
void searchStudentByID(const std::vector<Student>& students) {
    int searchID;
    std::cout << "Enter student ID to search: ";
    std::cin >> searchID;
    for (const auto& student : students) {
        if (student.id == searchID) {
            std::cout << "Student Found:\n";
            std::cout << "Name: " << student.name
                      << ", ID: " << student.id
                      << ", Grade: " << student.grade << "\n";
            return;
        }
    }
    std::cout << "Student with ID " << searchID << " not found.\n";
}

int main() {
    std::vector<Student> students;
    int choice;

    while (true) {
        // Display menu
        std::cout << "\nStudent Records Management System\n";
        std::cout << "1. Add a student\n";
        std::cout << "2. Display all students\n";
        std::cout << "3. Search for a student by ID\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Handle user choice using switch
        switch (choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayStudents(students);
                break;
            case 3:
                searchStudentByID(students);
                break;
            case 4:
                std::cout << "Exiting program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
}