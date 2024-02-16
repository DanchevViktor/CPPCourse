#include "Shape.h"

Shape::Shape(string color) {
	m_color = color;
}

void Shape::draw() {
	cout << "Drawing from shape " << m_color << endl;
}
 Shape::~Shape() {};