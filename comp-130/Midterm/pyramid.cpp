// File: pyramid.cpp
// Name: Curtis Mitchell
// Date: 3/18/21
// Compiler Used: MinGW-w64
// Purpose: to print a half pyramid of odd numbers

#include <iostream>

using namespace std;

int main() {

    int width = 0;

    cout << "Enter an integer: ";
    cin >> width;
    while(width <= 0) {
        cout << "Input must be a positive integer. Try again: ";
        cin >> width;
    }
    
    for(int i = 1; i <= width; i++) {

        for(int j = 1; j <= i; j++) {
            if(j % 2 != 0) {
                cout << j << " ";
            } else {
                cout << "* ";
            }  
        }
        cout << endl;
    }

    return 0;
}