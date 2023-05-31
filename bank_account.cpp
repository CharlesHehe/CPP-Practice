#include <iostream>
#include "gtest/gtest.h"
#include "bank_account.h"

BankAccount::BankAccount(int aNumber, std::string aName, double b) : accountNumber_(aNumber), accountName_(aName), balance_(b)
{
}
bool BankAccount::deposit(double amount)
{
    if (amount >= 0)
    {
        balance_ += amount;
        return true;
    }
    return false;
}
bool BankAccount::withdraw(double amount)
{
    if (balance_ >= amount)
    {
        balance_ -= amount;
        return true;
    }
    else
    {
        std::cout << "Insufficient funds for withdrawal" << std::endl;
        return false;
    }
}
double BankAccount::getBalance() { return balance_; }
