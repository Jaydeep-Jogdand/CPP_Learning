#include "Dog.h"
#include <iostream>

void displayAnimalInfo(const Animal& animal) {
    std::cout << animal.sound() << std::endl;
    std::cout << animal.info() << std::endl; // Call info through base class reference
}

int main() {
    Dog myDog;

    Animal animalPtrDemo;
    std::cout << animalPtrDemo.sound() << std::endl;
    std::cout << animalPtrDemo.info() << std::endl;
    
    Animal* animalPtr;
   
    // Pointer to base class
     animalPtr = &myDog;

    // Reference to derived class
    Dog& dogRef = myDog;

    // Using the pointer to access methods
    std::cout << "Using pointer to base class:" << std::endl;
    std::cout << animalPtr->sound() << std::endl; // Access sound
    std::cout << animalPtr->info() << std::endl;  // Access info via pointer

    // Using reference to access methods
    std::cout << "Using reference to derived class:" << std::endl;
    displayAnimalInfo(dogRef); // Passing reference to the display function

    return 0;
}
