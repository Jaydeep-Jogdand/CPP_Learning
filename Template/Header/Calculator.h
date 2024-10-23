#pragma once
#include <iostream>
#include <stdexcept>

template <typename T>
class Calculator {
public:
    // Constructor
    Calculator(T num1, T num2);

    // Methods for basic arithmetic operations
    T add() const;
    T subtract() const;
    T multiply() const;
    T divide() const;

private:
    T number1;
    T number2;
};
