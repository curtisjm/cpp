// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <string>

using namespace std;

int main() {

    char charArray[5] = {'C', 'O', 'M', '\0', 'Z'};
    string myStr = "";

    myStr.assign(charArray);
    cout << myStr;

    return 0;
}