// File: FeetToMeters.cpp
// Name: Curtis Mitchell
// Date: 1/29/21
// Compiler Used: MinGW-W64
// Purpose: Convert user input of feet to meters and display result

#include <iostream>

using namespace std;

int main() {
    
    double feet = 0.0;
    double meters = 0.0;

    cout << "Enter a value for feet: ";
    cin >> feet;

    meters = feet * 0.305;

    cout << feet << " feet is " << meters << " meters" << endl;
    
    return 0;
}