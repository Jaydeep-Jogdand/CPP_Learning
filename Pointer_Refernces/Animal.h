#pragma once

#include <string>

class Animal {
public:
    virtual std::string sound() const; // Method to return sound
    std::string info() const; // Method to return info
    virtual ~Animal() {} // Virtual destructor
};
