#pragma once
using namespace std;
#include <iostream>
class Employee
{
public:
	Employee(string name, string type, string age) :m_name(name), m_type(type), m_age(age) {}
	void setName(string);
	void setType(string);
	void setAge(string);

	string getName() const;  // const poneje ne promenqt dannite na obekta
	string getType() const;
	string getAge() const;

	void print() const;
private:
	string m_name;
	string m_type;
	string m_age;
};

