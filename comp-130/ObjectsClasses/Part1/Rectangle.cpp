#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle {

private:
	double width;
	double height;

public:

	// constructors
	Rectangle() {
        width = 1;
        height = 1;
    }
	Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    // getters
	double getWidth() {
        return width;
    }
	double getHeight() {
        return height;
    }

	// setters
	void setWidth(double w) {
        width = w;
    }
	void setHeight(double h) {
        height = h;
    }

    // utility functions
    double findArea() {
        return (width * height);
    }
	double findPerimeter() {
        return (2 * width) + (2 * height);
    }

};

int main() {

    Rectangle rect1;
	Rectangle rect2(3.5, 35.9);

	rect1.setWidth(4);

	rect1.setHeight(40);

	cout << fixed << setprecision(2) << showpoint;
	cout << "Area of rectangle (w= 4, h = 40):\t" << rect1.findArea() << endl;
	cout << "Area of rectangle (w= 3.5, h = 35.9):\t" << rect2.findArea() << endl;
	cout << "\nPerimeter of rectangle (w=4, h = 40):\t" << rect1.findPerimeter() << endl;
	cout << "Perimeter of rectangle (w= 3.5, h = 35.9):\t" << rect2.findPerimeter() << endl;
	cout << "\nWidth extracted from object (w = 4, h = 40) is:\t" << rect1.getWidth() << endl;
	cout << "Width extracted from object (w= 3.5, h = 35.9):\t" << rect2.getWidth() << endl;
	cout << "\nHeight extracted from object (w = 4, h = 40) is:\t" << rect1.getHeight() << endl;
	cout << "Height extracted from object (w= 3.5, h = 35.9):\t" << rect2.getHeight() << endl;

    return 0;
}