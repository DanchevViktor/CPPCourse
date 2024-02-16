#include "Shape.h"

Shape::Shape(string color)
{
    m_color = color;
}

void Shape::draw() const
{
    cout << "Drawing from shape " << m_color << endl;
}
