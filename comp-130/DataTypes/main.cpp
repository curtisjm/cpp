// File: DataTypes\main.cpp
// Name: Curtis Mitchell
// Date: 1/28/21
// Compiler Used: MinGW-W64
// Purpose: Experimentation with data types

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    /*
    double celsius = 0.0;
    double fahrenheit = 0.0;
    // I
    // 1. Prompt user to enter degreee in Celsius
    cout << "Enter a degree in Celsius: ";
    // 2. Extract user input
    cin >> celsius;
    // P
    // 3. fahrenheit = 9 / 5 * celsius + 32
    fahrenheit = 9.0 / 5 * celsius + 32;
    // O
    // 4. Display fahrenheit along with user input
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << endl;
    */

    double radius = 0;
    double length = 0;
    const double PI = 3.14;
    double area = 0;
    double volume = 0;

    // I
    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length;

    // P
    //area = radius * radius * PI;
    area = pow(radius, 2) * PI;
    volume = area * length;

    // O
    cout << "The area is " << area << endl;
    cout << "The volume is " << volume << endl;

    return 0;
}