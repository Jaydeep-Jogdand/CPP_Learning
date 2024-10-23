#include "AreaCalculator.h"
#include <iostream>

void AreaCalculator::addShape(Shape* shape) {
    shapes.push_back(shape);
}

void AreaCalculator::calculateAllAreas() {
    for (Shape* shape : shapes) {
        std::cout << "Area: " << shape->calculateArea() << std::endl;
    }
}
