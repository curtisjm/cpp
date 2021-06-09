// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    vector<vector<int>> matrix(9);

    for(int i = 0; i < 50; i++) {
        int num = 10 + rand() % (100 - 10);
        int firstDigit = num / 10;
        matrix[firstDigit - 1].push_back(num);
    }

    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}