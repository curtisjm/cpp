// File: QuadraticEquations.cpp
// Name: Curtis Mitchell
// Date: 2/8/21
// Compiler Used: MinGW-W64
// Purpose: Find roots of quadratic equations

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double discriminant = 0.0;
    double root1 = 0.0;
    double root2 = 0.0;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    discriminant = (b * b) - (4.0 * a * c);
    
    if(discriminant == 0) {
        root1 = -b / (2.0 * a);
        cout << "The root is " << root1 << endl;
    } else if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        root2 = (-b - sqrt(discriminant)) / (2.0 * a);
        cout << "The roots are " << root1 << " and " << root2 << endl;
    } else {
        cout << "The equation has not real roots" << endl;
    }
    
    return 0;
}