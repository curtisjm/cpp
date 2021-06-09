// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

// & address of operator, passing by reference to location in memory
void foo(int& a, int& b, int& c) {
    a++;
    b++;
    c++;

}

int main() {

    int x = 10;
    int y = 20;
    int z = 30;
    foo(x, y, z);

    cout << x << ' ' << y << ' ' << z << endl;

    return 0;
}