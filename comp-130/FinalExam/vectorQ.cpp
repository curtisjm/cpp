// File: vectorQ.cpp
// Name: Curtis Mitchell
// Date: 5/25/21
// Compiler Used: MinGW-w64
// Purpose: Calculate, store, and print values in a matrix

#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

vector<vector<int>> fillMatrix() {
    int width = 4;
    vector<vector<int>> matrix;
    for(int i = 0; i < width; i++) {
        vector<int> tempRow;
        tempRow.reserve(width);
        for(int j = 0; j < width; j++) {
            tempRow.push_back((int) pow(i+1, j+1));
        }
        matrix.push_back(tempRow);
    }
    return matrix;
}

void printMatrix(const vector<vector<int>>& matrix) {
    cout << endl;
    for(auto& i : matrix) {
        for(int j : i) {
            cout << setw(4) << j << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    printMatrix(fillMatrix());
    return 0;
}