#pragma once
#include"User.h"
#include"Match.h"
#include<map>
#include <iostream>

using namespace std;

class Referee:public User

{
public:
	Referee();
	void addScore(string, double);
	void addYellowCard(string,int);
	void addRedCard(string,int);


private:
	map<string, int> m_redCards;
	map<string, int> m_yellowCards;
	map<string, int> m_scores;

	
	
};

