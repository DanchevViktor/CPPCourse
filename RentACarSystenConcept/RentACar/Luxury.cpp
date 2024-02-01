#include "Luxury.h"

Luxury::Luxury(string brand, string model, string type,
	string color, string vin, string plate, double fuelCons,
	double usageFee, double distance, double extraLux)
	:Car(brand,model,type,color,vin,plate,fuelCons,usageFee,distance) {



}

void Luxury::setExtraLux(double extraLux) {
	m_extraLux = extraLux;
}

double Luxury::getExtraLux() {
	return m_extraLux;
}

void Luxury:: print() {
	cout << "Luxury car: "; Car::print();
}
