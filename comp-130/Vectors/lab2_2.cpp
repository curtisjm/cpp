// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <vector>

using namespace std;

struct Date {
    Date(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    int year = 0;
    int month = 0;
    int day = 0;
};

void printVector(const vector<Date>& myVec) {
    for(Date d : myVec) {
        cout << d.day << " / " << d.month << " / " << d.year << endl;
    }
}

int main() {
    Date today(2021, 5, 18);
    Date yesterday(2021, 5, 17);
    vector<Date> dates;

    dates.insert(dates.end(), today);
    dates.insert(dates.end(), yesterday);
    dates.emplace(dates.end(), 2021, 1, 1);
    printVector(dates);

    return 0;
}