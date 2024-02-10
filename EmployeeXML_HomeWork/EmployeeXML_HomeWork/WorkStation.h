#pragma once
using namespace std;
#include <iostream>
class WorkStation
{
public:
	WorkStation() {}

	WorkStation(string building, string floor, string desc) :m_building(building), m_floor(floor), m_desc(desc) {}

	void setBuilding(string);
	void setFloor(string);
	void setDesc(string);

	string getBuilding() const;
	string getFloor() const;
	string getDesc() const;

	void print() const;

private:
	string m_building;
	string m_floor;
	string m_desc;
};

