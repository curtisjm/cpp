#include <iostream>

using namespace std;

const int ROW_SIZE = 3;
const int COL_SIZE = 4;

double sumColumn(const double m[][COL_SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < COL_SIZE; j++) {
            if(j == columnIndex) {
                sum += m[i][j];
            }
        }
    }
    return sum;
}

int main() {

    double matrix[ROW_SIZE][COL_SIZE] = {0};

    cout << "Enter a 3-by-4 matrix row by row: " << endl;

    double input = 0;
    for(int i = 0; i < ROW_SIZE; i++) {
        for(int j = 0; j < COL_SIZE; j++) {
            cin >> input;
            matrix[i][j] = input;
        }
    }

    for(int i = 0; i < COL_SIZE; i++) {
        cout << "Sum of elements at column " << i << " is " << sumColumn(matrix, ROW_SIZE, i) << endl;
    }

    return 0;
}