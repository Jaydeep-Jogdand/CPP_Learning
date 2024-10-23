#include "Box.h"
#include <iostream>

int main() {
    Box box1(10, 20, 30);  // Original object
    Box box2 = box1;       // Invoke copy constructor

    std::cout << "Box1 Dimensions: ";
    box1.displayDimensions();

    std::cout << "Box2 Dimensions (after copy): ";
    box2.displayDimensions();

    // Modify the copied object
    box2.setDimensions(40, 50, 60);
    std::cout << "Box2 Dimensions (after modification): ";
    box2.displayDimensions();

    // Check if original object is affected
    std::cout << "Box1 Dimensions (after modifying Box2): ";
    box1.displayDimensions();

    return 0;
}
