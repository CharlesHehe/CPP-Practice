#include <iostream>
#include "gtest/gtest.h"

class BankAccount
{

private:
    int accountNumber_;
    std::string accountName_;
    double balance_;

public:
    BankAccount(int aNumber, std::string aName, double b);
    bool deposit(double amount);
    bool withdraw(double amount);
    double getBalance();
};
