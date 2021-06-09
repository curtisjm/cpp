
#include <iostream>

using namespace std;

void printPattern(int n) {
    if(n < 1) {
        return;
    } else {
        for(int i = 1; i <= n; i++) {
            cout << "*";
        }
        cout << endl;

        printPattern(n - 1);

        for(int i = 1; i <= n; i++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n = 0;

    cout << "Enter an integer: ";
    cin >> n;

    printPattern(n);

    return 0;
}