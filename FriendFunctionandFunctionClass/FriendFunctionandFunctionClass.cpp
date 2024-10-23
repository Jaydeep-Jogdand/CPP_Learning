#include "Account.h"
#include "Bank.h"
#include <iostream>

int main() {
    Account account1(1001, 500.0); // Creating account 1 with initial balance
    Account account2(1002, 300.0); // Creating account 2 with initial balance

    std::cout << "Initial Balances:" << std::endl;
    account1.displayBalance();
    account2.displayBalance();

    // Transfer funds
    Bank::transferFunds(account1, account2, 150.0);

    std::cout << "Balances after transfer:" << std::endl;
    account1.displayBalance();
    account2.displayBalance();

    // Attempting to transfer more than available balance
    Bank::transferFunds(account1, account2, 400.0);

    return 0;
}
