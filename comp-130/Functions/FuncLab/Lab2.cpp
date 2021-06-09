#include <iostream>

using namespace std;

int sumDigits(long num) {

    int sum, remainder = 0;
    
    while(num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    return sum;
}

int main() {

    long num = 0;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "The sum of the digits in " << num << " = " << sumDigits(num);

    return 0;
}