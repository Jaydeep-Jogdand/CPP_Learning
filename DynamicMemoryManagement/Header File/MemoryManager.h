#pragma once

class MemoryManager {
public:
    MemoryManager();
    ~MemoryManager();
    int* allocateMemory(int size);
    void deallocateMemory(int* ptr);
    void printMemory(int size); // Updated to take size as a parameter
private:
    int* data;
    int currentSize; // Store the size of allocated memory
};
