#include "Circle.h"


Circle::Circle(double r) : radius(r) {}

// Constant member function to get radius
double Circle::getRadius() const {
    return radius;
}

// Constant member function to calculate area
double Circle::area() const {
    return M_PI * radius * radius; // Area = ? * r^2
}

// Constant member function to calculate circumference
double Circle::circumference() const {
    return 2 * M_PI * radius; // Circumference = 2 * ? * r
}
