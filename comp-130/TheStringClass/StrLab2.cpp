// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

string commonChars(const string& s1, const string& s2) {
    string commonChars = "";

    for(int i = 0; i < s1.length(); i++) {
        if(s2.find(s1[i]) != string::npos) {
            if(commonChars.find(s1[i]) == string::npos) {
              commonChars += s1[i];
            }
        }
    }

    return commonChars;
}

int main() {

    string str1 = "";
    string str2 = "";

    cout << "Enter string s1: ";
    cin >> str1;
    cout << "Enter string s2: ";
    cin >> str2;

    cout << "Common characters are: " << commonChars(str1, str2);

    return 0;
}