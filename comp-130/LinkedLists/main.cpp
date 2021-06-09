//File: singlyLinkedList.cpp
//Date: 5/20/2021
//Name: Curtis Mitchell
//Compiler used: MinGW-w64
//Purpose: Linking and removing of nodes in a singly-linked list

#include <iostream>
using namespace std;

struct Node {
    int data = 0;
    Node *link = nullptr;
};

void displayList(Node* headPtr) {
    //Use a movingPtr to traverse and display
    Node *movingPtr = headPtr;
    while (movingPtr != nullptr) {
        cout << movingPtr->data << ' ';
        movingPtr = movingPtr->link;
    }
}

int main() {
    Node *headPtr = nullptr;
    Node *tailPtr = nullptr;
    Node *movingPtr = nullptr;

    //Create a singly-linked list of 10 nodes containing values 1 through 10
    for (int i = 1; i <= 10; i++) {
        if (tailPtr == nullptr) {
            tailPtr = new Node;
            headPtr = tailPtr;
        }
        else {
            tailPtr->link = new Node;
            //Move tailPtr to the new node
            tailPtr = tailPtr->link;
        }
        tailPtr->data = i;
    }

    cout << "Traverse and display the linked list:\t";
    displayList(headPtr);

    cout << "\nAfter reversing list:\t\t\t";
    displayList(headPtr);

    //Unlink the first node, remember to deallocate the node
    Node *tempNode = headPtr;
    if(headPtr != nullptr) {
        headPtr = headPtr->link;
        tempNode = nullptr;
        delete tempNode;
    }

    cout << "\nAfter removing the first node:\t\t";
    displayList(headPtr);

    //Unlink the last node, remember to deallocate the node
    movingPtr = headPtr;
    while(movingPtr->link->link != nullptr) {
        movingPtr = movingPtr->link;
    }
    delete tailPtr;
    tailPtr = movingPtr;
    tailPtr->link = nullptr;

    cout << "\nAfter removing the last node:\t\t";
    displayList(headPtr);

    //Unlink the node containing the value 5, remember to deallocate the node
    movingPtr = headPtr;
    Node *previousNode = nullptr;
    while(movingPtr != nullptr && movingPtr->data != 5) {
        previousNode = movingPtr;
        movingPtr = movingPtr->link;
    }

    if(movingPtr != nullptr) {
        previousNode->link = movingPtr->link;
        movingPtr = nullptr;
        delete movingPtr;
    }

    cout << "\nAfter removing node with value of 5:\t";
    displayList(headPtr);

    cout << endl;
    return 0;
}

