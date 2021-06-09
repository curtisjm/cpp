// File: Strings.cpp
// Name: Curtis Mitchell
// Date: 2/18/20
// Compiler Used: MinGW-W64
// Purpose:

#include <iostream>
// include when working with strings
#include <string>

using namespace std;

#define prog 3

#if prog == 3
int main() {

    string input = "";
    string major = "";
    string year = "";
    bool print = true;

    cout << "Enter two characters: ";
    cin >> input;

    switch(input.at(0)) {
        case 'M':
            major = "Mathematics";
            break;
        case 'C':
            major = "Computer Science";
            break;
        case 'I':
            major = "Information Technology";
            break;
        default:
            cout << "Invalid major code" << endl;
            print = false;
    }

    switch(input.at(1)) {
        case '1':
            year = "Freshman";
            break;
        case '2':
            year = "Sophomore";
            break;
        case '3':
            year = "Junior";
            break;
        case '4':
            year = "Senior";
            break;
        default:
            cout << "Invalid status code" << endl;
            print = false;
    }

    if(print) {
       cout << major << " " << year << endl; 
    }
    
    return 0;
}

#elif prog == 2
int main() {

    string city = "";

    cout << "Enter a city: ";
    cin >> city;

    cout << "Length of input: " << city.length() << endl;

    cout << "Enter another city: ";
    cin >> city;
    cout << city << endl;

    return 0;
}

#elif prog == 1
int main() {
    
    string message = "Welcome to C++";

    cout << "Message: " << message << endl;
    cout << "Length = " << message.length() << endl;
    cout << "Chatacter at index 11: " << message.at(11) << endl;

    return 0;
}
#endif