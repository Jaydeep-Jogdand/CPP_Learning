#include "StudentList.h"
#include <iostream>
#include <algorithm>

// Constructor
StudentList::StudentList(int capacity) : capacity(capacity), studentCount(0) {
    students = new std::string[capacity]; // Initialize dynamic array
}

// Destructor
StudentList::~StudentList() {
    delete[] students; // Free dynamically allocated memory
}

// Function to add a student name
void StudentList::addStudent(const std::string& name) {
    if (studentCount == capacity) {
        resizeList(); // Resize if the list is full
    }
    students[studentCount++] = name;
}

// Function to resize the student array when full
void StudentList::resizeList() {
    capacity *= 2; // Double the capacity
    std::string* newStudents = new std::string[capacity];

    // Copy existing names to the new array
    for (int i = 0; i < studentCount; ++i) {
        newStudents[i] = students[i];
    }

    delete[] students; // Free old array
    students = newStudents; // Assign the new array
}

// Function to display all student names
void StudentList::displayStudents() const {
    for (int i = 0; i < studentCount; ++i) {
        std::cout << students[i] << std::endl;
    }
}

// Function to search for a student name
bool StudentList::searchStudent(const std::string& name) const {
    for (int i = 0; i < studentCount; ++i) {
        if (students[i] == name) {
            return true; // Student found
        }
    }
    return false; // Student not found
}

// Function to remove a student name
void StudentList::removeStudent(const std::string& name) {
    for (int i = 0; i < studentCount; ++i) {
        if (students[i] == name) {
            for (int j = i; j < studentCount - 1; ++j) {
                students[j] = students[j + 1]; // Shift elements left
            }
            --studentCount; // Decrease the count
            std::cout << "Removed: " << name << std::endl;
            return;
        }
    }
    std::cout << "Student not found!" << std::endl;
}
