// File: TrigFunctions.cpp
// Name: Curtis Mitchell
// Date: 3/3/21
// Compiler Used: MinGW-w64
// Purpose: Use trig functions to display a table of values

#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {

    const double DEG_TO_RAD = M_PI / 180;

    cout << left << setw(15) << "Degree" << left << setw(15) << "Sin" << left << setw(15) << "Cos" << endl;

    for(int i = 0; i <= 360; i += 10) {
        cout << left << setw(15) << i << left << setw(15) << fixed << setprecision(4) << sin(i * DEG_TO_RAD) << left << setw(15) << fixed << setprecision(4) << cos(i * DEG_TO_RAD) << endl;
    }

    return 0;
}