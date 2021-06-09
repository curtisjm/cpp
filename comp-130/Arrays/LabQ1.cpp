#include <iostream>
#include <ctime>

using namespace std;

void printArray(int arr[], int size) {
     for(int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }  
    cout << endl;
}

int main() {

    srand(time(0));

    const int ARR_SIZE_1_2 = 5;
    int arr1[ARR_SIZE_1_2] = {0};
    int arr2[ARR_SIZE_1_2] = {0};

    for(int i = 0; i < ARR_SIZE_1_2; i++) {
        arr1[i] = 1 + rand() % (10 - 1 + 1);
        arr2[i] = 11 + rand() % (20 - 11 + 1);
    }

    cout << "Array 1: " << endl;
    printArray(arr1, ARR_SIZE_1_2);       
    cout << "Array 2: " << endl;
    printArray(arr2, ARR_SIZE_1_2);

    const int ARR_SIZE_3 = 10;
    int arr3[ARR_SIZE_3] = {0};
    
    for(int i = 0; i < ARR_SIZE_3; i++) {
        if(i < 5) {
            arr3[i] = arr1[i];
        } else {
            arr3[i] = arr2[i-5];
        }
    }
    cout << "Array 3 (1 & 2 combined): " << endl;
    printArray(arr3, ARR_SIZE_3);

    return 0;
}
