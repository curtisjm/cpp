
#include "people.h"

Person::Person() {
    name = "*undefined*";
    address = "*undefined*";
}

Person::Person(std::string name, std::string address) {
    this->name = std::move(name);
    this->address = std::move(address);
}

std::string Person::toString() {
    return "Name: " + name + "\nAddress: " + address + "\n";
}

Employee::Employee() : Person() {
    office = "*undefined*";
    dateHired = "*undefined*";
}

Employee::Employee(std::string name, std::string address, std::string office, std::string dateHired) : Person(std::move(name), std::move(address)){
    this->office = std::move(office);
    this->dateHired = std::move(dateHired);
}

std::string Employee::toString() {
    return Person::toString() + "\nOffice: " + office + "\nDate Hired: " + dateHired + "\n";
}

Faculty::Faculty() : Employee() {
    officeHours = "*undefined*";
    rank = "*undefined*";
}

Faculty::Faculty(std::string name, std::string address, std::string office, std::string dateHired,
                 std::string officeHours, std::string rank) : Employee(std::move(name), std::move(address), std::move(office), std::move(dateHired)) {
    this->officeHours = std::move(officeHours);
    this->rank = std::move(rank);
}

std::string Faculty::toString() {
    return Employee::toString() + "Office Hours: " + officeHours + "\nRank: " + rank + "\n";
}

Staff::Staff() : Employee() {
    title = "*undefined*";
}

Staff::Staff(std::string name, std::string address, std::string office, std::string dateHired, std::string title)
            : Employee(std::move(name), std::move(address), std::move(office), std::move(dateHired)) {
    this->title = std::move(title);
}

std::string Staff::toString() {
    return Employee::toString() + "Title: " + title;
}
