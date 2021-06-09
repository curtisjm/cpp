// File: arrayQ.cpp
// Name: Curtis Mitchell
// Date: 3/18/21
// Compiler Used: MinGW-w64
// Purpose: to populate and do operations on arrays

#include <iostream>
#include <ctime>

using namespace std;

void populateArray(int parameterArray[], int lowestValue, int highestValue);
void display(int parameterArray[]);
int average(int parameterArray[]);
int countAboveAverage(int pArray[], int theAverage);

const int ARRAY_SIZE = 10;
int main()
{
    // TO DO
    // Since random numbers are used, seed the generator with time value here
    srand(time(0));

    int myArray[ARRAY_SIZE] = { 0 };
    int avg = 0;

    populateArray(myArray, 80, 100);
    cout << "Content of array: ";
    display(myArray);

    // Fully implement the functions before making these calls below
    // TO DO: implement and call the function “average”; display returned value HERE
    avg = average(myArray);
    cout << "Average in the array: " << avg << endl;

    // TO DO: implement and call the function “countAboveAverage”; display the returned value HERE
    cout << "Number of integers above this average: " << countAboveAverage(myArray, avg);

    return 0;
}

void populateArray(int pArray[], int lowestValue, int highestValue)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
    pArray[i] = lowestValue + rand() % (highestValue - lowestValue + 1);
    }
}

void display(int pArray[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
    cout << pArray[i] << ' ';
    }
    cout << endl;
}

// this should be a double in order to get an accurate average, but I will leave it as integer because this is the code that was provided
int average(int pArray[])
{
    // TO DO
    // DO NOT DISPLAY THE RESULT HERE BUT RETURN IT
    // *** NO cout STATEMENT!
    int sum = 0;
    for(int i = 0; i < ARRAY_SIZE; i++) {
        sum += pArray[i];
    }
    return (sum / ARRAY_SIZE);
}

int countAboveAverage(int pArray[], int theAverage)
{
    // TO DO
    // DO NOT DISPLAY THE RESULT HERE BUT RETURN IT
    // *** NO cout STATEMENT!
    int count = 0;
    for(int i = 0; i < ARRAY_SIZE; i++) {
        if(pArray[i] > theAverage) {
            count++;
        }
    }
    return count;
}
