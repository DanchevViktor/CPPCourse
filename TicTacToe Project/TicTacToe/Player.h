#pragma once
#include<iostream>
using namespace std;

class Player
{
public:
	Player();
	~Player();
	Player(string, char);

	void setName(string);
	void setMarker(char);

	string getName();
	char getMarker();
	bool m_turn;


private:
	string m_name;
	char m_marker;
};

