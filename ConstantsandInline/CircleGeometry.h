#pragma once

class CircleGeometry {
private:
    // Constant for the value of Pi using const keyword
    const double PI = 3.14159; // Declare Pi as a constant

public:
    // Inline functions to calculate area and circumference
    inline double calculateArea(double radius) const;
    inline double calculateCircumference(double radius) const;
};
