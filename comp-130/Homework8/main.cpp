// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {

    ifstream input("blockchains.txt");
    string line = " ";
    string word = "blockchain";
    string word2 = "Blockchain";

    int count = 0;

    if(input.is_open()) {
        while(!input.eof()) {
            getline (input, line);
            stringstream ss (line);

            int nPos = line.find(word, 0);
            while (nPos != string::npos) {
                count++;
                nPos = line.find(word, nPos + 1);
            }

            int nPos2 = line.find(word2, 0);
            while (nPos2 != string::npos) {
                count++;
                nPos2 = line.find(word2, nPos2 + 1);
            }

        }
    }

    cout << "Occurrences: " << count;

    return 0;
}
