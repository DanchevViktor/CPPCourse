#include <iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

void printArea(Shape* shape) {
	cout << " Area of shape: " << shape->area() << endl;

}

int main()
{
	Circle circle(10.0);
	Rectangle rectangle(5, 4);

	printArea(&circle);
	printArea(&rectangle);


	return 0;
}
