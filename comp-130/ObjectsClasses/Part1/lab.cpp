//File: driver.cpp
//Name: 
//Date created:   
//Compiler used: 
//Files needed: rectangles.h, rectangles.cpp
//Purpose: To test implementations of class: Rectangle

#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle {
public:
	//constructors
	Rectangle(); //Default values: m_width = 1; m_height = 1
	Rectangle(double p_width, double p_height);

	//setters
	void setWidth(double p_width);
	void setHeight(double p_height);

	//getters
	double getArea();
	double getPerimeter();
	double getWidth();
	double getHeight();

private:
	double m_width;
	double m_height;
};

// constrcutors
Rectangle::Rectangle() {
  // default constructor
    m_width = 1;
    m_height = 1;
}
Rectangle::Rectangle(double p_width, double p_height) {
  m_width = p_width;
  m_height = p_height;
}

// getters
double Rectangle::getArea() {
  return (m_width * m_height);
}
double Rectangle::getPerimeter() {
  return (2 * m_width) + (2 * m_height);
}
double Rectangle::getWidth() {
  return m_width;
}
double Rectangle::getHeight() {
  return m_height;
}

// setters
void Rectangle::setWidth(double p_width) {
  m_width = p_width;
}
void Rectangle::setHeight(double p_height) {
  m_height = p_height;
}

int main()
{

	//constructors
	//Rectangle(); //Default values: m_width = 1; m_height = 1
	Rectangle rect1;
	//Rectangle(double p_width, double p_height);
	Rectangle rect2(3.5, 35.9);

	////setters
	//void setWidth(double p_width);
	rect1.setWidth(4);
	//void setHeight(double p_height);
	rect1.setHeight(40);

	////getters
	//double getArea();
	cout << fixed << setprecision(2) << showpoint;
	cout << "Area of rectangle (w= 4, h = 40):\t" << rect1.getArea() << endl;
	cout << "Area of rectangle (w= 3.5, h = 35.9):\t" << rect2.getArea() << endl;
	//double getPerimeter();
	cout << "\nPerimeter of rectangle (w=4, h = 40):\t" << rect1.getPerimeter() << endl;
	cout << "Perimeter of rectangle (w= 3.5, h = 35.9):\t" << rect2.getPerimeter() << endl;
	//double getWidth();
	cout << "\nWidth extracted from object (w = 4, h = 40) is:\t" << rect1.getWidth() << endl;
	cout << "Width extracted from object (w= 3.5, h = 35.9):\t" << rect2.getWidth() << endl;
	//double getHeight();
	cout << "\nHeight extracted from object (w = 4, h = 40) is:\t" << rect1.getHeight() << endl;
	cout << "Height extracted from object (w= 3.5, h = 35.9):\t" << rect2.getHeight() << endl;

	return 0;
}