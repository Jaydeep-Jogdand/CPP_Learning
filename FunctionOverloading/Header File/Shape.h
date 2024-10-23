#pragma once

class Shape {
public:
    virtual double calculateArea() = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r);
    double calculateArea() override;
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w = 1.0);
    double calculateArea() override;
};

class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h);
    double calculateArea() override;
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s = 1.0);
    double calculateArea() override;
};
