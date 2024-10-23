#pragma once
#include <vector>

class LambdaEvaluator {
public:
    LambdaEvaluator(int a, int b);
    int add();
    int subtract();
    int multiply();
    void sortVector(std::vector<int>& vec);
    void displayResults();

private:
    int x;
    int y;
};
