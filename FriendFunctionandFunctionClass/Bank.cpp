#include "Bank.h"
#include <iostream>

void Bank::transferFunds(Account& fromAccount, Account& toAccount, double amount) {
    if (amount <= 0) {
        std::cout << "Transfer amount must be positive." << std::endl;
        return;
    }
    if (fromAccount.balance < amount) {
        std::cout << "Insufficient funds in account number " << fromAccount.accountNumber << "." << std::endl;
        return;
    }

    fromAccount.balance -= amount; // Deduct amount from the sender's balance
    toAccount.balance += amount;     // Add amount to the receiver's balance

    std::cout << "Transferred $" << amount << " from account " << fromAccount.accountNumber
        << " to account " << toAccount.accountNumber << "." << std::endl;
}
