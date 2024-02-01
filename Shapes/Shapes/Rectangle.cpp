#include "Rectangle.h"


Rectangle::Rectangle(int a , int size, int position, string sh, char ch,int sideB) 
	:TwoDimensionalShape(a,size,position,sh,ch) {
	setSideB(sideB);
	
}
void Rectangle::print() {
	cout << "We are in Rectangle print" << endl;
	// TwoDimensionalShape::print();
}
double Rectangle::getArea() {
	cout << "We are in Rectangle getArea." << endl;
	return getSideB() * Shape::getA();
}


void Rectangle::setSideB(int sideB) {
	//data validation

	m_sideB = sideB;

}

int Rectangle::getSideB() {
	return m_sideB;
}