// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <string>

using namespace std;

class House {

    public:
        // constructor
        House();
        House(string pColor);
        // other getter
        string getColor();
        // other setter
        void setColor();

    private:
        string livingRoomColor = "white";
        string kitchenColor = "white";
        string bedroomColor = "white";
        string bathroomColor = "white";
    
    public:
        // getters
        string getLivingRoomColor() {
            return livingRoomColor;
        }
        string getKitchenColor() {
            return kitchenColor;
        }
        string getBedroomColor() {
            return bedroomColor;
        }
        string getBathroomColor() {
            return bathroomColor;
        }
        // setters
        void setLivingRoomColor(string color) {
            livingRoomColor = color;
        }
        void setKitchenColor(string color) {
            kitchenColor = color;
        }
        void setBedroomColor(string color) {
            bedroomColor = color;
        }
        void setBathroomColor(string color) {
            bathroomColor = color;
        }

};

House::House() {

}

House::House(string pColor) {
    livingRoomColor = pColor;
    kitchenColor = pColor;
    bedroomColor = pColor;
    bathroomColor = pColor;
}

string House::getColor() {

    int choice = 0;
    string color = "";
    cout << "Getting color of a room... \n";
    cout << "1. Living room: \n";
    cout << "2. Kitchen: \n";
    cout << "3. Bedroom: \n";
    cout << "4. Bathroom: \n";
    cout << "Enter (1-4): ";
    cin >> choice;

    getline(cin, color);

    switch(choice) {
        case 1: 
            return livingRoomColor;
            break;
        case 2: 
            return kitchenColor;
            break;
        case 3: 
            return bedroomColor;
            break;
        case 4: 
            return bathroomColor;
            break;
        default:
            return "ERROR: invalid room choice";
    }

}

void House::setColor() {

    int choice = 0;
    string color = "";
    cout << "Setting color of a room...\n";
    cout << "1. Living room\n";
    cout << "2. Kitchen\n";
    cout << "3. Bedroom\n";
    cout << "4. Bathroom\n";
    cout << "Enter (1-4): ";
    cin >> choice;

    cin.ignore(1000, '\n');

    cout << "Color? ";
    getline(cin, color);

    switch(choice) {
        case 1: 
            livingRoomColor = color;
            break;
        case 2: 
            kitchenColor = color;
            break;
        case 3: 
            bedroomColor = color;
            break;
        case 4: 
            bathroomColor = color;
            break;
        default:
            cout << "ERROR: invalid room choice";
    }
    
}

int main() {

    House house1;
    House house2("blue");

    cout << house1.getColor() << endl;
    cout << house2.getColor() << endl;

    return 0;
}