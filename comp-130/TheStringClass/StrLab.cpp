// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isAnagram(const string& s1, const string& s2) {
    string str1 = s1;
    string str2 = s2;

    if(str1.length() != str2.length()) {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1.compare(str2) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {

    string str1 = "";
    string str2 = "";

    cout << "Enter string s1: ";
    cin >> str1;
    cout << "Enter string s2: ";
    cin >> str2;

    if(isAnagram(str1, str2)) {
        cout << str1 << " and " << str2 << " are anagrams";
    } else {
        cout << str1 << " and " << str2 << " are not anagrams";
    }

    return 0;
}