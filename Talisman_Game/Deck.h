#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <ctime>
#include <cstdlib>
using namespace std;

class Deck
{
public:
	Deck(void);
	~Deck(void);
	Card draw(void);
	void shuffle(vector<Card>);
	void discard(Card);
	void redeal(void);
	vector<Card> cards;
	vector<Card> discardPile;
};
#endif

