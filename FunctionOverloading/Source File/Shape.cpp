#include "Shape.h"
#include <cmath>

Circle::Circle(double r) : radius(r) {}

double Circle::calculateArea() {
    return 3.14 * radius * radius; // Area = πr²
}

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::calculateArea() {
    return length * width; // Area = length * width
}

Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::calculateArea() {
    return 0.5 * base * height; // Area = ½ * base * height
}

Square::Square(double s) : side(s) {}

double Square::calculateArea() {
    return side * side; // Area = side²
}
