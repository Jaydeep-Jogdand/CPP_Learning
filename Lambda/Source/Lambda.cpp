#include "LambdaEvaluator.h"
#include <iostream>
#include <vector>

int main() {
    LambdaEvaluator evaluator(10, 5); // Example values

    evaluator.displayResults();

    // Sorting a vector
    std::vector<int> vec = { 5, 2, 8, 3, 1 };
    evaluator.sortVector(vec);
    std::cout << "Sorted vector: ";
    for (const auto& v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    return 0;
}
