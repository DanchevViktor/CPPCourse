#include "Rectangle.h"

Rectangle::Rectangle(string color) :Shape(color) {}

void Rectangle::draw() const
{
	cout << "Drawing " << m_color << " rectangle" << endl;
}
