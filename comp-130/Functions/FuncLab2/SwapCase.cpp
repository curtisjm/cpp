// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <string>

using namespace std;

string swapCase(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(isupper(s[i])) {
            s[i] = towlower(s[i]);
        } else if(islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}

int main() {

    string input = "";

    cout << "Enter a string: ";
    getline(cin, input);

    cout << "The new string is: " << swapCase(input);

    return 0;
}