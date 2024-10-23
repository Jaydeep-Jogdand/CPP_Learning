
#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <string>

class Student {
public:
    Student(const std::string& name);
    ~Student();
    void display() const;

private:
    std::string name;
};

class Classroom {
public:
    void addStudent(std::shared_ptr<Student> student);
    void displayStudents() const;

private:
    std::vector<std::shared_ptr<Student>> students;
};
