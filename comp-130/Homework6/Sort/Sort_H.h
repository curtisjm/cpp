// File: Sort_H.h
// Name: Curtis Mitchell
// Date: 3/11/21
// Compiler: MinGW-w64
// File (s): Sort_H.cpp
// Purpose: to sort an array of doubles
// Pre-conditions: must provide an array of doubles and the upper and lower indices of numbers being sorted
// Post-conditions: will sort the given array and if desired, print it

#ifndef curtisMitchell_COMP130

#define curtisMitchell_COMP130

void swap(double* num1, double* num2);
int partition(double nums[], int left, int right);
void quickSort(double nums[], int left, int right);
void printNums(double nums[], int length);

#endif