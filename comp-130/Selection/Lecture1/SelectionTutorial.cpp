// File: SelectionTutorial.cpp
// Name: Curtis Mitchell
// Date: 2/4/21
// Compiler Used: MinGW-W64
// Purpose:
    // prog 1: 
    // prog 2: 

#include <iostream>
using namespace std;

#define prog 4

#if prog == 4
int main() {

    int x = 10;

    // x declared as local variable inside the block
    {
        int x = 20;
        cout << "x in the statement block: " << x << endl;
    }

    cout << "x in the main: " << x << endl;

    return 0;
}

#elif prog == 3
int main() {

    // I
    // Define variables
    double cuurentReading = 0.0;
    double previousReading = 0.0;
    double gallonsOfWater = 0.0;
    double totalCharge = 0.0;

    // Prompt user to enter current and previous meter readings
    // Assign those values to currentReading and previousReading
    cout << "Enter current meter reading: ";
    cin >> cuurentReading;
    cout << "Enter previous meter reading: ";
    cin >> previousReading;

    // P
    // Find gallons of water by subtracting 
    gallonsOfWater = cuurentReading - previousReading;

    // Calculate total charge
    totalCharge = (7 * gallonsOfWater) / 1000;
    

    // Make sure minimum charge is 16.67
    // If it's not, set it to 16.67
    if(totalCharge < 16.67) {
        totalCharge = 16.67;
    }
    
    // O
    // Display gallons and total charge to user
    cout << "Gallons used: " << gallonsOfWater << " Total charge = $" << totalCharge;

    return 0;
}

#elif prog == 2
int main() {

    double salesAmount = 0.0;
    double bonus = 0.0;

    cout << "Enter sales amount: ";
    cin >> salesAmount;

    if(salesAmount >= 15000) {
        bonus = salesAmount * 0.02;
    } else {
        bonus = salesAmount * 0.015;
    }

    cout << "Bonus = $" << bonus << endl;

    return 0;
}

#elif prog == 1
int main() {
    
    int quantity = 0;
    double price = 0.0;
    double totalOwed = 0.0;
    double discount = 0.0;

    cout << "Enter quantity and price: ";
    cin >> quantity >> price;

    totalOwed = price * quantity;

    if(quantity > 5) {
        discount = totalOwed * 0.10;
        totalOwed = totalOwed - discount;
    }

    cout << "Total Owed: $" << totalOwed << endl;
    
    return 0;
}
#endif