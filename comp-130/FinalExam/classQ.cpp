// File: classQ.cpp
// Name: Curtis Mitchell
// Date: 5/25/21
// Compiler Used: MinGW-w64
// Purpose: Implement and test a car class

#include <iostream>

using namespace std;

class Car {
    public:
        Car() = default;
        Car(double initialOdometerReading) {
            odometerReading = initialOdometerReading;
        }
        void drive(double byThisAmount) {
            odometerReading += byThisAmount;
        }
        double getOdometerReading() const {
            return odometerReading;
        }
    private:
        double odometerReading = 0;
};


int main() {
    double input = 0;
    cout << "Enter an initial mileage: ";
    cin >> input;
    Car myCar(input);
    input = -1;
    while(input != 0) {
        cout << "Odometer reading: " << myCar.getOdometerReading() << endl;
        cout << "Enter a distance to drive (in miles) or 0 to quit: ";
        cin >> input;
        if(input == 0) {
            cout << "Bye! Shutting down car..." << endl;
            return 0;
        } else if(input < 0) {
            cout << "Distance must be positive." << endl;
        } else {
            myCar.drive(input);
            cout << "You drove " << input << " miles." << endl;
        }
    }

    return 0;
}