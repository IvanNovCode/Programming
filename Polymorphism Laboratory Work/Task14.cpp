//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class BankAccount {
protected:
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited: $" << amount << std::endl;
    }

    virtual void withdraw(double amount) = 0;
};

class SavingsAccount : public BankAccount {
public:
    virtual void withdraw(double amount) override {
        if (balance - amount >= 0) {
            balance -= amount;
            std::cout << "Withdrawn: $" << amount << std::endl;
        } else {
            std::cout << "Insufficient funds to withdraw $" << amount << std::endl;
        }
    }
};

class CheckingAccount : public BankAccount {
public:
    virtual void withdraw(double amount) override {
        double fee = 1.0;
        double limit = 1000.0;

        if (balance - amount - fee >= 0 && amount <= limit) {
            balance -= (amount + fee);
            std::cout << "Withdrawn: $" << amount << " (including fee of $1)" << std::endl;
        } else {
            std::cout << "Exceeds withdrawal limit or insufficient funds to withdraw $" << amount << std::endl;
        }
    }
};

int main() {
    SavingsAccount savingsAccount;
    CheckingAccount checkingAccount;

    savingsAccount.deposit(500.0);
    savingsAccount.withdraw(300.0);

    checkingAccount.deposit(1200.0);
    checkingAccount.withdraw(900.0);

    return 0;
}