// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

//ARRAY_SIZE is always greater than 0
const int ARRAY_SIZE = 5;

//Pre-conditions:	1.the array size must be greater
//				than 0
//			2. fromIndex <= toIndex
//Post-condition: 	the maximum between 'fromIndex' to 'toIndex',
//			inclusive on both ends of the range,
//			is retured

template <typename T>
T max(T *const p_arrayPtr, int fromIndex, int toIndex)
{
    T *movingPtr = p_arrayPtr + fromIndex;
    T returnThisMax = *movingPtr;

    for (int i = fromIndex + 1; i <= toIndex + 1; i++)
    {
        if (*movingPtr > returnThisMax)
        {
            returnThisMax = *movingPtr;
        }
        movingPtr++;
    }
    return returnThisMax;
}

int main()
{
    int from = 1;
    int to = 3;
    double myArray[ARRAY_SIZE] = { 12.5, 54.8, 37.0, 93.1, 101.9 };
    cout << "Maximum between myArray[" << from << "] to myArray[" << to
         << "] is: " << max(myArray, 1, 3) << endl;

    string myArray2[ARRAY_SIZE] = {"aaaaa", "bbbbbb", "ccccc", "ddddd", "eeeee"};;
    cout << "Maximum between myArray2[" << from << "] to myArray[" << to
         << "] is: " << max(myArray2, 1, 3) << endl;

    int myArray3[ARRAY_SIZE] = {5, 7, 9 , 15, 21};
    cout << "Maximum between myArray3[" << from << "] to myArray[" << to
         << "] is: " << max(myArray3, 1, 3) << endl;
    return 0;
}