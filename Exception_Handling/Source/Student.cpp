#include "Student.h"
#include <iostream>
#include <stdexcept>
using namespace std;

Student::Student(const string& name, int id) : name(name), id(id) {}

// Method to add a grade
void Student::addGrade(int grade) {
    if (grade < 0 || grade > 100) {
        throw invalid_argument("Invalid grade: Grade must be between 0 and 100.");
    }
    grades.push_back(grade);
}

// Method to calculate GPA
double Student::calculateGPA() const {
    if (grades.empty()) {
        throw runtime_error("No grades available to calculate GPA.");
    }

    int total = 0;
    for (int grade : grades) {
        total += grade;
    }
    return static_cast<double>(total) / grades.size();
}

// Getter methods
string Student::getName() const {
    return name;
}

int Student::getId() const {
    return id;
}
