#include "Family.h"

Family::Family(string brand, string model, string type, string color,
	string vin, string plate, double fuelCons, double usageFee,double distance)
	: Car(brand, model, type, color, vin, plate, fuelCons,usageFee,distance) {
	

}






void Family::print()
{
	cout << "Family car: ";  Car::print();
	
}


