// File: DistPoints.cpp
// Name: Curtis Mitchell
// Date: 2/2/21
// Compiler Used: MinGW-W64
// Purpose: Calculate distance between two points

#include <iostream>
#include <math.h>

using namespace std;

// change value to choose program to run
#define prog 4

#if prog == 4
int main() {

    // using ASCII code
    cout << static_cast<char> (228);

    return 0;
}

#elif prog == 3
int main() {

    int numSons = 6;
    int familySize = 10;

    // auto converts familySize to double because numSons was cast to double
    cout << "Percentage of boys in the family: %" << (static_cast<double> (numSons) / familySize) * 100 << endl;

    return 0;
}

#elif prog == 2
int main() {

    int x = 1;
    int y = ++x + x++;

    cout << "x = " << x << "  y = "<< y << endl;

    return 0;
}

#elif prog == 1
int main() {

    double x1 = 0.0;
    double x2 = 0.0;
    double y1 = 0.0;
    double y2 = 0.0;
    double result = 0.0;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    cout << "The distance between the two points is " << result << endl;

    return 0;
    
}
#endif