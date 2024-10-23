#pragma once
#include "Account.h"

class Bank {
public:
    static void transferFunds(Account& fromAccount, Account& toAccount, double amount); // Friend function
};
