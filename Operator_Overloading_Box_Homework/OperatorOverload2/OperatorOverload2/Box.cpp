#include "Box.h"

Box Box::operator+(const Box b)
{
    double newWidth =(m_width > b.m_width) ? m_width: b.m_width;
    double newLength = m_lenght;
    double newHeight = m_heigth +b.m_heigth;
   
    return Box(newWidth,newLength,newHeight);
}



Box::Box(double length, double width,double height)
{
    setLength(length);
    setWidth(width);
    setHeight(height);
}

void Box::setLength(double length)
{
    m_lenght = length;
}

void Box::setWidth(double width)
{
    m_width = width;

}
void Box::setHeight(double height) {
    m_heigth = height;
}

double Box::getLength()
{
    return m_lenght;
}

double Box::getWidth()
{
    return m_width;
}

double Box::getHeight() {
    return m_heigth;
}

ostream& operator<<(ostream& COUT, Box& box)
{
    COUT << box.getLength();
    return COUT;
}

void Box::print() {
    cout << "Lenght: " << getLength() << " "
         << "Width: " << getWidth() << " "
         <<   "Height: " << getHeight() << endl;
}