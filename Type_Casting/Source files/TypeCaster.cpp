#include "TypeCaster.h"
#include <iostream>

TypeCaster::TypeCaster(double dValue, float fValue) : doubleValue(dValue), floatValue(fValue) {}

int TypeCaster::implicitCast() {
    intValue = doubleValue; // Implicit casting from double to int
    return intValue;
}

char TypeCaster::explicitCast() {
    charValue = (char)floatValue; // Explicit casting from float to char
    return charValue;
}

void TypeCaster::displayResults() {
    std::cout << "Implicit cast (double to int): " << intValue << std::endl;
    std::cout << "Explicit cast (float to char): " << charValue << std::endl;
}
