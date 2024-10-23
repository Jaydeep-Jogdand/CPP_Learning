#include "Calculator.h"

int main() {
    try {
        // Using Calculator for integers
        Calculator<int> intCalc(10, 2);
        std::cout << "Integer Addition: " << intCalc.add() << std::endl;
        std::cout << "Integer Subtraction: " << intCalc.subtract() << std::endl;
        std::cout << "Integer Multiplication: " << intCalc.multiply() << std::endl;
        std::cout << "Integer Division: " << intCalc.divide() << std::endl;

        // Using Calculator for floating point numbers
        Calculator<double> doubleCalc(10.5, 0);
        std::cout << "Double Addition: " << doubleCalc.add() << std::endl;
        std::cout << "Double Subtraction: " << doubleCalc.subtract() << std::endl;
        std::cout << "Double Multiplication: " << doubleCalc.multiply() << std::endl;
        std::cout << "Double Division: " << doubleCalc.divide() << std::endl;

    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
