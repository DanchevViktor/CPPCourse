#pragma once
#include<iostream>
#include<vector>
#include "Player.h"
using namespace std;

class Team
{
public:
	
	Team(string, string, string, string,vector<Player>);

	void setName(string);
	void setAress(string);
	void setCity(string);
	void setCoachName(string);
	void updatePlayedMatches(int);
	void updatetWins(int);
	void updateLoses(int);
	void updateDraws(int);
	void updatePoints(int);
	void updateRanking(int);


	void addPlayers(Player obj);
	vector<Player> GetVectorPlayers();

	string getName();
	string getAdress();
	string getCity();
	string getCoachName();
	int getPlayedMatches();
	int getWins();
	int getLoses();
	int getDraws();
	int getPoints();
	int getRanking();


private:
	string m_name;
	string m_adress;
	string m_city;
	string m_coachName;
	vector<Player> m_players;
	int m_playedMatches;
	int m_wins;
	int m_loses;
	int m_draws;
	int m_points;
	int m_ranking;
};

