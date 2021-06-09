
#ifndef INHERITANCE_PRESIDENT_H
#define INHERITANCE_PRESIDENT_H

#include <iostream>
using namespace std;

class Person {
public:
    Person();
    explicit Person(string name);
    virtual void showIdentity();
protected:
    string name = "N/A";
};

class President : public Person {
public:
    President();
    explicit President(string name);
    President(string name, string country);
    President(string name, string country, string party);
    President(string name, string country, string party, double yearsInService);
    void showIdentity() override;
private:
    string country = "N/A";
    string party = "N/A";
    double yearsInService = 0;
};
#endif