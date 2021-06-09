// File: Reverse_H.cpp
// Name: Curtis Mitchell
// Date: 3/11/21
// Compiler Used: MinGW-w64
// Purpose: reverse and display a given integer

#include <iostream>
#include "Reverse_H.h"

using namespace std;

void reverse(int number) {
    int lastDigit = 0;
    int reversedNum = 0;

    while(number != 0) {
        lastDigit = number % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        number /= 10;
    }

    cout << "Reversed Number: " << reversedNum;
}