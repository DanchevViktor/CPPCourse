#include "DeckOfCards.h"



void DeckOfCards::displayDeck() const
{
	for (auto elem : cards) {
		elem.print();
	}
}

void DeckOfCards::raffleShuffle() 
{
	
		random_shuffle(cards.begin(), cards.end());
	
}

void DeckOfCards::addCard(PlayingCard card) {

	cards.push_back(card);

}
