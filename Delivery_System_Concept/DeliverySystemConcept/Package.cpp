#include "Package.h"
#include <iostream>

Package::Package(int basePrice, double weight, Adress senderAdress, Adress deliverAdress)
	:senderAdress(senderAdress),deliverAdress(deliverAdress)
	{
	setBasePrice(basePrice);
	setWeight(weight);
	
}

void Package::print() {
	this->senderAdress.print();
	this->deliverAdress.print();
	cout << getBasePrice() << " " << getWeight();
}

double Package::calculateCost() {
	return getBasePrice() * getWeight();
}

int Package::getBasePrice() {
	return this->basePrice;
}

double Package::getWeight() {
	return this->weight;
}

void Package::setWeight(double weight) {
	this->weight = weight;
}
void Package::setBasePrice(int basePrice) {
	this->basePrice = basePrice;
}