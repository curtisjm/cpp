// File: Days.cpp
// Name: Curtis Mitchell
// Date: 2/11/21
// Compiler Used: MinGW-W64
// Purpose:

#include <iostream>

using namespace std;

int main() {
    
    int current = 0;
    int numDays = 0;
    int future = 0;
    string currentDay = "";
    string futureDay = "";

    cout << "\nEnter today's day: ";
    cin >> current;

    if(current > 6 || current < 0) {
        cout << "Invalid input. Current day has to be less between 0 and 6";
        cout << endl;

    } else {
         
        cout << "Enter the number of days elapsed since today: ";
        cin >> numDays;

        future = (numDays + current) % 7;

        switch(current) {
            case 0:
                currentDay = "Sunday";
                break;
            case 1:
                currentDay = "Monday";
                break;
            case 2:
                currentDay = "Tuesday";
                break;
            case 3:
                currentDay = "Wednesday";
                break;
            case 4:
                currentDay = "Thursday";
                break;
            case 5:
                currentDay = "Friday";
                break;
            case 6:
                currentDay = "Saturday";
                break;
        }
        
        switch(future) {
            case 0:
                futureDay = "Sunday";
                break;
            case 1:
                futureDay = "Monday";
                break;
            case 2:
                futureDay = "Tuesday";
                break;
            case 3:
                futureDay = "Wednesday";
                break;
            case 4:
                futureDay = "Thursday";
                break;
            case 5:
                futureDay = "Friday";
                break;
            case 6:
                futureDay = "Saturday";
                break;
        }

        cout << "\nToday is " << currentDay << " and the future day is " << futureDay;
        cout << endl << endl;
    }
   
    return 0;
}