#include "Player.h"


Character character;
bool isPermaDead;

Player::Player(){
	//character = createCharacter();
}

Player::Player(int isInPlay[]){
	// Roll for a random character 
		int characterRoll;
		bool keepLooping = true;

		while(true){
			srand((unsigned int)time(0));
			characterRoll = rand() % NUMBEROFCHARACTERS;
			if(isInPlay[characterRoll] == 0){
				isInPlay[characterRoll] = 1;
				break;
			}			
		}

		character = createCharacter(characterRoll);
		isPermaDead = false;
}

Player::~Player()
{
}

bool Player::checkIfPermaDead(void){
	return isPermaDead;
}

void Player::isNowPermaDead(void){
	isPermaDead = true;
}

Character Player::createCharacter(int characterRoll){
	// Create & return the character
		Character *character;
		
		switch(characterRoll){
			case 0:
				character = new Assassin();
				cout << "You drew the Assassin card!" << endl;
				break;
			case 1:
				character = new Druid();
				cout << "You drew the Druid card!"<< endl;
				break;
			case 2:
				character = new Dwarf();
				cout << "You drew the Dwarf card!"<< endl;
				break;
			case 3:
				character = new Elf();
				cout << "You drew the Elf card!"<< endl;
				break;
			case 4:
				character = new Ghoul();
				cout << "You drew the Ghoul card!"<< endl;
				break;
			case 5:
				character = new Ministrel();
				cout << "You drew the Ministrel card!"<< endl;
				break;
			case 6:
				character = new Monk();
				cout << "You drew the Monk card!"<< endl;
				break;
			case 7:
				character = new Priest();
				cout << "You drew the Priest card!"<< endl;
				break;
			case 8:
				character = new Prophetess();
				cout << "You drew the Prophetess card!"<< endl;
				break;
			case 9:
				character = new Sorceress();
				cout << "You drew the Sorceress card!"<< endl;
				break;
			case 10:
				character = new Thief();
				cout << "You drew the Thief card!"<< endl;
				break;
			case 11:
				character = new Troll();
				cout << "You drew the Troll card!"<< endl;
				break;
			case 12:
				character = new Warrior();
				cout << "You drew the Warrior card!"<< endl;
				break;
			case 13:
				character = new Wizard();
				cout << "You drew the Wizard card!"<< endl;
				break;
		}

		return *character;

}

Character Player::getCharacter(){
	return character;
}