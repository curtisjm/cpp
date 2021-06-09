// File: Selection2.cpp
// Name: Curtis Mitchell
// Date: 2/9/21
// Compiler Used: MinGW-W64
// Purpose: Learn about selection in C++

#include <iostream>
#include <algorithm>    // for sort()

using namespace std;

#define prog 6

#if prog == 7
int main() {

    int a = 0, b = 0, c = 0;

    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    if(a > b) {
        swap(a, b);
    }
    if(b > c) {
        swap(b, c);
    }
    if(a > b) {
        swap(a, b)
    }

    cout << a << " " << b << " " << c;

    return 0;
}

#elif prog == 6
int main() {

    int a = 0, b = 0, c = 0, temp = 0;

    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    int nums[3] = {a, b, c};

    for(int i = 1; i < sizeof(nums) / sizeof(nums[0]); i++) {
        for(int j=0; j < (sizeof(nums) / sizeof(nums[0])) - 1; j++) {
           if(nums[j] > nums[j + 1]) {
               int temp = nums[j + 1];
               nums[j + 1] = nums[j];
               nums[j] = temp;
           }
        } 
    }

    cout << "Sorted: ";
    for(int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++ ) {
        cout << nums[i] << " ";
    }

    return 0;
}

#elif prog == 5
int main() {

    int a = 0, b = 0, c = 0;

    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    if(a < b && a < c && b < c) {
        cout << a << " " << b << " " << c << endl;
    } else if(a < b && a < c && c < b) {
        cout << a << " " << c << " " << b << endl;
    } else if(a < b && c < a) {
        cout << c << " " << a << " " << b << endl;
    } else if(b < a && c < a && c < b) {
        cout << c << " " << b << " " << a << endl;
    } else if(b < a && c < a && b < c) {
        cout << b << " " << c << " " << a << endl;
    } else if(b < a && a < c) {
        cout << b << " " << a << " " << c << endl;
    }

    return 0;
}

#elif prog == 4
int main() {

    int a = 0, b = 0, c = 0;

    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    if(a < b) {
        if(a < c) {
            if(b < c) {
                cout << a << " " << b << " " << c << endl;
            } else {
                cout << a << " " << c << " " << b << endl;
            }
        } else {
            cout << c << " " << a << " " << b << endl;
        }
    } else {
        if(a < c) {
            cout << b << " " << a << " " << c << endl;
        } else {
            if(b < c) {
                cout << b << " " << c << " " << a << endl;
            } else {
                cout << c << " " << b << " " << a << endl;
            }
        }
    }

    return 0;
}

#elif prog == 3
int main() {

    int a = 0, b = 0, c = 0;

    cout << "Enter a, b, and c: ";
    cin >> a >> b >> c;

    int nums[3] = {a, b, c};
    sort(nums, nums + 3);

    cout << "Sorted: ";
    for(int i = 0; i < 3; i++ ) {
        cout << nums[i] << " ";
    }

    return 0;
}

#elif prog == 2
int main() {

    int x = 5;
    int y = 9;
    int temp = 0;

    temp = y;
    y = x;
    x = temp;

    cout << "x = " << x << " y = " << y;

    return 0;
}

#elif prog == 1
int main() {
    
    double score = 0.0;
    char grade = ' ';
    string prompt = "Enter a score: ";

    cout << prompt;
    cin >> score;

    while(score < 0) {
        cout << "Invalid input. Score must be greater than 0." << endl;
        cout << "Enter a new score: ";
        cin >> score;
    }

    if(score >= 90) {
        grade = 'A';
    } else if(score >= 80) {
        grade = 'B';
    } else if(score >= 70) {
        grade = 'C';
    } else if(score >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "Grade is " << grade;
    
    return 0;
}
#endif