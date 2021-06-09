// File: BubbleSort.cpp
// Name: Curtis Mitchell
// Date: 4/22/21
// Compiler Used: MinGW-w64
// Purpose: Sort an array using pointers

#include <iostream>
#include <ctime>

using namespace std;

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int* bubbleSort(int* const arr, int size) {
    int* toSort = new int[size];
    copy(arr, arr + size, toSort);

    bool swapped;

    int* ptrI = toSort;
    for(int i = 0; i < size - 1; i++) {
        swapped = false;
        int* ptrJ = toSort;
        for(int j = 0; j < size - i - 1; j++) {
            if(*ptrJ > *(ptrJ + 1)) {
                swap(ptrJ, ptrJ + 1);
                swapped = true;
            }
            ptrJ++;
        }
        if(!swapped) {
            break;
        }
        ptrI++;
    }
    return toSort;
}

void printArray(int* const array, int size) {
    int* ptr = array;
    for(int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
}

int main() {
    srand(time(0));

    const int size = 10;
    int* nums = new int[size];

    int* ptr = nums;
    for(int i = 0; i < size; i++) {
        *ptr = 1 + rand() % (100 - 1 + 1);
        ptr++;
    }

    cout << "Unsorted array: ";
    printArray(nums, size);
    cout << "Sorted array: ";
    printArray(bubbleSort(nums, size), size);

    return 0;
}