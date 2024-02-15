#include "Player.h"

Player::Player(string name,string position, int age , int number)
{
	setName(name);
	setPosition(position);
	setAge(age);
	setNumber(number);
}

void Player::setName(string name)
{
	this->m_name = name;
}

void Player::setPosition(string position)
{	
	this->m_position = position;
}

void Player::setAge(int age)
{
	this->m_age = age;
}

void Player::setNumber(int number)
{
	this->m_number = number;
}

string Player::getName()
{
	return this->m_name;
}

string Player::getPosition()
{
	return this->m_position;
}

int Player::getAge()
{
	return this->m_age;
}

int Player::getNumber()
{
	return this->m_number;
}
