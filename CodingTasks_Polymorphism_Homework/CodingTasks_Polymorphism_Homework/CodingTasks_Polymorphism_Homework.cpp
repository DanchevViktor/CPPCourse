#include <iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"

void printArea(Shape* shape) {
	cout << " Area : " << shape->area() << endl;

}

int main()
{
	Circle circle("red",3.0);
	Rectangle rectangle("blue",5, 4);

	printArea(&circle);
	printArea(&rectangle);
	 
	circle.draw();
	rectangle.draw();

	return 0;
}
