#pragma once
using namespace std;
#include<iostream>

class Player
{
public:
	Player(string,string,int,int);
	void setName(string);
	void setPosition(string);
	void setAge(int);
	void setNumber(int);

	string getName();
	string getPosition();
	int getAge();
	int getNumber();

private:
	string m_name;
	string m_position;
	int m_age;
	int m_number;
};

