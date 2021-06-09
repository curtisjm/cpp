// File: BinaryToDecimal.cpp
// Name: Curtis Mitchell
// Date: 2/16/21
// Compiler Used: MinGW-W64
// Purpose: Convert numbers of different bases to base 10 / decimal

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

#define prog 2
#if prog == 2
int main() {

    long binaryNum = 0;
    int decimalValue = 0;
    int base = 0;

    cout << "Enter a number in a base other than 10: ";
    cin >> binaryNum;
    cout << "Enter its base: ";
    cin >> base;

    string binaryNumString = to_string(binaryNum);
    int len = binaryNumString.length();

    for(int i = 0; i < len; i++) {
        if(binaryNumString[i] != '0') {
            decimalValue += (((int) binaryNumString[i] - '0') * (pow(base, (len - (i + 1)))));
        }
    }

    cout << "Decimal Value: " << decimalValue;

    return 0;
}

#elif prog == 1
int main() {
    
    long binaryNum = 0;
    int decimalValue = 0;
    int base = 0;

    cout << "Enter a number in a base other than 10: ";
    cin >> binaryNum;
    cout << "Enter its base: ";
    cin >> base;

    string binaryNumString = to_string(binaryNum);
    char* binaryArray;
    binaryArray = &binaryNumString[0];
    int len = binaryNumString.length();

    for(int i = 0; i < len; i++) {
        if(binaryArray[i] != '0') {
            decimalValue += (((int) binaryArray[i] - 48) * (pow(base, (len - (i + 1)))));
        }
    }

    cout << "Decimal Value: " << decimalValue;
    
    return 0;
}
#endif