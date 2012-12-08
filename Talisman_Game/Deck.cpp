#include "Deck.h"

Deck::Deck(void)
{
}

Card Deck::draw(void){
	if(cards.empty())
		redeal();
	Card temp = cards.back();
	cards.pop_back();
	return temp;
}

void Deck::discard(Card c){
	discardPile.push_back(c);
}

void Deck::shuffle(vector<Card> c){
	random_shuffle(c.begin(), c.end());
}

void Deck::redeal(void){	
	for(int i = 0; i < discardPile.size(); i++){
		Card temp = discardPile.back();
		discardPile.pop_back();
		cards.push_back(temp);
	}
	shuffle(cards);	
}

Deck::~Deck(void)
{
}
