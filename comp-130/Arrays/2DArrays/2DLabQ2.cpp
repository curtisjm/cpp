#include <iostream>

using namespace std;

const int ROW_SIZE = 4;
const int COL_SIZE = 4;

double sumMajorDiagonal(const double m[][COL_SIZE]) {
    double sumMDV = 0;
    for(int i = 0; i < ROW_SIZE; i++) {
        sumMDV += m[i][i];
    }
    return sumMDV;
}

int main() {

    double matrix[ROW_SIZE][COL_SIZE] = {0};

    cout << "Enter a 4-by-4 matrix row by row: " << endl;

    double input = 0;
    for(int i = 0; i < ROW_SIZE; i++) {
        for(int j = 0; j < COL_SIZE; j++) {
            cin >> input;
            matrix[i][j] = input;
        }
    }

    cout << "Sum of the elements in the major diagonal is: " << sumMajorDiagonal(matrix);

    return 0;
}