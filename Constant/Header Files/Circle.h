#pragma once
# define M_PI 3.14159265358979323846

class Circle {
public:
    Circle(double r);                // Constructor to initialize radius
    double getRadius() const;        // Constant member function to get radius
    double area() const;             // Constant member function to calculate area
    double circumference() const;     // Constant member function to calculate circumference

private:
    const double radius;             // Constant member variable for radius
};
