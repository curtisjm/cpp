
#include <iostream>
#include "president.h"

using namespace std;

int main() {

    President president1;
    President president2("Barack Obama");
    President president3("Pranab Mukherjee", "India");
    President president4("Vladimir Putin", "Russia", "United Russia");
    President president5 ("Francois Hollande", "France", "Socialist Party", 3);
    cout << "\nPRESIDENTS......................" << endl;
    cout << "\nPRESIDENT 1:" << endl;
    president1.showIdentity();
    cout << "\nPRESIDENT 2:" << endl;
    president2.showIdentity();
    cout << "\nPRESIDENT 3:" << endl;
    president3.showIdentity();
    cout << "\nPRESIDENT 4:" << endl;
    president4.showIdentity();
    cout << "\nPRESIDENT 5:" << endl;
    president5.showIdentity();

    return 0;
}