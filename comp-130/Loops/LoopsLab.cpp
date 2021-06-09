// File: Loops.cpp
// Name: Curtis Mitchell
// Date: 2/23/21
// Compiler Used: MinGW-W64
// Purpose: Practice looping

#include <iostream>
#include <ctime>

using namespace std;

#define prog 4

#if prog == 4
int main() {

    srand(time(0));

    int userGuess = 0;
    int flipResult = 0;
    string result = "";
    string correct = "";

    cout << "I am flipping a coin, enter 1 (heads) or 0 (tails): ";
    cin >> userGuess;
    while(userGuess != 1 && userGuess != 0) {
        cout << "Invalid Input. Enter 1 (heads) or 0 (tails): ";
        cin >> userGuess;
    }

    // = lowerBound + rand() % (upperBoud - lowerBound + 1)
    flipResult = 0 + rand() % (1 - 0 + 1);

    if(flipResult == 1) {
        result = "heads";
    } else {
        result = "tails";
    }
    cout << "Computer generated " << result << endl;

    if(flipResult == userGuess) {
        correct = "right";
    } else {
        correct = "wrong";
    }
    cout << "You guessed " << correct << "!";

    return 0;
}

#elif prog == 3
int main() {

    cout << "With while loop: " << endl;
    int num = 0;
    while(num <= 117) {
        cout << num << " ";
        num += 9;
    }

    cout << endl << "With for loop: " << endl; 
    for(int i = 0; i <= 117; i += 9) {
        cout << i << " ";
    }
 
    return 0;
}

#elif prog == 2
int main() {

    // for(<declaration>; <continuation>; <increment>)

    for(int i = 10; i < 100; i += 20) {
        cout << i << endl;
    }

    return 0;
}

#elif prog == 1
int main() {
    
    int counter = 10;

    while(counter < 100) {
        cout << (counter * 2) << endl;
        // counter = counter + 10;
        counter += 10;
    }
    
    return 0;
}
#endif