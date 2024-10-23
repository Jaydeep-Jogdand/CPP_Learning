#include <iostream>
#include "StudentList.h"

int main() {
    StudentList studentList(2); // Initialize student list with capacity of 2

    studentList.addStudent("Alice");
    studentList.addStudent("Bob");
    studentList.addStudent("Charlie"); // This will trigger resizing

    std::cout << "Current Students:" << std::endl;
    studentList.displayStudents();

    std::string searchName = "Bob";
    if (studentList.searchStudent(searchName)) {
        std::cout << searchName << " found in the list." << std::endl;
    }
    else {
        std::cout << searchName << " not found in the list." << std::endl;
    }

    studentList.removeStudent("Alice");
    std::cout << "Current Students after removal:" << std::endl;
    studentList.displayStudents();

    return 0;
}
