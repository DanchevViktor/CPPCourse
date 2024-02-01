#pragma once
using namespace std;
#include<iostream>

class Car
{
public:
	Car(string, string, string, string, string, string, double,double,double);

	virtual double calculatePrice(double);

	void setBrand(string);
	void setModel(string);
	void setType(string);
	void setColor(string);
	void setVin(string);
	void setPlate(string);
	void setFuelConsume(double);
	void setDistance(double);
	void setUsageFee(double);

	string getBrand();
	string getModel();
	string getType();
	string getColor();
	string getVin();
	string getPlate();
	double getFuelCons();
	double getDistance();
	double getUsageFee();

	virtual void print();
private:
	string m_brand;
	string m_model;
	string m_type;
	string m_color;
	string m_vin;
	string m_plate;
	double m_fuelConsume;
	double m_usageFee;
	double m_distance;

};

