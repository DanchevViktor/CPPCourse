#include "Circle.h"

Circle::Circle(double radius) {
	m_radius = radius;
}

// calculating area of the circle 

double Circle::area() {
	return  3,14 * m_radius * m_radius;
}

