using namespace std;
#include <iostream>
#include "Family.h"
#include "Luxury.h"
int main()
{
	

	

	Family car1("Mercedes", "S-Class", "Luxury", "Black", "654321", "MB5678", 10.0, 100.0, 150.0);
	Family car3("peugeot", "307", "hetchback", "silver", "CB6434AC", "asd12345", 4.5, 35,300);
	Luxury car2("Toyota", "Corolla", "Sedan", "Blue", "123456", "CA1234", 7.5, 30.0, 300.0,100);

	car1.print(); cout << " price: " << car1.calculatePrice(100) << endl;
	car2.print(); cout << "price: " << car2.calculatePrice(150) << endl;
	car3.print(); cout << "price: " << car3.calculatePrice(300) << endl;

	return 0;
}

