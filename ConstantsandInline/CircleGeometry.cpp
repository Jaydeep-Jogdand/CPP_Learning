#include "CircleGeometry.h"

// Inline function to calculate the area of a circle
inline double CircleGeometry::calculateArea(double radius) const {
    return PI * radius * radius;
}

// Inline function to calculate the circumference of a circle
inline double CircleGeometry::calculateCircumference(double radius) const {
    return 2 * PI * radius;
}
