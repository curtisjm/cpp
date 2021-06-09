// File: Blockchains.cpp
// Name: Curtis Mitchell
// Date: 4/14/21
// Compiler Used: MinGW-w64
// Purpose: Find all of the occurrences of the word "blockchain" in a file

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream input(R"(C:\Users\curti\Google Drive\Programming\C++\Comp 130\Homework8\blockchains.txt)");
    string line;
    string word = "blockchain";

    int count = 0;

    if(input.is_open()) {
        while(!input.eof()) {
            getline(input, line);

            for(char& c : line) {
                c = tolower(c);
            }

            int pos = line.find(word, 0);
            while (pos != string::npos) {
                count++;
                pos = line.find(word, pos + 1);
            }
        }
    }

    cout << "Blockchain occurrences: " << count;

    return 0;
}
