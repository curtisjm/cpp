// File: Sort_H.cpp
// Name: Curtis Mitchell
// Date: 3/11/21
// Compiler Used: MinGW-w64
// Purpose: use quicksort to sort an array of doubles and display it if desired

#include <iostream>
#include "Sort_H.h"

using namespace std;

// used to swap elements of the array
void swap(double* num1, double* num2) {
    double temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(double nums[], int left, int right) {

    double pivot = nums[right];
    // i is the index of the smaller number
    int i = left - 1;

    // j keeps track of current number that we are examining
    for(int j = left; j <= right - 1; j++) {

        if(nums[j] < pivot) {
            i++;
            swap(&nums[i], &nums[j]);
        }
        // all nums up to i are < pivot
        // all nums up to j are >= pivot
    }
    // make sure pivot is in between two groups
    swap(&nums[i + 1], &nums[right]);
    // return index of the pivot
    return (i + 1);
}

// nums[] is the array of numbers being sorted
// left is the starting index for array
// right is the ending index for array
void quickSort(double nums[], int left, int right) {

    // already in right place
    if(left >= right) {
        return;
    }

    // beginning partition index
    int p = partition(nums, left, right);

    // sort sections of array after partition
    // left / lower side of array
    quickSort(nums, left, p - 1);
    // right / upper side of array
    quickSort(nums, p + 1, right);

}

// prints numbers stored in the array
void printNums(double nums[], int length) {
    cout << "Sorted numbers: ";
    for(int i = 0; i < length - 1; i ++) {
        cout << nums[i] << ", ";
    }
    // used to avoid having a comma after the last number
    cout << nums[length - 1] << endl;
}