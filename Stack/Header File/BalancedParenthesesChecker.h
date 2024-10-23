#pragma once

#include <stack>
#include <string>

class BalancedParenthesesChecker {
public:
    bool isBalanced(const std::string& expression);
private:
    bool isMatchingPair(char opening, char closing);
};
