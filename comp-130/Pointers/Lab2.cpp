// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

int findMin(int* const arr, int size) {
    int minValue = 0;

    int* ptr = arr;
    for(int i = 0; i < size; i++) {
        if(*ptr < minValue) {
            minValue = *ptr;
        }
        ptr++;
    }
    return minValue;
}

int main() {
    int nums[] = {1, 2, 4, 5, 10, 100, 2, -22};
    int* arrPtr = nums;

    cout << "Smallest value: " << findMin(arrPtr, 8);

    return 0;
}