#include "Map.h"
#include "Player.h"
#include "Character.h"

#include "Object.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int NUMBEROFCHARACTERS = 14;
int isInPlay[NUMBEROFCHARACTERS];

void initializeCharacterArray(void){
	for(int i = 0; i < NUMBEROFCHARACTERS; i++){
		isInPlay[i] = 0;
	}
}

int diceRoll(void){
	srand((unsigned int)time(0));
	return rand() % 6 + 1;
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
	//Map* TalismanMap = new Map();

	// Character Setup
		cout<<"How many players will be playing this game? (PUT 6 OR IT WILL CRASH. TESTING PURPOSES.)"<<endl;	
		cin>>numberOfPlayers;
		numberOfPlayersAlive = numberOfPlayers;
		Player *players = new Player[numberOfPlayers];
	
	// Create players, assign characters to players, and update which characters are in play
		initializeCharacterArray();
		for (int i=0; i<numberOfPlayers; i++){
			cout << "Creating Player " << i << endl;
			new (&players[i]) Player(isInPlay);
		}	

	// Game start. Here is the big WHILE loop.
		int i = 0;
		//while(numberOfPlayersAlive > 1){
		while(i < 10){
			if(players[turn].checkIfPermaDead() == false){
				cout << "\nIt is currently Player " << turn << "'s turn!" << endl;
				cout << players[turn].getCharacter().getProfession() << ", please press any key to roll the die." << endl;
				system("PAUSE");
				cout << "You have rolled a " << diceRoll() << "!" << endl;
			}

			i++;
			turn++;
			if(turn == 6)
				turn = 0;
		}	


			//break;
		//}
	
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