
#include "SmartPointer.h"

int main() {
    // Using unique_ptr for individual student
    std::unique_ptr<Student> student1 = std::make_unique<Student>("Alice");
    student1->display();

    // Using shared_ptr for a classroom
    Classroom classroom;
    classroom.addStudent(std::make_shared<Student>("Bob"));
    classroom.addStudent(std::make_shared<Student>("Charlie"));

    std::cout << "Students in the classroom:" << std::endl;
    classroom.displayStudents();

    return 0;
}
