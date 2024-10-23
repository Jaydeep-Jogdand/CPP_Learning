#pragma once

class Bank; // Forward declaration of the Bank class

class Account {
private:
    double balance;
    int accountNumber;

public:
    Account(int accNum, double initialBalance);
    void displayBalance() const; // Method to display account balance
    friend class Bank; // Declare Bank as a friend class
};
