// File: SumSeries.cpp
// Name: Curtis Mitchell
// Date: 3/3/21
// Compiler Used: MinGW-w64
// Purpose: Calculate the sum of a series

#include <iostream>

using namespace std;

double sumSeries(double n) {
    // base case
    // stop at 1 because 1/3 = (2(1) - 1) / 2(1) + 1)
    if(n == 1) {
       return ((2*n - 1) / (2*n + 1));
    } else {
        // general case
        // ((2*n - 1) / (2*n + 1)) is the formula to find the value of term n in the series
        return ((2*n - 1) / (2*n + 1)) + sumSeries(n - 1);
    }
}

int main() {

    // start at 49 because 97/49 = (2(49) - 1) / 2(49) + 1)
    cout << "Sum of the series: " << sumSeries(49);

    return 0;
}