// File: CountDigits.cpp
// Name: Curtis Mitchell
// Date: 4/26/21
// Compiler Used: MinGW-w64
// Purpose: Count the occurrences of each digit in a string

#include <iostream>
#include <map>

using namespace std;

// I did this assignment a little differently by using a map instead of returning a pointer to an array. Hopefully this is okay.
map<char, int> count(const string& s) {
    map<char, int> counts;

    for(int i = 0; i < 10; i++) {
        counts.insert(make_pair(i + '0', 0));
    }

    char* ptr = const_cast<char *>(s.c_str());
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(*ptr)) {
            counts[*ptr]++;
        }
        ptr++;
    }
    return counts;
}

void count(const string& s, int counts[], int size) {
    int* ptr = counts;
    for(int i = 0; i < size; i++) {
        *ptr = 0;
        ptr++;
    }

    char* ptr2 = const_cast<char *>(s.c_str());
    for(int i = 0; i < s.size(); i++) {
        if(isdigit(*ptr2)) {
            counts[*ptr2 - '0']++;
        }
        ptr2++;
    }
}

int main() {
    const string s = "SSN is 343 32 4545 and ID is 434 34 4323";
    map<char, int> counts = count(s);

    cout << "String 1: \"" << s << "\"" << endl;
    cout << "Occurrences of each digit in the string: (digit : occurrences) " << endl;
    for(auto& it : counts) {
        cout << it.first << " : " << it.second << "\n";
    }
    cout << endl;

    const string s2 = "12203AB3";
    const int size = 10;
    int counts2[size];
    count(s2, counts2, size);

    cout << "String 2: \"" << s2 << "\"" << endl;
    cout << "Occurrences of each digit in the string: (digit : occurrences) " << endl;
    int* ptr = counts2;
    for(int i = 0; i < size; i++) {
        cout << i << " : " << *ptr << endl;
        ptr++;
    }

    return 0;
}