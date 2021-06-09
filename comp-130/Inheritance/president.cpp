
#include "president.h"
#include <iostream>
using namespace std;

Person::Person() = default;

Person::Person(string name) {
    this->name = std::move(name);
}

void Person::showIdentity() {
    cout << "Name: " << name << endl;
}

President::President() : Person() {}

President::President(string name) : Person(std::move(name)) {}

President::President(string name, string country) : Person(std::move(name)) {
    this->country = std::move(country);
}

President::President(string name, string country, string party) : Person(std::move(name)) {
    this->country = std::move(country);
    this->party = std::move(party);
}

President::President(string name, string country, string party, double yearsInService) : Person(std::move(name)) {
    this->country = std::move(country);
    this->party = std::move(party);
    this->yearsInService = yearsInService;
}

void President::showIdentity() {
    Person::showIdentity();
    cout << "Country: " << country << endl;
    cout << "Party: " << party << endl;
    cout << "Years in Service: " << yearsInService << endl;
}