#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

struct Person
{
  string name;
  int age;
  string job;
};

void swap(Person *p1, Person *p2) {
    Person temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void sortPeople(Person people[], int numberOfPeople){
    bool swapped = false;
    for(int i = 0; i < numberOfPeople - 1; i++) {
        // comparison loop
        swapped = false;
        for(int j = 0; j < numberOfPeople - i - 1; j++) {
            if(people[j].age > people[j+1].age) {
                swap(&people[j], &people[j+1]);
                swapped = true;
            }
        }
        // elements not swapped by comparison loop
        if(!swapped) {
            break;
        }
    }
 }

 void printArray(Person people[], int numberOfPeople) {
     cout << "Sorted age list:\n\n";
     for (int i = 0; i < numberOfPeople; i++) {
         cout << "Name: " << people[i].name << endl;
         cout << "Age: " << people[i].age << endl;
         cout << "Job: " << people[i].job << endl;
         cout << endl;
     }
 }

//bubble sort, sort according to age field, swap whole object,

int main ()
{

  Person people[20];
  int numberOfPeople = 0;

  Person eachPerson;

  string line = " ";
  ifstream input ("people.txt");

  if (input.is_open())
  {
    while(!input.eof())
    {
      getline (input, line);
      stringstream ss (line);

      ss >> eachPerson.name;
      ss >> eachPerson.age;
      ss >> eachPerson.job;

      people[numberOfPeople] = eachPerson;

      numberOfPeople++;
    }
  }

  sortPeople(people, numberOfPeople);
  printArray(people, numberOfPeople);

  return 0;
}
