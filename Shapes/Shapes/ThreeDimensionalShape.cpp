#include "ThreeDimensionalShape.h"

ThreeDimensionalShape::ThreeDimensionalShape(int a, int h) :Shape(a) {
	m_h = h;
}

void ThreeDimensionalShape::print() {
	cout << "We are in 3D print " << m_h << endl;
}

double ThreeDimensionalShape::getArea() {
	cout << "3D shape area " << endl;;
	return 0.0;
}
double ThreeDimensionalShape::getVolume() {
	cout << "3D Shape volume" << endl;
	return 0.0;
}