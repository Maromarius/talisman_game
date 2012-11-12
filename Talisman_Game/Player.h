#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Character.h"
using namespace std;

class Player
{
	protected:
		Character character;
		//Area currentArea;
		bool isPermaDead;
		static const int NUMBEROFCHARACTERS = 14;

	public:
		Player::Player(void);
		Player::Player(int[]);
		Player::~Player(void);
		Character Player::createCharacter(int);
		Character Player::getCharacter(void);
};
#endif