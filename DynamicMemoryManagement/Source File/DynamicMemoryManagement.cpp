#include "MemoryManager.h"
#include <iostream>

int main() {
    MemoryManager manager;

    // Allocate memory for 5 integers
    int* ptr = manager.allocateMemory(5);
    if (ptr) {
        std::cout << "Allocated memory: ";
        manager.printMemory(5); // Pass size to printMemory
    }

    // Deallocate memory
    manager.deallocateMemory(ptr);

    // Allocate memory for 10 integers
    ptr = manager.allocateMemory(10);
    if (ptr) {
        std::cout << "Allocated memory: ";
        manager.printMemory(10); // Pass size to printMemory
    }

    // Deallocate memory
    manager.deallocateMemory(ptr);

    return 0;
}
