#include "LambdaEvaluator.h"
#include <iostream>
#include <algorithm>

LambdaEvaluator::LambdaEvaluator(int a, int b) : x(a), y(b) {}

int LambdaEvaluator::add() {
    auto addLambda = [](int a, int b) { return a + b; };
    return addLambda(x, y);
}

int LambdaEvaluator::subtract() {
    auto subtractLambda = [](int a, int b) { return a - b; };
    return subtractLambda(x, y);
}

int LambdaEvaluator::multiply() {
    auto multiplyLambda = [](int a, int b) { return a * b; };
    return multiplyLambda(x, y);
}

void LambdaEvaluator::sortVector(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a < b; });
}

void LambdaEvaluator::displayResults() {
    std::cout << "Addition: " << add() << std::endl;
    std::cout << "Subtraction: " << subtract() << std::endl;
    std::cout << "Multiplication: " << multiply() << std::endl;
}
