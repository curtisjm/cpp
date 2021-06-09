#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {

    srand(time(0));

    const int ROW_SIZE = 4;
    const int COL_SIZE = 4;
    int lowerBound = 10;
    int upperBound = 90;

    double matrix[ROW_SIZE][COL_SIZE] = {0};

    for(int i = 0; i < ROW_SIZE; i++) {
        for(int j = 0; j < COL_SIZE; j++) {
            matrix[i][j] = lowerBound + rand() % (upperBound - lowerBound + 1);
        }
    }

    cout << endl;
    for(int i = 0; i < ROW_SIZE; i++) {
        for(int j = 0; j < COL_SIZE; j++) {
            cout << left << setw(4) << matrix[i][j];
        }
        cout << endl;
    }

    double sumMDV = 0;
    cout << "\nMajor diagonal values: ";
    for(int i = 0; i < ROW_SIZE; i++) {
        cout << matrix[i][i] << ' ';
        sumMDV += matrix[i][i];
    }
    cout << "\nSum of major diagonal values: " << sumMDV;

    return 0;
}