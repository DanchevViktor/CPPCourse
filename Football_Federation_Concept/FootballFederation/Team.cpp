#include "Team.h"

Team::Team(string name, string adress, string city, string coachName,
	vector<Player> players)
{
	setName(name);
	setAress(adress);
	setCity(city);
	setCoachName(coachName);
	m_wins = 0;
	m_loses = 0;
	m_draws = 0;
	m_points = 0;
	m_ranking = 0;
}

void Team::setName(string name)
{
	m_name = name;
}

void Team::setAress(string adress)
{
	m_adress = adress;
}

void Team::setCity(string city)
{
	m_city = city;
}

void Team::setCoachName(string coachName)
{
	m_coachName = coachName;
}

void Team::updatePlayedMatches(int newPlayedMatches)
{
	m_playedMatches += newPlayedMatches;
}

void Team::updatetWins(int newWins)
{
	m_wins += +newWins;
}

void Team::updateLoses(int newLoses)
{
	m_loses += + newLoses;
}

void Team::updateDraws(int newDraws)
{
	m_draws +=newDraws;
}

void Team::updatePoints(int newPoints)
{
	m_points += newPoints;
}

void Team::updateRanking(int newRankning)
{
	m_ranking += newRankning;
}

void Team::addPlayers(Player obj)
{
	m_players.push_back(obj);
}

vector<Player> Team::GetVectorPlayers()
{
	return m_players;
}

string Team::getName()
{
	return m_name;
}

string Team::getAdress()
{
	return m_adress;
}

string Team::getCity()
{
	return m_city;
}

string Team::getCoachName()
{
	return m_coachName;
}

int Team::getPlayedMatches()
{
	return m_playedMatches;
}

int Team::getWins()
{
	return m_wins;
}

int Team::getLoses()
{
	return m_loses;
}

int Team::getDraws()
{
	return m_draws;
}

int Team::getPoints()
{
	return m_points;
}

int Team::getRanking()
{
	return m_ranking;
}
