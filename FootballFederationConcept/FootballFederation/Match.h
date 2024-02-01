#pragma once
#include <string>
using namespace std;
#include "Team.h"
#include"Referee.h"
class Match
{
public:
	Match(int,string, string, string, string, Team, Team,Referee);

	void setRound(int);
	void setDate(string);
	void setTime(string);
	void setStadium(string);
	void setCity(string);

	int getRound();
	string getDate();
	string getTime();
	string getStadium();
	string getCity();

	


private:

	int m_round;
	string m_date;
	string m_time;
	string m_stadium;
	string m_city;
	Team m_guestTeam;
	Team m_hostTeam;
	Referee m_referee;
	
};

