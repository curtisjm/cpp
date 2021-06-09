// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <ctime>

using namespace std;

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int partition(int arr[], int left, int right) {

    int pivot = arr[right];
// i is the index of the smaller number
    int i = left - 1;

// j keeps track of current number that we are examining
    for(int j = left; j <= right - 1; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
// all nums up to i are < pivot
// all nums up to j are >= pivot
    }
// make sure pivot is in between two groups
    swap(&arr[i + 1], &arr[right]);
// return index of the pivot
    return (i + 1);
}

// arr[] is the array of numbers being sorted
// left is the starting index for array
// right is the ending index for array
void quickSort(int arr[], int left, int right) {

// already in right place
    if(left >= right) {
        return;
    }

// beginning partition index
    int p = partition(arr, left, right);

// sort sections of array after partition
// left / lower side of array
    quickSort(arr, left, p - 1);
// right / upper side of array
    quickSort(arr, p + 1, right);

}

//int* sortArray(int* array, int size) {
//    int* toSort = new int[size];
//    copy(array, array + size, toSort);
//
//    quickSort(toSort, 0, size - 1);
//
//    return toSort;
//}

void printArray(int* array, int size) {
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
    quickSort()
    printArray(sortArray(nums, size), size);

    return 0;
}