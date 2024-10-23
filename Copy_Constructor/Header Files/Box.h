#pragma once

class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h);  // Parameterized constructor
    Box(const Box& other);     // Copy constructor

    void displayDimensions() const;
    void setDimensions(int l, int w, int h);
};
