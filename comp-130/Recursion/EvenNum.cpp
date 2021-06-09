// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

bool isOdd(int num);

bool isEven(int num) {
    return num == 0 ? true : isOdd(num - 1);
}

bool isOdd(int num) {
    return num == 0 ? false : isEven(num - 1);
}

int main() {

    int num = 0;
    cout << "Enter an integer: ";
    cin >> num;
    if(isEven(num)) {
        cout << "Number is even." << endl;
    } else {
        cout << "Number is odd." << endl;
    }

    return 0;
}