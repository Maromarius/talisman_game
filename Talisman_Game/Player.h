#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

#include "Player.h"
#include "Character.h"

#include "Assassin.h"
#include "Druid.h"
#include "Dwarf.h"
#include "Elf.h"
#include "Ghoul.h"
#include "Ministrel.h"
#include "Monk.h"
#include "Priest.h"
#include "Prophetess.h"
#include "Sorceress.h"
#include "Thief.h"
#include "Troll.h"
#include "Warrior.h"
#include "Wizard.h"

#include <cstdlib>
#include <ctime>
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
		bool Player::checkIfPermaDead(void);
		void Player::isNowPermaDead(void);
};
#endif