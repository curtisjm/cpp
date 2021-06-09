#include <iostream>

using namespace std;

int main() {

    long num = 0;
    long remainder = 0;
    long num2 = 0; 

    cout << "Enter an integer: ";
    cin >> num;
    cout << endl;

    int i = 1;
    while(num != 0) {
        cout << "-- Loop " << i << " --" << endl;
        remainder = num % 10;
        cout << "Last digit: " << remainder << endl;
        num2 = num2 * 10 + remainder;
        cout << "Reversed number: " << num2 << endl;
        num /= 10;
        cout << "Number: " << num << endl;
        cout << endl;
        i++;
    }

    cout << "Final Reversed Number: " << num2;

    return 0;
}