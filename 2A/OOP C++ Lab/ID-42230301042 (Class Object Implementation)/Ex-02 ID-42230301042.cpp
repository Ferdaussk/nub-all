#include <iostream>
#include <string>

class Account {
private:
    int accountNumber;
    std::string accountHolder;
    double balance;

public:
    // Parameterized constructor without initial balance
    Account(int _accountNumber, const std::string& _accountHolder)
        : accountNumber(_accountNumber), accountHolder(_accountHolder), balance(0) {
        std::cout << "Account " << accountNumber << " created with balance " << balance << "." << std::endl;
    }

    // Parameterized constructor with initial balance
    Account(int _accountNumber, const std::string& _accountHolder, double initialBalance)
        : accountNumber(_accountNumber), accountHolder(_accountHolder), balance(initialBalance) {
        std::cout << "Account " << accountNumber << " created with balance " << balance << "." << std::endl;
    }

    // Method to deposit money
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit: " << amount << ". New Balance: " << balance << "." << std::endl;
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawal: " << amount << ". New Balance: " << balance << "." << std::endl;
        } else {
            std::cout << "Insufficient balance to withdraw " << amount << "." << std::endl;
        }
    }
};

int main() {
    // Creating Account objects
    Account account1(1001, "Alice");
    Account account2(1002, "Bob", 5000);

    // Performing transactions
    account1.deposit(1500);
    account1.withdraw(800);

    return 0;
}
