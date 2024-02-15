#include "PlayingCard.h"

PlayingCard::PlayingCard( string suit,char type)
{
    setType(type);
    setSuit(suit);


}

void PlayingCard::setType(char type)
{
    m_type = type;
}

void PlayingCard::setSuit(string suit)
{
    m_suit = suit;
}

char PlayingCard::getType()
{
    return m_type;
}

string PlayingCard::getSuit()
{
    return m_suit;
}

void PlayingCard::print() const
{
    cout << m_type <<  " " << m_suit << endl;
}

