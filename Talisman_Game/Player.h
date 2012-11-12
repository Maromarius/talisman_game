#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Map.h"
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
		Player(void);
		Player::Player(int[])
		~Player(void);
		Character createCharacter(int);
		Character getCharacter(void);
};
#endif