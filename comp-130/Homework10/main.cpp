// File: main.cpp
// Name: Curtis Mitchell
// Date: 4/29/21
// Compiler Used: MinGW-w64
// Purpose: Find rows, columns and diagonals in two-dimensional vectors that contain only 0's and 1's

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

vector<vector<int>> fillMatrix() {
    int length = 0;
    cout << "Enter the length of sides for the matrix: ";
    cin >> length;

    vector<vector<int>> matrix;
    for(int i = 0; i < length; i++) {
        vector<int> tempRow;
        tempRow.reserve(length);
        for(int j = 0; j < length; j++) {
            tempRow.push_back(0 + rand() % (1 - 0 + 1));
        }
        matrix.push_back(tempRow);
    }
    return matrix;
}

void checkRows(const vector<vector<int>>& matrix) {
    bool found = false;
    for(int i = 0; i < matrix.size(); i++) {
        int count0 = 0, count1 = 0;
        for(int j : matrix[i]) {
            j == 0 ? count0++ : count1++;
        }
        if(count0 == matrix.size()) {
            cout << "Row " << i + 1 << " has all zeros!" << endl;
            found = true;
        } else if(count1 == matrix.size()) {
            cout << "Row " << i + 1 << " has all ones!" << endl;
            found = true;
        }
    }
    if(!found) {
        cout << "No same numbers found in any row." << endl;
    }
}

void checkColumns(const vector<vector<int>>& matrix) {
    bool found = false;
    for(int i = 0; i < matrix.size(); i++) {
        int count0 = 0, count1 = 0;
        for(int j = 0; j < matrix[i].size(); j++) {
            matrix[j][i] == 0 ? count0++ : count1++;
        }
        if(count0 == matrix.size()) {
            cout << "Column " << i + 1 << " has all zeros!" << endl;
            found = true;
        } else if(count1 == matrix.size()) {
            cout << "Column " << i + 1 << " has all ones!" << endl;
            found = true;
        }
    }
    if(!found) {
        cout << "No same numbers found in any Column." << endl;
    }
}

void checkPrincipalDiagonal(const vector<vector<int>>& matrix) {
    int count0 = 0, count1 = 0;
    for(int i = 0; i < matrix.size(); i++) {
        matrix[i][i] == 0 ? count0++ : count1++;
    }
    if(count0 == matrix.size()) {
        cout << "Principal diagonal has all zeros!" << endl;
    } else if(count1 == matrix.size()) {
        cout << "Principal diagonal has all ones!" << endl;
    } else {
        cout << "No same numbers found in the principal diagonal." << endl;
    }
}

void checkSecondaryDiagonal(const vector<vector<int>>& matrix) {
    int count0 = 0, count1 = 0;
    for(int i = 0; i < matrix.size(); i++) {
        matrix[i][matrix.size() - i - 1] == 0 ? count0++ : count1++;
    }
    if(count0 == matrix.size()) {
        cout << "Secondary diagonal has all zeros!" << endl;
    } else if(count1 == matrix.size()) {
        cout << "Secondary diagonal has all ones!" << endl;
    } else {
        cout << "No same numbers found in the secondary diagonal." << endl;
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    cout << endl;
    for(auto& i : matrix) {
        for(int j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    srand(time(0));

    vector<vector<int>> matrix = fillMatrix();
    printMatrix(matrix);

    checkRows(matrix);
    checkColumns(matrix);
    checkPrincipalDiagonal(matrix);
    checkSecondaryDiagonal(matrix);

    return 0;
}