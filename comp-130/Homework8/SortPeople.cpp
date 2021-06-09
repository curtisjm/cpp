// File: SortPeople.cpp
// Name: Curtis Mitchell
// Date: 4/14/21
// Compiler Used: MinGW-w64
// Purpose: Read data on people into an array, sort them by age, then display their values

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct Person {
    string name = "";
    int age = 0;
    string status = "";
};

void swap(Person *p1, Person *p2) {
    Person temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partition(Person arr[], int left, int right) {
    int pivot = arr[right].age;

    int i = left - 1;

    for(int j = left; j <= right - 1; j++) {
        if(arr[j].age < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[right]);

    return (i + 1);
}

void quickSort(Person arr[], int left, int right) {
    if(left >= right) {
        return;
    }

    int p = partition(arr, left, right);

    quickSort(arr, left, p - 1);
    quickSort(arr, p + 1, right);
}

void printArray(Person people[], int numberOfPeople) {
    for (int i = 0; i < numberOfPeople; i++) {
        cout << people[i].name << " " << people[i].age << " " << people[i].status << endl;
    }
}

int main() {
    Person people[20];
    int numberOfPeople = 0;
    Person eachPerson;

    string line = " ";
    ifstream input("C:\\Users\\curti\\Google Drive\\CLion\\Comp 130\\Homework8\\people.txt");

    if (input.is_open()) {
        while(!input.eof()) {
            getline (input, line);
            stringstream ss (line);

            ss >> eachPerson.name;
            ss >> eachPerson.age;
            ss >> eachPerson.status;

            people[numberOfPeople] = eachPerson;

            numberOfPeople++;
        }
    }

    quickSort(people, 0, numberOfPeople - 1);
    printArray(people, numberOfPeople);

    return 0;
}
