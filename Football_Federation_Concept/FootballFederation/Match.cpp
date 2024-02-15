#include "Match.h"

Match::Match(int round, string date, string time, string stadium, string city, Team guestTeam, Team hostTeam,Referee referee )
    :m_guestTeam(guestTeam),m_hostTeam(hostTeam),m_referee(referee){

    setRound(round);
    setDate(date);
    setTime(time);
    setStadium(stadium);
    setCity(city);

}

void Match::setRound(int round)
{
    m_round = round;
}

void Match::setDate(string date)
{
    m_date = date;
}

void Match::setTime(string time)
{
    m_time = time;
}

void Match::setStadium(string stadium)
{
    m_stadium = stadium;
}

void Match::setCity(string city)
{
    m_city = city;
}

int Match::getRound()
{
    return m_round;
}

string Match::getDate()
{
    return m_date;
}

string Match::getTime()
{
    return m_time;
}

string Match::getStadium()
{
    return m_stadium;
}

string Match::getCity()
{
    return m_city;
}
