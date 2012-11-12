#include "Map.h"
#include "Character.h"
#include "Druid.h"
#include "Warrior.h"
#include "Armor.h"
#include "Axe.h"
#include "Weapon.h"
#include "Object.h"
#include "Sword.h"
#include "Helmet.h"
#include "Armour.h"

#include <iostream>

using namespace std;



int main(void){
	//Global Variables
	const int MAXNUMBEROFPLAYERS = 6;
	int numberOfPlayersAlive = 0;
	int SmallStrengthCounters = 32;
	int BigStrengthCounters = 8;
	int SmallCraftCounters = 32;
	int BigCraftCounters = 8;
	int LivesCounters = 40;
	int FateCounters = 36;
	int GoldCoins = 30;
	
	cout<<"/////////////////////////////////////////////\n"
		<<"////-------------------------------------////\n"
		<<"////--WELCOME TO THE WORLD OF TalisMAN!--////\n" 
		<<"////-------------------------------------////\n"
		<<"/////////////////////////////////////////////\n"<<endl;
	
	//Board Setup
	Map* TalismanMap = new Map();

	//Chracter Setup
	int numberOfPlayers;
	Character *Players[MAXNUMBEROFPLAYERS]; 
	cout<<"How many players will be playing this game?"<<endl;
	//needs to be get idiot proofed
	cin>>numberOfPlayers;
	numberOfPlayersAlive = numberOfPlayers;
		//Randomly Selecting Player's Characters and setting them on the Map
		for (int i=0; i<numberOfPlayers; i++)
		{
			//Random Selection 

			Players[i]->currentLocation = TalismanMap->OutterRegion.getArea(Players[i]->getSpawnPoint());
		}
		
	//Game Loop (add spawning boolean)
	//turn =0;
	/*
	while (numberOfPlayersAlive!=1)
	{
	

	if(Players[i] == **NULL**)
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