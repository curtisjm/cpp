// File: HexToDecimal.cpp
// Name: Curtis Mitchell
// Date: 2/25/21
// Compiler Used: MinGW-W64
// Purpose: Convert hexadecimal digits as a character to decimal

#include <iostream>

using namespace std;

int main() {

    char hexValue = ' ';

    cout << "Enter a hexadecimal character 0-9 or A-F or a-f: ";
    cin >> hexValue;

    hexValue = toupper(hexValue);
    
    if(hexValue >= '0' && hexValue <= '9') {
        cout << "Decimal Value: " << (hexValue - '0');
    } else if(hexValue >= 'A' && hexValue <= 'F') {
        // 'F' on ASCII is 70, subtract 15 from that to get F at the beginning to get 55
        cout << "Decimal Value: " << (hexValue - 55);
    } else {
        cout << "Invalid input";
    }

    return 0;
}
