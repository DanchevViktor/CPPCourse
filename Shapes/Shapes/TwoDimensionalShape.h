#pragma once
#include"Shape.h"

class TwoDimensionalShape:public Shape
{
public:
	TwoDimensionalShape(int,int,int,string,char);

	virtual void print(); // kogato metoda e virtual oznachava che moje da se override
	virtual double getArea(int);
	void setSize(int);
	void setPosition(int);
	void setSh(string);
	void setCh(char);

	int getSize();
	int getPosition();
	string getSh();
	char getCh();

private:
	int m_size;
	int m_position;
	string m_sh;
	char m_ch;

};

