#include "Circle.h"

Circle::Circle(string color,double radius):Shape(color) {
	m_radius = radius;
}

// calculating area of the circle 

double Circle::area() {
	return  3,14 * m_radius * m_radius;
}

void Circle::draw() {
	cout << "Drawing from circle " << m_color << endl;
}