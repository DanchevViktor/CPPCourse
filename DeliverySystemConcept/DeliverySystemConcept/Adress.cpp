#include "Adress.h"
using namespace std;
#include < iostream>
Adress::Adress(string personName, string phone, string city, string street) {
	setName(personName);
	setTel(phone);
	setCity(city);
	setStreet(street);
}

void Adress::setName(string personName) {
	this->name = name;
}
void Adress::setTel(string phone) {
	this->tel = tel;
}

void Adress::setCity(string city) {
	this->city = city;
}

void Adress::setStreet(string street) {
	this->street = street;
}

string Adress::getName() {
	return this->name;
}
string Adress::getTel() {
	return this->tel;
}
string Adress::getCity() {
	return this->city;
}
string Adress::getStreet() {
	return this->street;
}

void print() {
	cout << &Adress::getName << " " << &Adress::getTel << " " << &Adress::getCity << " " << &Adress::getStreet << endl;
}