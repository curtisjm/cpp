// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    int size = 0;
    int total = 0;
    double average = 0;
    int countAbvAvg = 0;

    cout << "Enter an array size: ";
    cin >> size;

    int* dynamicArray = new int[size];

    cout << size << " numbers between 1 and 100 are: ";

    int* ptr = dynamicArray;
    for(int i = 0; i < size; i++) {
        *ptr = 1 + rand() % (100 - 1 + 1);
        cout << *ptr << " ";
        total += *ptr;
        ptr++;
    }

    average = (double) total / size;

    cout << "\nAverage: " << average << endl;

    int *ptr2 = dynamicArray;
    for(int i = 0; i < size; i++) {
        if(*ptr > average) {
            countAbvAvg++;
            ptr2++;
        }
    }

    cout << "Number of " << countAbvAvg;

    return 0;
}