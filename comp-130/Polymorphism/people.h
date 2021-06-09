
#ifndef POLYMORPHISM_PEOPLE_H
#define POLYMORPHISM_PEOPLE_H

#include <iostream>
#include <string>

class Person {
public:
    Person();
    Person(std::string name, std::string address);
    virtual std::string toString();
private:
    std::string name;
    std::string address;
};

class Employee : public Person {
public:
    Employee();
    Employee(std::string name, std::string address,
             std::string office, std::string dateHired);
    std::string toString() override;
private:
    std::string office;
    std::string dateHired;
};

class Faculty : public Employee {
public:
    Faculty();
    Faculty(std::string name, std::string address,
            std::string office, std::string dateHired,
            std::string officeHours, std::string rank);
    std::string toString() override;
private:
    std::string officeHours;
    std::string rank;
};

class Staff : public Employee {
public:
    Staff();
    Staff(std::string name, std::string address,
          std::string office, std::string dateHired,
          std::string title);
    std::string toString() override;
private:
    std::string title;
};

#endif
