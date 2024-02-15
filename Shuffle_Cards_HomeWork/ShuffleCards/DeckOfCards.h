#pragma once
#include"PlayingCard.h"
#include <vector>
#include <algorithm>
#include <random>

class DeckOfCards
{
public:

	void displayDeck() const;
	void raffleShuffle();
	void addCard(PlayingCard);

private:
	vector<PlayingCard> cards;
};

