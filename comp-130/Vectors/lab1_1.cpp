// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows = 0;
    vector<vector<int>> matrix;

    cout << "Enter an integer: ";
    cin >> rows;

    for(int i = 0; i < rows; i++) {
        vector<int> temp;
        for(int j = 0; j <= i; j++) {
            temp.push_back(j + 1);
        }
        matrix.push_back(temp);
    }

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
