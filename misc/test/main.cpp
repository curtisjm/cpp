
#include <iostream>
#include <string>

using namespace std;

void printArray(int* const arr, int size) {
    int* ptr = arr;
    for (int i = 0; i < size; i++) {
        cout << i << "  -  " << *ptr << " ";
        ptr++;
        cout << endl;
    }
}

int* count(const string& s) {
    //Step 1: Declare an integer pointer
    int* movPtr = new int;
    //Step 2: Allocate a dynamic array of size 10
    // changed this to be a dynamic array
    int* mArr = new int[10];

    // point pointer at the head of the array
    movPtr = mArr;
    //Step 3: Use a loop to initialize this dynamic array with 0’s (use a moving pointer to do this)
    for (int i = 0; i < 10; i++) {
        // use the dereferenced value of the pointer to assign each element of the array to 0
        *movPtr = 0;
        // increment the moving pointer
        movPtr++;
    }


    //Step 4: Use a loop to step through each character in the parameter string, s
    for (int i = 0; i < s.length(); i++) {
        //4a. Check if each character is a digit, use isdigit() function, for example
        int verify = isdigit(s[i]);
        if (verify) {
            //4b. If it is a digit, then subtract this numeric character with the character ‘0’,
            //  this converts it into a numeric value: ‘0’ to 0, ‘1’ to 1, ‘2’ to 2, etc.
            int idx = s[i] - '0';
            //4c. Use this numeric value as the index position of the dynamic array, increment its content
            mArr[idx]++;
        }
    }
    //Step 5: Return the pointer from step 1
    // return movPtr;
    // return array of digits
    return mArr;
}

int main() {
    string s = "asdf1234123asdf";

    int* counts = count(s);

    printArray(counts, 10);

    return 0;
}
