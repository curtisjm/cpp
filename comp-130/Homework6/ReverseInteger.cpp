// File: ReverseInteger.cpp
// Name: Curtis Mitchell
// Date: 3/4/21
// Compiler Used: MinGW-w64
// Purpose: Display an integer reversed

#include <iostream>

using namespace std;

void reverse(long number) {
    long lastDigit = 0;
    long reversedNum = 0;

    while(number != 0) {
        lastDigit = number % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        number /= 10;
    }

    cout << "Reversed Number: " << reversedNum;
}

int main() {

    long num = 0;

    cout << "Enter an integer: ";
    cin >> num;

    reverse(num);

    return 0;
}