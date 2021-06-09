// File: ReverseDriver.cpp
// Name: Curtis Mitchell
// Date: 3/4/21
// Compiler Used: MinGW-w64
// Purpose: driver to get an integer from the user to reverse

#include <iostream>
#include "Reverse_H.h"

using namespace std;

int main() {

    int num = 0;

    cout << "Enter an integer: ";
    cin >> num;

    reverse(num);

    return 0;
}