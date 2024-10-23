#include <iostream>
#include "AreaCalculator.h"

int main() {
    AreaCalculator calculator;

    // Create shapes and add to the calculator
    calculator.addShape(new Circle(5.0));
    calculator.addShape(new Rectangle(4.0, 6.0));
    calculator.addShape(new Triangle(3.0, 7.0));
    calculator.addShape(new Square(4.0));

    // Calculate and display all areas
    std::cout << "Calculating areas of the shapes:" << std::endl;
    calculator.calculateAllAreas();

    // Clean up dynamically allocated memory
    return 0;
}
