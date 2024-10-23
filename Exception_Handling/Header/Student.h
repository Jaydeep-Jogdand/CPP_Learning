#pragma once
#include <vector>
#include <string>

class Student {
private:
    std::string name;
    int id;
    std::vector<int> grades;

public:
    // Constructor to initialize student name and ID
    Student(const std::string& name, int id);

    // Method to add a grade
    void addGrade(int grade);

    // Method to calculate GPA
    double calculateGPA() const;

    // Getter methods
    std::string getName() const;
    int getId() const;
};
