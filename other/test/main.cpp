#include <iostream>
#include "test.h"

using namespace std;

void printChars(const string& s) {
    for(auto& i : s) {
        cout << i << endl;
    }
}

int main() {
    myFunc();
    printChars("Hello World");
    return 0;
}
