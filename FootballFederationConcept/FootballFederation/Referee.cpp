#include "Referee.h"

void Referee::addScore(string name, double score)
{
    m_scores.insert({ name,score });
}

void Referee::addYellowCard(string name ,int yellowCards)
{
    m_yellowCards.insert({name, yellowCards});
}

void Referee::addRedCard(string name,int redCards)
{
    m_redCards.insert({ name,redCards });
}

