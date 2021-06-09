// File: Divisible.cpp
// Name: Curtis Mitchell
// Date: 2/11/21
// Compiler Used: MinGW-W64
// Purpose: Check if integers are divisible by 5 , 6

#include <iostream>

using namespace std;

int main() {

    int num = 0;
    bool fiveAndSix = false;
    bool fiveOrSix = false;
    bool fiveOrSixNotBoth = false;

    cout << "Enter an integer: ";
    cin >> num;

    if(num % 5 == 0.0 && num % 6 == 0.0) {
        fiveAndSix = true;
    }
    if(num % 5 == 0.0 || num % 6 == 0.0) {
        fiveOrSix = true;
    }
    if(fiveOrSix == true && fiveAndSix == false) {
        fiveOrSixNotBoth = true;
    }

    cout << boolalpha;
    cout << "Is " << num << " divisible by 5 and 6? " << fiveAndSix << endl;
    cout << "Is " << num << " divisible by 5 or 6? " << fiveOrSix << endl;
    cout << "Is " << num << " divisible by 5 or 6, but not both? " << fiveOrSixNotBoth << endl;

    return 0;
}