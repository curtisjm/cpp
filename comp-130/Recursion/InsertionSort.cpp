// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void recursiveInsertionSort(int arr[], int size) {
    if(size <= 1) {
        return;
    }
    recursiveInsertionSort(arr, size - 1);

    int pos = size - 1;

    while(pos > 0 && arr[pos] < arr[pos - 1]) {
        swap(&arr[pos], &arr[pos-1]);
        pos--;
    }
}

int main() {

    const int ARRAY_SIZE = 5;
    int myArr[ARRAY_SIZE] = { 34, -65, 1999, 45, 1 };

    recursiveInsertionSort(myArr, ARRAY_SIZE);

    for(int i : myArr) {
        cout << i << " ";
    }

    return 0;
}