
#include <iostream>

using namespace std;

int findGCD(int a, int b) {
    if(a % b == 0) {
        return b;
    } else {
        return findGCD(b, (a % b));
    }
}

int main() {
    int a = 0;
    int b = 0;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "GCD: " << findGCD(a, b);

    return 0;
}