// File: Account.cpp
// Name: Curtis Mitchell
// Date: 4/7/21
// Compiler Used: MinGW-w64
// Purpose: Design a class for bank accounts

#include <iostream>
#include "Account.h"

using namespace std;

int main() {

    Account acc1(1122, 20000, 4.5);

    cout << "Initial balance: $" << acc1.getBalance() << endl;
    acc1.withdraw(2500);
    acc1.deposit(3000);
    cout << endl;

    acc1.display();
    cout << endl;

    cout << "Results of failed withdrawal and deposit attempts..." << endl;
    cout << "Attempt to withdraw $1000000..." << endl;
    acc1.withdraw(1000000);
    cout << "Attempt to deposit $-999..." << endl;
    acc1.deposit(-999);

    return 0;
}