using namespace std;

#include <iostream>
#include"TwoDimensionalShape.h"
#include"ThreeDimensionalShape.h"
#include <vector>
#include"Rectangle.h"
#include"Shape.h"

int main()
{
	Shape* sPtr1 = new TwoDimensionalShape(30,4,5,"two",'@');
	Shape* sPtr2 = new ThreeDimensionalShape(15, 20);
	Shape* sPtr3 = new Rectangle(20, 10, 25, "figr", '@', 20);

	vector<Shape*> myShapes;
	myShapes.push_back(sPtr1);
	myShapes.push_back(sPtr2);
	myShapes.push_back(sPtr3);

	for (int i = 0; i < myShapes.size(); i++) {
		myShapes.at(i)->print();
		cout << myShapes.at(i)->getArea() << endl;
		
	}



	return 0;
}

