#include "Rectangle.h"
#include "Point.h"


Rectangle::Rectangle(const Point& p1, const Point& p2, const Point& p3, const Point& p4)
	:p1(p1), p2(p2), p3(p3), p4(p4) {}



const Point& Rectangle::getP1()const {
	return p1;
}

const Point& Rectangle::getP2()const {
	return p2;
}

void Rectangle::setP1(const Point& p1) {
	Rectangle::p1 = p1;
}
void Rectangle::setP2(const Point& p2) {
	Rectangle::p2 = p2;
}


bool Rectangle::isSquare() {
	if (isRectangle()) {
		//check if sides are equal -> square = true
		// int sideA = calculateLength(p1.getX(), p2.getX());
		// int sideB = calculateLength(p1.getY(), p2.getY());
		if(calculateLength(p1.getX(), p2.getX())== calculateLength(p1.getY(), p2.getY())){
		// if (sideA == sideB) {
			cout << "The shape is square." << endl;
			return true;
		}
	}
	cout << "The shape is not  square." << endl;
	return false;
	}


bool Rectangle::isRectangle() {
	if (this->p1.getY() == this->p3.getX() && this->p2.getX() == this->p4.getX()) {
		return true;
	}
	{
		return false;
	}
}
	
	int Rectangle::calculateLength(int first, int second) {

		return second - first; // second is always greater
	}


