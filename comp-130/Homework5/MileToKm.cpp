// File: MileToKm.cpp
// Name: Curtis Mitchell
// Date: 3/3/21
// Compiler Used: MinGW-w64
// Purpose: Convert from miles to kilometers

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const double MILE_TO_KM = 1.609;

    cout << left << setw(10) << "Miles" << left << setw(10) << "Kilometers" << endl;

    for(int i = 1; i <= 10; i++) {
        cout << left << setw(10) << i << left << setw(10) << fixed << setprecision(3) << (i * MILE_TO_KM) << endl;
    }

    return 0;
}