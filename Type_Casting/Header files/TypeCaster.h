#pragma once

class TypeCaster {
public:
    TypeCaster(double dValue, float fValue);
    int implicitCast();
    char explicitCast();
    void displayResults();

private:
    double doubleValue;
    float floatValue;
    int intValue;
    char charValue;
};
