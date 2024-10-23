#pragma once

#include <vector>
#include "Shape.h"

class AreaCalculator {
public:
    void addShape(Shape* shape);
    void calculateAllAreas();

private:
    std::vector<Shape*> shapes;
};
