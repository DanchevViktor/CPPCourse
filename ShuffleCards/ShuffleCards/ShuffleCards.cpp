
#include <iostream>
using namespace std;
#include "PlayingCard.h"
#include"DeckOfCards.h"
#include<algorithm>


int main()
{
	char suit[13]{ '2','3', '4', '5', '6', '7', '8', '9', '10', 'J', 'Q', 'K', 'A' };
	string color[4]{ "Hearts","Spades","Diamond","Clubs" };

	DeckOfCards deck;
	
	
	for (int i = 0; i < +4; i++) {
		for (int j = 0; j < 13; j++) {

			PlayingCard card(color[i], suit[j]);
			deck.addCard(card);

		}
		
	}

	deck.displayDeck();
	deck.raffleShuffle();
	deck.displayDeck();


	return 0;
}

