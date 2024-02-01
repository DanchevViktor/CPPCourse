#pragma once
using namespace std;
#include "Adress.h"
#include <string>
class Package
{
public:
	Package(int, double, Adress,Adress);
	void setBasePrice(int);
	void setWeight(double);
	

	void print();
	double calculateCost();

	int getBasePrice();
	double getWeight();
	string getSenderAdress();
	string getDeliverAdress();

private:
	int basePrice;
	double weight;
	Adress senderAdress;
	Adress deliverAdress;
};

