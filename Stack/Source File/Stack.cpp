#include <iostream>
#include "BalancedParenthesesChecker.h"

int main() {
    BalancedParenthesesChecker checker;
    std::string expression;

    std::cout << "Enter an expression to check for balanced parentheses: ";
    std::getline(std::cin, expression);

    if (checker.isBalanced(expression)) {
        std::cout << "The expression is balanced." << std::endl;
    }
    else {
        std::cout << "The expression is not balanced." << std::endl;
    }

    return 0;
}
