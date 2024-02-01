#pragma once
using namespace std;
#include <iostream>

class PlayingCard
{
public:
	PlayingCard(string,char);

	void setType(char);
	void setSuit(string);

	char getType();
	string getSuit();

	void print() const;

private:
	char m_type;
	string m_suit;
};

