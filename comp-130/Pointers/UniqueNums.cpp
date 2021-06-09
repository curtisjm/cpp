// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

bool numExists(int *array, int size, int num) {
    int *ptr = array;
    for(int i = 0; i < size; i++) {
        if(*ptr == num) {
            return true;
        }
        ptr++;
    }
    return false;
}

void printArray(int *array, int size) {
    int* ptr = array;
    for(int i = 0; i < size; i++) {
        cout << *ptr << " ";
        ptr++;
    }
}

int main() {

    int* uniqueNums = NULL;
    int* numsIn = NULL;
    int* ptr = NULL;
    int* ptr2 = NULL;
    int* ptr3 = NULL;

    int size = 0;
    int uniqueNumCount = 0;

    cout << "Enter an array size: ";
    cin >> size;

    numsIn = new int[size];
    uniqueNums = new int[size];

    cout << "Enter " << size << " integers: ";

    ptr = numsIn;
    for(int i = 0; i < size; i++) {
        cin >> *ptr;
        ptr++;
    }

    ptr2 = numsIn;
    ptr3 = uniqueNums;
    for(int i = 0; i < size; i++) {
        if(!numExists(uniqueNums, uniqueNumCount, *ptr2)) {
            *ptr3 = *ptr2;
            ptr3++;
            uniqueNumCount++;
        }
        ptr2++;
    }

    printArray(uniqueNums, uniqueNumCount);

    return 0;
}