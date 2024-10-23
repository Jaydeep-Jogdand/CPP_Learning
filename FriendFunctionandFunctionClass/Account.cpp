#include "Account.h"
#include <iostream>

Account::Account(int accNum, double initialBalance)
    : accountNumber(accNum), balance(initialBalance) {}

void Account::displayBalance() const {
    std::cout << "Account Number: " << accountNumber << ", Balance: $" << balance << std::endl;
}
