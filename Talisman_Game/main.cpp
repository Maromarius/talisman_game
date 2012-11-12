#include "Map.h"
#include "Player.h"
#include "Character.h"

#include "Assassin.h"
#include "Druid.h"
#include "Elf.h"
#include "Ghoul.h"
#include "Ministrel.h"
#include "Monk.h"
#include "Priest.h"
#include "Prophetess.h"
#include "Warrior.h"


#include "Object.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUMBEROFCHARACTERS = 14;
int isInPlay[NUMBEROFCHARACTERS];
bool initialized = false;

void initializeCharacterArray(void){
	for(int i = 0; i < NUMBEROFCHARACTERS; i++){
		isInPlay[i] = 0;
	}
}

Character createCharacter(void){
	// Roll for a random character 
		int characterRoll;
		while(true){
			srand(time(0));
			characterRoll = rand() % NUMBEROFCHARACTERS;
			if(isInPlay[characterRoll] == 0)
				break;
		}
	
	// Create & return the character
		Character *character;

		// TODO: Change this for actual classes
		switch(characterRoll){
			case 0:
				character = new Assassin();
				isInPlay[0] = 1;
			case 1:
				character = new Druid();
				isInPlay[1] = 1;
			case 2:
				character = new Warrior();
				isInPlay[2] = 1;
			case 3:
				character = new Warrior();
				isInPlay[3] = 1;
			case 4:
				character = new Warrior();
				isInPlay[4] = 1;
			case 5:
				character = new Warrior();
				isInPlay[5] = 1;
			case 6:
				character = new Warrior();
				isInPlay[6] = 1;
			case 7:
				character = new Warrior();
				isInPlay[7] = 1;
			case 8:
				character = new Warrior();
				isInPlay[8] = 1;
			case 9:
				character = new Warrior();
				isInPlay[9] = 1;
			case 10:
				character = new Warrior();
				isInPlay[10] = 1;
			case 11:
				character = new Warrior();
				isInPlay[11] = 1;
			case 12:
				character = new Warrior();
				isInPlay[12] = 1;
			case 13:
				character = new Warrior();
				isInPlay[13] = 1;
		}

		return *character;

}

int main(void){
	//Global Variables
	const int MAXNUMBEROFPLAYERS = 6;
	int numberOfPlayers;
	int numberOfPlayersAlive = 0;
	int SmallStrengthCounters = 32;
	int BigStrengthCounters = 8;
	int SmallCraftCounters = 32;
	int BigCraftCounters = 8;
	int LivesCounters = 40;
	int FateCounters = 36;
	int GoldCoins = 30;
	int turn = 0;
	
	cout<<"/////////////////////////////////////////////\n"
		<<"////-------------------------------------////\n"
		<<"////--WELCOME TO THE WORLD OF TALISMAN!--////\n" 
		<<"////-------------------------------------////\n"
		<<"/////////////////////////////////////////////\n"<<endl;
	
	// Board Setup
	Map* TalismanMap = new Map();

	// Character Setup
	cout<<"How many players will be playing this game?"<<endl;	
	cin>>numberOfPlayers;
	numberOfPlayersAlive = numberOfPlayers;
	Player *players[MAXNUMBEROFPLAYERS];
	
	// Assign characters to players
	initializeCharacterArray();
	for (int i=0; i<numberOfPlayers; i++)
	{
		players[i].setCharacter(createCharacter());
		players[i]->currentSpace = TalismanMap->OutterRegion.getArea(Players[i]->getSpawnPoint());
	}
		
	//Game Loop (add spawning boolean)
		
		/*
	while (numberOfPlayersAlive!=1)
	{
	

	while(){
		if(Players[i] == '\0')
			turn++;
		else if(turn == numberOfPlayers)
			turn = 0;
	}
	*/
	
	
	
	
	
	
	
	
	
	
	
	/*
	Object *a1 = new Axe();
	Object *s1 = new Sword();
	Object *h1 = new Helmet();
	Object *a2 = new Armour();

	Character *w1 = new Warrior();
	Character *d1 = new Druid();
	
	
	cout << "Warrior has been created." << endl;
	cout << w1->getProfession() << "'s stats are as follows:" << endl;
	cout << "Current Life: " << w1->getLife() << "/" << w1->getBaseLife() << endl;
	cout << "Strength: " << w1->getStrength() << " (" << w1->getBaseStrength() << " Base + " << w1->getCounterStrength() << " Counters)" << endl; 
	cout << "Craft: " << w1->getCraft() << " (" << w1->getBaseCraft() << " Base + " << w1->getCounterCraft() << " Counters)" << endl; 
	cout << endl;

	cout << "Druid has been created." << endl;
	cout << d1->getProfession() << "'s stats are as follows:" << endl;
	cout << "Current Life: " << d1->getLife() << "/" << d1->getBaseLife()  << endl;
	cout << "Strength: " << d1->getStrength() << " (" << d1->getBaseStrength() << " Base + " << d1->getCounterStrength() << " Counters)" << endl; 
	cout << "Craft: " << d1->getCraft() << " (" << d1->getBaseCraft() << " Base + " << d1->getCounterCraft() << " Counters)" << endl; 
	cout << endl;

	

	cout << a1->getName() <<" has been created." << endl;
	cout << h1->getName() <<" has been created." << endl;
	cout << s1->getName() <<" has been created." << endl;
	cout << a2->getName() <<" has been created." << endl;
	cout << endl;
	w1->addObject(*a1);
	w1->addObject(*h1);

	d1->addObject(*s1);
	d1->addObject(*a2);


	cout << w1->getProfession() << " Inventory (size:"<< w1->getBag().size() << "/"<< w1->getMaxObjectSize()<<"):"<< endl;
	cout << w1->showBag() << endl;

	cout << d1->getProfession() << " Inventory (size:"<< d1->getBag().size() << "/"<< d1->getMaxObjectSize()<<"):"<< endl;
	cout << d1->showBag() << endl;
	
	delete w1;
	delete d1;
	*/
	
	system("PAUSE");
	return 0;
}