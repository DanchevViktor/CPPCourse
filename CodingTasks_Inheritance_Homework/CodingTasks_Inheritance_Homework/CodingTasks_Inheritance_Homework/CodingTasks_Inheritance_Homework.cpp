#include <iostream>
#include "Shape.h"
#include"Circle.h"
#include"Rectangle.h"
int main()
{

	Shape shape("red");

	Circle c1("blue");
	Rectangle rec("green");

	shape.draw();
	c1.draw();
	rec.draw();




	return 0;
}

