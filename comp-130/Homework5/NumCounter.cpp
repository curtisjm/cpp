// File: NumCounter.cpp
// Name: Curtis Mitchell
// Date: 3/3/21
// Compiler Used: MinGW-w64
// Purpose: Count positive and negative numbers and compute the average of numbers

#include <iostream>

using namespace std;

int main() {

    int num = 0;
    int positiveCount = 0;
    int negativeCount = 0;
    int total = 0;
    double average = 0;

    cout << "Enter an integer, the input ends if it is 0: ";
    cin >> num;

    if(num == 0) {
        cout << "No numbers are entered except 0";
        return 0;
    }
    
    while(num != 0) {
        if(num > 0) {
            positiveCount++;
        } else {
            negativeCount++;
        }
        total += num;
        cin >> num;
    }

    average = (double) total / (positiveCount + negativeCount);
    cout << "The number of positives is " << positiveCount << endl;
    cout << "The number of negatives is " << negativeCount << endl;
    cout << "The total is " << total << endl;
    cout << "The average is " << average << endl;

    return 0;
}