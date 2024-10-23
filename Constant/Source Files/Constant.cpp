#include <iostream>
#include "Circle.h"

int main() {
    Circle circle(5.0);

    
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << circle.area() << std::endl;
    std::cout << "Circumference: " << circle.circumference() << std::endl;

    // Uncommenting the following line would result in a compile-time error
    // circle.radius = 10.0; // Error: cannot assign to 'radius' because it is a constant

    return 0;
}
