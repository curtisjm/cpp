// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& myVec) {
    for(auto& i : myVec) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> myVec = {1, 3, 5, 7, 9};
    myVec.reserve(100);

    cout << "Size: " << myVec.size() << "  |  Capacity: " << myVec.capacity() << endl;
    myVec.shrink_to_fit();
    cout << "Size: " << myVec.size() << "  |  Capacity: " << myVec.capacity() << endl;

    cout << "First vector: ";
    printVector(myVec);

    vector<int> myVec2(3);
    myVec2.assign(myVec.begin() + 1, myVec.end() - 1);
    cout << "First vector: ";
    printVector(myVec2);

    return 0;
}