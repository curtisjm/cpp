// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-W64
// Purpose:

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define prog 1

#if prog == 2
int main() {

    
    return 0;
}

#elif prog == 1
int main() {
    
    ofstream output;
    ifstream input;
    string lastName = "";
    int number = 0;
    
    output.open("example.txt");
    output << "Hello world\n" << 123 << endl;
    output.close();

    input.open("example.txt");
    getline(input, lastName);
    input >> number;

    cout << "Last name: " << lastName << " Number: " << number;
    
    return 0;
}
#endif