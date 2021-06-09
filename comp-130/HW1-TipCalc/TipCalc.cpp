// File: TipCalc.cpp
// Name: Curtis Mitchell
// Date: 1/29/21
// Compiler Used: MinGW-W64
// Purpose: Take subtotal and gratuity rate from users and output gratuity and total cost

#include <iostream>

using namespace std;

int main() {
    
    double subtotal = 0.0;
    double gratuityRate = 0.0;
    double gratuityCost = 0.0;
    double totalCost = 0.0;

    cout << "Enter the subtotal and a gratuity rate: ";
    cin >> subtotal >> gratuityRate;

    gratuityCost = subtotal * (gratuityRate / 100);
    totalCost = subtotal + gratuityCost;

    cout << "The gratuity is $" << gratuityCost << " and total is $" << totalCost;
    
    return 0;
}