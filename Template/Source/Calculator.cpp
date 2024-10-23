#include "Calculator.h"

// Constructor
template <typename T>
Calculator<T>::Calculator(T num1, T num2) : number1(num1), number2(num2) {}

// Method for addition
template <typename T>
T Calculator<T>::add() const {
    return number1 + number2;
}

// Method for subtraction
template <typename T>
T Calculator<T>::subtract() const {
    return number1 - number2;
}

// Method for multiplication
template <typename T>
T Calculator<T>::multiply() const {
    return number1 * number2;
}

// Method for division with exception handling for division by zero
template <typename T>
T Calculator<T>::divide() const {
    if (number2 == 0) {
        throw std::invalid_argument("Division by zero error");
    }
    return number1 / number2;
}

// Explicit instantiation for the templates with int and double
template class Calculator<int>;
template class Calculator<double>;
