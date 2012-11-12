#include "Player.h"

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

Character character;

Player::Player(){
	character = createCharacter();
}

Player::Player(int isInPlay[]){
	// Roll for a random character 
		int characterRoll;
		while(true){
			srand(time(0));
			characterRoll = rand() % NUMBEROFCHARACTERS;
			if(isInPlay[characterRoll] == 0){
				isInPlay[characterRoll] = 1;
				break;
			}
		}

		character = createCharacter(characterRoll);
}

Player::~Player()
{
}

Character Player::createCharacter(int characterRoll){
	// Create & return the character
		Character *character;
		
		switch(characterRoll){
			case 0:
				character = new Assassin();
				cout << "You drew the Assassin card!";
			case 1:
				character = new Druid();
				cout << "You drew the Druid card!";
			case 2:
				character = new Dwarf();
				cout << "You drew the Dwarf card!";
			case 3:
				character = new Elf();
				cout << "You drew the Elf card!";
			case 4:
				character = new Ghoul();
				cout << "You drew the Ghoul card!";
			case 5:
				character = new Ministrel();
				cout << "You drew the Ministrel card!";
			case 6:
				character = new Monk();
				cout << "You drew the Monk card!";
			case 7:
				character = new Priest();
				cout << "You drew the Priest card!";
			case 8:
				character = new Prophetess();
				cout << "You drew the Prophetess card!";
			case 9:
				character = new Sorceress();
				cout << "You drew the Sorceress card!";
			case 10:
				character = new Thief();
				cout << "You drew the Thief card!";
			case 11:
				character = new Troll();
				cout << "You drew the Troll card!";
			case 12:
				character = new Warrior();
				cout << "You drew the Warrior card!";
			case 13:
				character = new Wizard();
				cout << "You drew the Wizard card!";
		}

		return *character;

}

Character Player::getCharacter(){
	return character;
}