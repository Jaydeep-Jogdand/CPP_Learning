#include <iostream>
#include "CircleGeometry.h"

int main() {
    CircleGeometry circle;
    double radius;

    // Prompt user for radius input
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate area and circumference
    double area = circle.calculateArea(radius);
    double circumference = circle.calculateCircumference(radius);

    // Output the results
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}
