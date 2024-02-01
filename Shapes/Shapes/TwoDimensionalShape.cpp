#include "TwoDimensionalShape.h"

TwoDimensionalShape::TwoDimensionalShape(int a,int size,int position,string sh,char ch):Shape(a) {} // prashta danni na roditelq za da moje da suzdade obekta pravilno


void TwoDimensionalShape::print() {
	cout << "In 2D " << endl;
}

double TwoDimensionalShape::getArea(int) {
	cout << "IN 2D get area print " << endl;
	return 0.0;
}

void TwoDimensionalShape::setSize(int size) {
	m_size = size;
}

void TwoDimensionalShape::setPosition(int p) {
	m_position = p;
}
void TwoDimensionalShape::setSh(string sh) {
	m_sh = sh;
}
void TwoDimensionalShape::setCh(char ch) {
	m_ch = ch;
}

int TwoDimensionalShape::getSize() {
	return m_size;
}
int TwoDimensionalShape::getPosition() {
	return m_position;
}
string TwoDimensionalShape::getSh() {
	return m_sh;
}
char TwoDimensionalShape::getCh() {
	return m_ch;
}
