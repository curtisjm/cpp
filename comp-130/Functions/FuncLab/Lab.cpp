#include <iostream>
#include <iomanip>

using namespace std;

int getPentagonalNumber(int n) {
    return (n * (3 * n - 1)) / 2;
}

int main() {

    for(int i = 1; i <= 100; i++) {
        cout << setw(10) << getPentagonalNumber(i);
        if(i % 10 == 0) {
            cout << endl;
        }
    }
    return 0;
}