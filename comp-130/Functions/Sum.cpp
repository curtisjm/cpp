#include <iostream>
#include "Sum_H.h"

using namespace std;

// have to declare functions above main
// called forward declaring

void sayHello();

int main() {

    int num1, num2 = 0;

    cout << "Enter a range of numbers: ";
    cin >> num1 >> num2;

    cout << "Sum of numbers from " << num1 << " to " << num2 << ": " << sum(num1, num2) << endl;

    sayHello();

    return 0;
}

void sayHello() {
    cout << "Hello there!";
}