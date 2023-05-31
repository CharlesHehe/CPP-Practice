#include "bank_account.h"
#include <gtest/gtest.h>

class BankAccountTest : public ::testing::Test
{
protected:
    BankAccountTest() : account(1, "Test Account", 100.0) {}
    virtual ~BankAccountTest() {}
    // If the constructor and destructor aren't enough for setting up
    // and cleaning up each test, you can define the following methods:
    virtual void SetUp()
    {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    virtual void TearDown()
    {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }
    // Objects declared here can be used by all tests in the test case for BankAccount.
    BankAccount account;
};

// Tests that the BankAccount::deposit() method works correctly.
TEST_F(BankAccountTest, CanDepositMoney) {
    EXPECT_TRUE(account.deposit(50.0));
    EXPECT_EQ(150.0, account.getBalance());
}

// Tests that the BankAccount::withdraw() method works correctly.
TEST_F(BankAccountTest, CanWithdrawMoney) {
    EXPECT_TRUE(account.withdraw(50.0));
    EXPECT_EQ(50.0, account.getBalance());
}

// Tests that the BankAccount::withdraw() method prevents overdraft.
TEST_F(BankAccountTest, CannotOverdraw) {
    EXPECT_FALSE(account.withdraw(150.0));
    EXPECT_EQ(100.0, account.getBalance());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}