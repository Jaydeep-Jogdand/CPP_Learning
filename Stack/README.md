
# Problem Statement: Balanced Parentheses Checker

## Problem Statement
Create a C++ program that uses a stack to check for balanced parentheses in an expression. The program should accept an expression from the user containing various types of parentheses: (), {}, and []. It should use a stack to ensure that every opening parenthesis has a corresponding and correctly ordered closing parenthesis. The program will return whether the expression is balanced or not.

## Solution
Use a stack to push opening parentheses as you encounter them in the expression. When you encounter a closing parenthesis, check if it matches the top of the stack and pop it if it does; otherwise, the expression is unbalanced.

## Learning
- Understanding how to utilize stacks to solve common problems like checking for balanced symbols.
- Learning how the C++ Standard Library's `std::stack` simplifies the implementation of stack-based algorithms, making the code more efficient and reducing potential errors compared to manual stack implementation.