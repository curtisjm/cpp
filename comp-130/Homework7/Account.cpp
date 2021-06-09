//
// Created by curtis on 4/10/2021.
//

#include "Account.h"

using namespace std;

class Account {

private:
// instance variables
    int id;
    double balance;
    double annualInterestRate;

public:
// constructors


// getters
    int getId() const {
        return id;
    }
    double getBalance() const {
        return balance;
    }
    double getAnnualInterestRate() const {
        return annualInterestRate;
    }

// setters
    void setId(int id) {
        this->id = id;
    }
    void setBalance(double balance) {
        this->balance = balance;
    }
    void setAnnualInterestRate(double annualInterestRate) {
        this->annualInterestRate = annualInterestRate;
    }

// utility functions
    double getMonthlyInterestRate() const {
        return (annualInterestRate / 12);
    }

    void withdraw(double amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " has been withdrawn, your new balance is $" << balance << endl;
        } else {
            cout << "ERROR: balance is less than the withdraw amount!" << endl;
            cout << "Balance: $" << balance << endl;
        }
    }

    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "$" << amount << " has been deposited, your new balance is $" << balance << endl;
        } else if(amount == 0) {
            cout << "ERROR: you cannot deposit $0!" << endl;
        } else {
            cout << "ERROR: you cannot deposit a negative amount!" << endl;
        }
    }

    void display() const {
        cout << "ID: " << id << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Annual Interest Rate: " << annualInterestRate << "%" << endl;
        cout << "Monthly Interest Rate: " << getMonthlyInterestRate() << "%" << endl;
        cout << "Monthly Interest: $" << (balance * (getMonthlyInterestRate() / 100)) << endl;
    }
};
