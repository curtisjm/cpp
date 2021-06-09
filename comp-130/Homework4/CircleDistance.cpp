// File: CircleDistance.cpp
// Name: Curtis Mitchell
// Date: 2/25/21
// Compiler Used: MinGW-W64
// Purpose: Calculate the distance between two points on a circle

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
    
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double distance = 0;
    const double RADIAN_COVERSION_FACTOR = (M_PI / 180);
    const double RADIUS = 6378.1;

    cout << "Enter point 1 (latitude, longitude) in degrees: ";
    cin >> x1 >> y1;
    cout << "Enter point 2 (latitude, longitude) in degrees: ";
    cin >> x2 >> y2;

    x1 *= RADIAN_COVERSION_FACTOR;
    x2 *= RADIAN_COVERSION_FACTOR;
    y1 *= RADIAN_COVERSION_FACTOR;
    y2 *= RADIAN_COVERSION_FACTOR;

    distance = RADIUS * acos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2));

    cout << "The distance between the two points is " << distance << " km";

    return 0;
}