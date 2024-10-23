#pragma once
#include <string>

class StudentList {
private:
    std::string* students; // Dynamic array of student names
    int capacity;          // Maximum number of students
    int studentCount;      // Current number of students

    void resizeList();     // Function to resize the student array when full

public:
    // Constructor
    StudentList(int capacity);

    // Destructor
    ~StudentList();

    // Function to add a student name
    void addStudent(const std::string& name);

    // Function to display all student names
    void displayStudents() const;

    // Function to search for a student name
    bool searchStudent(const std::string& name) const;

    // Function to remove a student name
    void removeStudent(const std::string& name);
};
