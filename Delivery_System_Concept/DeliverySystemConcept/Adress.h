#pragma once
#include<string>
using namespace std;

class Adress
{
public:
	Adress(string, string, string, string);
	void setName(string);
	void setTel(string);
	void setCity(string);
	void setStreet(string);
	void print();

	string getName();
	string getTel();
	string getCity();
	string getStreet();

private:
	string name;
	string tel;
	string city;
	string street;
};

