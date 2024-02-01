#include "Triangle.h"
#include"TwoDimensionalShape.h"

Triangle::Triangle(int a, int b, int c) :TwoDimensionalShape(a,b) {}

double Triangle::getArea() {
	cout << "We are in triangle get area" << endl;
	return 0.0;
}

void Triangle::print() {
	cout << "We are int print triangle" << endl;
}

void Triangle::setA(int a)
{
	this->a = a;
}

int Triangle::getA()
{
	return this->a;
}

void Triangle::setB(int b)
{
	this->b = b;
}

int Triangle::getB()
{
	return this->b;
}

void Triangle::setC(int c)
{
	this->c = c;

}

int Triangle::getC()
{
	return this->c;
}
