// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

void solveEquation(double a, double b, double c, double d, double e, double f, double& x, double& y, bool& isSolvable) {

    if((a*d - b*c) == 0) {
        isSolvable = false;
    } else {
        isSolvable = true;
        x = (e*d - b*f) / (a*d - b*c);
        y = (a*f - e*c) / (a*d - b*c);
    }
}

int main() {

    double a, b, c, d, e, f, x, y = 0.0;
    bool isSolvable = false;

    cout << "Enter a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    solveEquation(a, b, c, d, e, f, x, y, isSolvable);

    if(isSolvable) {
        cout << "x is " << x << " and y is " << y << endl;
    } else {
        cout << "The equation has no solution" << endl;
    }

    return 0;
}