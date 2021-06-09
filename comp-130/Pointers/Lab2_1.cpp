// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <ctime>

using namespace std;

int* doubleCapacity(const int* list, int size) {
    int* newArr = new int[size * 2];
    copy(list, list + size, newArr);

    int* ptr = newArr + size;
    for(int i = size; i < size * 2; i++) {
        *ptr = 0;
        ptr++;
    }
    return newArr;
}

void printArray(int* const arr, int size) {
    int* ptr = arr;
    for(int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    cout << endl;
}

int main() {
    srand(time(0));

    const int size = 10;
    int* arr = new int[size];

    int* ptr = arr;
    for(int i = 0; i < size; i++) {
        *ptr = 1 + rand() % (100 - 1 + 1);
        ptr++;
    }

    int* newArr = doubleCapacity(arr, size);
    int newSize = size * 2;

    cout << "Old array: ";
    printArray(arr, size);
    cout << "New array: ";
    printArray(newArr, newSize);

    delete[] arr;
    arr = NULL;

    return 0;
}