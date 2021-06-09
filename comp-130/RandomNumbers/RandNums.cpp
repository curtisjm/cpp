// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-W64
// Purpose:

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));
    
    int lowerBound = 0;
    int upperBound = 0;
    int numCount = 0;
    char option = ' ';
    int includeUpperBound = 0;
    int randNum = 0;
    int sum = 0;

    cout << "Enter a lower bound: ";
    cin >> lowerBound;
    cout << "Enter an upper bound: ";
    cin >> upperBound;
    cout << "How many random numbers do you want? ";
    cin >> numCount;
    cout << "Would you like to include the upper bound value? (Y/N)";
    cin >> option;

    // use 1 to include upper bound or 0 to not include it
    option = tolower(option);
    if(option == 'y') {
        includeUpperBound = 1;
    }

    for(int i = 0; i < numCount; i++) {
        randNum = lowerBound + rand() % (upperBound - lowerBound + includeUpperBound);
        cout << "Random Number " << i + 1 << ": " << randNum << endl;
        sum += randNum;
    }
    cout << "Sum: " << sum;

    return 0;
}