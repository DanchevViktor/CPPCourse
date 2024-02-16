#include "Rectangle.h"
using namespace std;
#include<iostream>

Rectangle::Rectangle(double width, double height) {
	m_width = width;
	m_height = height;
}

double Rectangle::area() {
	return m_width * m_height;
}

