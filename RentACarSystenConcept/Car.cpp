#include "Car.h"


Car::Car(string brand, string model, string type, string color, string vin, string plate, double fuelCons,double usageFee,double distance) {
	setBrand(brand);
	setModel(model);
	setType(type);
	setColor(color);
	setVin(vin);
	setPlate(plate);
	setFuelConsume(fuelCons);
	setDistance(distance);


}

void Car::print() {
	cout << getBrand() << " " << getModel() << " " << getType()
		<< " " << getColor() << " " << getVin() << " "
		<< getPlate() << " " << getFuelCons() << " ";
}

void Car::setUsageFee(double usageFee) {
	m_usageFee = usageFee;
}

double Car::getUsageFee() {
	return m_usageFee;
}

double Car::calculatePrice(double distance)
{
	if (distance < 200) {
		return 0.7 * getDistance()  ;
	}
	if (distance >= 200) {
		return getDistance() * 0.4;
	}
	 
}

void Car::setDistance(double distance) {
	m_distance = distance;
}

void Car::setBrand(string brand)
{
	m_brand = brand;
}

void Car::setModel(string model)
{
	m_model = model;
}

void Car::setType(string type)
{
	m_type = type;
}

void Car::setColor(string color)
{
	m_color = color;
}

void Car::setVin(string vin)
{
	m_vin = vin;
}

void Car::setPlate(string plate)
{
	m_plate = plate;
}

void Car::setFuelConsume(double fuelCons)
{
	m_fuelConsume = fuelCons;
}

string Car::getBrand()
{
	return m_brand;
}

string Car::getModel()
{
	return m_model;
}

string Car::getType()
{
	return m_type;
}

string Car::getColor()
{
	return m_color;
}

string Car::getVin()
{
	return m_vin;
}

string Car::getPlate()
{
	return m_plate;
}

double Car::getDistance() {
	return m_distance;
}

double Car::getFuelCons()
{
	return m_fuelConsume;
}
