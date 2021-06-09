// driver.cpp
// Name: Curtis Mitchell
// Date: 5/9/21
// Compiler used: MinGW-w64
// Files needed: Habitats.h and Habitats.cpp
// Purpose: To test the Pond class, including all inherited functionalities inherited from Habitat base class

#include "Habitats.h"
#include <iostream>

using namespace std;

int main() {
    Pond fishPond1;
    cout << "*** Add species to the pond habitat 1 ***";
    fishPond1.setASpecies("alligators");
    fishPond1.setASpecies("dragonflies");
    fishPond1.setASpecies("gold fish");
    fishPond1.setASpecies("frogs");
    fishPond1.setASpecies("water hyacinth");
    fishPond1.setASpecies("ducks");
    cout << "\nSetting current temperature(82.5), air humidity (95%)...\n";
    fishPond1.setTemperature(82.5);
    fishPond1.setHumidity(95);
    cout << "Temperate in the pond: " << fishPond1.getTemperature() << endl;
    cout << "Air humidity: " << fishPond1.getHumidity() << endl;
    fishPond1.displaySpeciesList();
    fishPond1.setSalinity(0.005);
    cout << "Salinity: " << fishPond1.getSalinity() << endl;

    cout << "\n*** Add species to the pond habitat 2 ***\n";
    Pond fishPond2(100, 99);
    fishPond2.setASpecies("millards");
    fishPond2.setASpecies("lillies");
    fishPond2.setASpecies("eels");
    fishPond2.setASpecies("toads");
    fishPond2.setASpecies("grass carps");
    cout << "Setting humidity(65%)...\n";
    fishPond2.setHumidity(65);
    cout << "Temperature = " << fishPond2.getTemperature() << endl;
    cout << "Air humidity = " << fishPond2.getHumidity() << endl;
    cout << "Salinity = " << fishPond2.getSalinity() << endl;
    fishPond2.displaySpeciesList();
    cout << endl;

    return 0;
}