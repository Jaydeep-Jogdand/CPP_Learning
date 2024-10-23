#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
    std::string sound() const override; // Override sound method
    std::string info() const; // Override info method
};
