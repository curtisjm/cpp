// File name: Habitats.h
// Name: Curtis Mitchell
// Date: 5/9/21
// Compiler used: MinGW-w64
// File needed: Habitats.cpp
// Purpose: To define a base class Habitat, to define a derived class Pond

#ifndef HOMEWORK11_HABITATS_H
#define HOMEWORK11_HABITATS_H

#include <iostream>
#include <vector>

class Habitat {
public:
    Habitat();
    Habitat(double temperature, double humidity);
    void setTemperature(double temperature);
    void setHumidity(double humidity);
    void setASpecies(std::string species);
    double getTemperature() const;
    double getHumidity() const;
    void displaySpeciesList();
protected:
    double temperature = 0.0;
    double humidity = 0.0;
    std::vector<std::string> species;
    int numSpecies = 0;
};

class Pond : public Habitat {
public:
    Pond();
    Pond(double temperature, double salinity);
    void setSalinity(double salinity);
    double getSalinity() const;
private:
    double salinity = 0.0;
};

#endif
