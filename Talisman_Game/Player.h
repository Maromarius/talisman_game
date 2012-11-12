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
		Area currentArea;
		bool isPermaDead;

	public:
		Player(void);
		~Player(void);
		Character createCharacter();
};
#endif