#include <iostream>

using namespace std;

#define prog 6

#if prog == 1
int main() {

    double sales = 0.0;

    cout << "Enter sales: ";
    cin >> sales;

    do {
        cout << "Bonus = " << 0.1 * sales << endl;
        cout << "Enter sales again: ";
        cin >> sales;
    } while(sales != -1);

    return 0;
}

#elif prog == 2
int main() {

    double sales = 0.0;

    cout << "Enter sales: ";
    cin >> sales;

    while(sales != -1) {
        cout << "Bonus = " << 0.1 * sales << endl;  
        cout << "Enter sales again: ";
        cin >> sales;         
    }

    return 0;
}

#elif prog == 3
int main() {

    for(int line = 1; line < 4; line++) {
        for(int numAsterisks = 1; numAsterisks <= line; numAsterisks++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

#elif prog == 4
int main() {

    int count = 1;
    int numRows = 0;

    cout << "How many rows to you want your pyramid to have? ";
    cin >> numRows;
    while(numRows <= 0) {
        cout << "Rows must be a positive integer. Try again .";
        cin >> numRows;
    }

    if(numRows < 10) {
        // num rows
        for(int i = numRows; i > 0; i--) {

            // left side spaces
            for(int x = 1; x <= i * 2; x++) {
                cout << " ";
            }

            // left side numbers and spaces
            for(int x = 1; x <= count; x++) {
                cout << x << " ";
            }

            // right side numbers and spaces
            for(int x = count - 1; x >= 1; x--) {
                cout << x << " ";
            }

            // next line and increment count to change middle number and how many numbers are on the next line
            cout << endl;
            count++;
        }
    } else if(numRows < 100) {
        // num rows
        for(int i = numRows; i > 0; i--) {

            // left side spaces
            for(int x = 1; x <= i * 2; x++) {
                cout << " ";
            }

            // left side numbers and spaces
            for(int x = 1; x <= count; x++) {
                cout << x << "  ";
            }

            // right side numbers and spaces
            for(int x = count - 1; x >= 1; x--) {
                cout << x << "  ";
            }

            // next line and increment count to change middle number and how many numbers are on the next line
            cout << endl;
            count++;
        }
    }
    

    return 0;
}

#elif prog == 5
int main() {

    // number of rows
    for(int i = 1; i < 5; i++) {
        // number of columns
        cout << i << "\t";
        for(int j = 0; j < 10; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}

#elif prog == 6
int main() {

    int width = 0;

    cout << "Enter a width: ";
    cin >> width;
    while(width <= 0) {
        cout << "Enter a positive integer: ";
        cin >> width;
    }

    for(int i = 1; i < width; i++) {

        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for(int i = width; i > 0; i--) {

        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
#endif