// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>
#include <stdexcept>

using namespace std;

class ProductNotFoundException
{
public:
    ProductNotFoundException() {
        message = "ERROR: Product not found";
    }
    explicit ProductNotFoundException(string message) {
        this->message = std::move(message);
    }
    void what() {
        cout << message << endl;
    }
private:
    string message;
};

int getProductID(int ids[], string names[], int numProducts, const string& target) {
    for (int i = 0; i < numProducts; i++) {
        if (names[i] == target)
            return ids[i];
    }
    ProductNotFoundException e("ERROR: Product not found --> " + target);
    throw e;
}

int main() {
    int productIds[] = { 4, 5, 8, 10, 13 };
    string products[] = { "Computer", "flash drive",
                          "mouse", "printer", "camera" };
    try {
        cout << getProductID(productIds, products, 5, "mouse") << endl;
        cout << getProductID(productIds, products, 5, "camera") << endl;
        cout << getProductID(productIds, products, 5, "laptop") << endl;
    } catch(ProductNotFoundException& e) {
        e.what();
    }

    return 0;
}