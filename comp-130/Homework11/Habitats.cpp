// File name: Habitats.cpp
// Name: Curtis Mitchell
// Date: 5/9/21
// Compiler used: MinGW-w64
// File needed: Habitats.h
// Purpose: To implement a base class Habitat, to implement a derived class Pond

#include "Habitats.h"

Habitat::Habitat() = default;

Habitat::Habitat(double temperature, double humidity) {
    this->temperature = temperature;
    this->humidity = humidity;
}

void Habitat::setTemperature(double temperature) {
    this->temperature = temperature;
}

void Habitat::setHumidity(double humidity) {
    this->humidity = humidity;
}

void Habitat::setASpecies(std::string species) {
    this->species.push_back(species);
    numSpecies++;
}

double Habitat::getTemperature() const {
    return temperature;
}

double Habitat::getHumidity() const {
    return humidity;
}

void Habitat::displaySpeciesList() {
    std::cout << "Current species in the pond..." << std::endl;
    for(auto& s : species) {
        std::cout << "- " << s << std::endl;
    }
}

Pond::Pond() = default;

Pond::Pond(double temperature, double salinity) {
    this->temperature = temperature;
    this->salinity = salinity;
}

void Pond::setSalinity(double salinity) {
    this->salinity = salinity;
}

double Pond::getSalinity() const {
    return salinity;
}
