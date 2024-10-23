#include "MemoryManager.h"
#include <iostream>

MemoryManager::MemoryManager() : data(nullptr), currentSize(0) {}

MemoryManager::~MemoryManager() {
    deallocateMemory(data);
}

int* MemoryManager::allocateMemory(int size) {
    if (size <= 0) {
        std::cout << "Invalid size. Allocation failed." << std::endl;
        return nullptr;
    }
    data = new (std::nothrow) int[size];
    if (!data) {
        std::cout << "Memory allocation failed." << std::endl;
        return nullptr;
    }
    currentSize = size; // Store the allocated size
    for (int i = 0; i < size; ++i) {
        data[i] = i * 10; // Assign default values
    }
    return data;
}

void MemoryManager::deallocateMemory(int* ptr) {
    if (ptr) {
        delete[] ptr;
        ptr = nullptr;
    }
}

void MemoryManager::printMemory(int size) { // Updated to take size as a parameter
    if (data) {
        for (int i = 0; i < size; ++i) { // Use size parameter
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "No memory allocated." << std::endl;
    }
}
