// File: SortDriver.cpp
// Name: Curtis Mitchell
// Date: 3/4/21
// Compiler Used: MinGW-w64
// Purpose: driver used to get three numbers from a user to sort

#include <iostream>
#include "Sort_H.h"

using namespace std;

int main() {

    double nums[3];

    cout << "Enter three numbers: ";
    for(int i = 0; i < 3; i++) {
        cin >> nums[i];
    }
    
    //double nums[] = {8.0, 10.6, -7.2, 8.9, 9.1, 1.2, 5.2, 3.6, 9.5, 7.3, 2, 0, 5, 15, -5, 21};
    int length = sizeof(nums) / sizeof(nums[0]);
    quickSort(nums, 0, length - 1);
    printNums(nums, length);
    
    return 0;
}