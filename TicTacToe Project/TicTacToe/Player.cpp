#include "Player.h"

Player::Player() {}

Player::Player(string name, char marker) {
    setName(name);
    setMarker(marker);
}

void Player::setName(string name)
{
    m_name = name;
}

void Player::setMarker(char marker)
{
    m_marker = marker;
}

string Player::getName()
{
    return m_name;
}

char Player::getMarker()
{
    return m_marker;
}

Player::~Player() {}