
#include <iostream>
#include "people.h"

using namespace std;

int main() {

    Person* arr[4];

    arr[0] = new Person("Grandma Ethel", "001 Charm St.");
    arr[1] = new Employee("Boss Man", "007 Bond St.", "1 # 007", "01-31-1970");
    arr[2] = new Faculty("Dr. John", "234 Saddle St.", "Math Building # 112", "5-15-2010", "MW 2:00pm - 4:00pm", "Associate Professor");
    arr[3] = new Staff("Paul", "007 Bond St.", "Bldg. 1 # 998", "01-31-2017", "Data Entry Specialist");

    for(Person* p : arr) {
        cout << p->toString();
    }

    return 0;
}