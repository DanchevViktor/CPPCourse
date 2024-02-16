#include "Rectangle.h"
using namespace std;
#include<iostream>

Rectangle::Rectangle(string color,double width, double height):Shape(color) {
	m_width = width;
	m_height = height;
}

double Rectangle::area() {
	return m_width * m_height;
}

void Rectangle::draw() {
	cout << "Drawing rectangle " << m_color << endl;
}