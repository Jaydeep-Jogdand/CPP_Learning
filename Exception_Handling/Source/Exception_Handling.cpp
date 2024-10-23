#include "Student.h"
#include <iostream>

int main() {
    try {
        Student student("John Doe", 12345);

        int numGrades;
        std::cout << "Enter the number of grades: ";
        std::cin >> numGrades;

        for (int i = 0; i < numGrades; ++i) {
            int grade;
            std::cout << "Enter grade " << i + 1 << ": ";
            std::cin >> grade;

            // Adding grade, exception will be thrown if invalid
            student.addGrade(grade);
        }

        // Calculate GPA
        double gpa = student.calculateGPA();
        std::cout << "GPA: " << gpa << std::endl;

    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
