
#include "SmartPointer.h"

Student::Student(const std::string& name) : name(name) {
    std::cout << "Student " << name << " enrolled." << std::endl;
}

Student::~Student() {
    std::cout << "Student " << name << " graduated." << std::endl;
}

void Student::display() const {
    std::cout << "Student Name: " << name << std::endl;
}

void Classroom::addStudent(std::shared_ptr<Student> student) {
    students.push_back(student);
}

void Classroom::displayStudents() const {
    for (const auto& student : students) {
        student->display();
    }
}
