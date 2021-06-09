// File: MathFunctions.cpp
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-W64
// Purpose:

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
    
    double centerToVertex = 0.0;
    double sideLength = 0.0;
    double area = 0.0;

    cout << "Enter the length from the center to a vertex: ";
    cin >> centerToVertex;

    sideLength = 2 * centerToVertex * sin(M_PI / 5);
    area = (5 * pow(sideLength, 2)) / (4 * tan(M_PI / 5));

    cout << "The area of the pentagon is " << area;
    
    return 0;
}