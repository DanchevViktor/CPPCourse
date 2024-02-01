#include "Shape.h"


Shape::Shape(int side) {
	m_a = side;
}

void Shape::setA(int side) {

	m_a = side;
}

int Shape::getA() {
	return m_a;
}

void Shape::print() {
	cout << "In shape the side is " << m_a;
}

double Shape::getArea() {
	cout << "In shape the are is " << m_area << endl;
	return 0.0;
}
void Shape::setArea(int) {
	cout << "In shape the set  area " << m_area;
}