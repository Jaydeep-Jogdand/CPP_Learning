# Student Grade Management System with Exception Handling

## Problem Statement
Design a `Student` class that stores a student's name, ID, and grades. The class should have a method to calculate the GPA of the student based on their grades. If a grade is found to be invalid (i.e., below 0 or above 100), the program should throw an exception. Handle the exception in the main program and prompt the user to re-enter valid grades.

## Solution Hint
- Implement a class with a method to calculate GPA.
- Use exception handling (`try`, `catch`) to catch invalid grades.
- Use `invalid_argument` and `runtime_error` exceptions for validation.

## Learning
- Understanding how to use exceptions to validate input.
- Error handling when user inputs invalid data.
- Ensuring that the program can recover from errors and prompt for valid input.
