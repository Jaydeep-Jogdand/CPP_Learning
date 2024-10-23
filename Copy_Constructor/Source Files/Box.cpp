#include "Box.h"
#include <iostream>

Box::Box(int l, int w, int h) : length(l), width(w), height(h) {}

Box::Box(const Box& other) : length(other.length), width(other.width), height(other.height) {
    std::cout << "Copy constructor called!" << std::endl;
}

void Box::displayDimensions() const {
    std::cout << "Length: " << length << ", Width: " << width << ", Height: " << height << std::endl;
}

void Box::setDimensions(int l, int w, int h) {
    length = l;
    width = w;
    height = h;
}
