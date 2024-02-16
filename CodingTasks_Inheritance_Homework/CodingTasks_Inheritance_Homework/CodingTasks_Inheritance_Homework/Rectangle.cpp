#include "Rectangle.h"

Rectangle::Rectangle(string color) :Shape(color) {}

void Rectangle::draw()
{
	cout << "Drawing " << m_color << " rectangle" << endl;
}
