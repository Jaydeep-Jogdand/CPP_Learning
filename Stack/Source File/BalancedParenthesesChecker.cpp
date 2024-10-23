#include "BalancedParenthesesChecker.h"
#include <iostream>

bool BalancedParenthesesChecker::isBalanced(const std::string& expression) {
    std::stack<char> stack;

    for (char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (stack.empty() || !isMatchingPair(stack.top(), ch)) {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}

bool BalancedParenthesesChecker::isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
        (opening == '{' && closing == '}') ||
        (opening == '[' && closing == ']');
}
