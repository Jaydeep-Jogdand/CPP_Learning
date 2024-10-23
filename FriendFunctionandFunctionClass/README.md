# Bank Account Management System

## Problem Statement
Create a C++ program that simulates a simple bank account management system. The program should include classes for `Account` and `Bank`. The `Account` class should maintain the account number and balance, while the `Bank` class should be responsible for transferring funds between accounts. The `Bank` class should be a friend of the `Account` class to access its private members.

## Solution Hint
The `Bank` class will contain a static method `transferFunds` that allows transferring money from one `Account` to another. The method should check for sufficient funds before completing the transfer. Use friend functions to allow the `Bank` class to manipulate private members of the `Account` class.

## Learning
This project illustrates how to use friend functions and friend classes in C++ to allow one class to access the private members of another. It also provides a practical understanding of how to design classes for a specific functionality, such as banking transactions, while ensuring proper encapsulation.
