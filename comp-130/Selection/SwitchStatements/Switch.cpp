// File: Switch.cpp
// Name: Curtis Mitchell
// Date: 2/11/21
// Compiler Used: MinGW-W64
// Purpose:

#include <iostream>

using namespace std;

#define prog 1

#if prog == 1
int main() {
    
    char option = '0';

    cout << "\nTurn on traffic lights: " << endl;
    cout << "A. Green" << endl;
    cout << "B. Red" << endl;
    cout << "C. Yellow" << endl;
    cout << "========================" << endl;
    cout << "Enter (A - C): ";
    cin >> option;
    
    switch(toupper(option)) {
        case 'A': 
            cout << "Green light." << endl;
            break;
        case 'B':
            cout << "Red light." << endl;
            break;
        case 'C':
            cout << "Yellow light." << endl;
            break;
        default:
            cout << "Invalid input." << endl;
    }
    cout << endl;

    cout << option;

    return 0;
}
#endif