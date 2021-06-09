#include <iostream>
#include <algorithm>
#include <ctime>

using namespace std;

int minInARange(int arr[], int lowIndex, int highIndex) {

    int min = arr[lowIndex];

    for(int i = lowIndex; i < highIndex; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    
    return min;
}

int main() {

    srand(time(0));

    const int ARR_SIZE = 15;
    int arr[ARR_SIZE] = {0};

    for(int i = 0; i < ARR_SIZE; i++) {
        arr[i] = 15 + rand() % (55 - 15 + 1);
    }
    for(int i = 0; i < ARR_SIZE; i++) {
        cout << arr[i] << ' ';
    }

    int lowIndex, highIndex = 0;

    cout << endl;
    cout << "Enter a low index of the array (0-14): ";
    cin >> lowIndex;
    cout << "Enter a higher index of the array (0-14): ";
    cin >> highIndex;

    cout << "Minimum value found within those indices is: " << minInARange(arr, lowIndex, highIndex);

    return 0;
}