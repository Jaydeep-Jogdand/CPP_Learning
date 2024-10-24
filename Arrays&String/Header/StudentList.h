#pragma once
#include <string>

class StudentList {
private:
    std::string* students; // Dynamic array of student names
    int capacity;         
    int studentCount;     s

    void resizeList();    

public:
  
    StudentList(int capacity);

    
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
