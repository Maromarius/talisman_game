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
		cout<<"How many players will be playing this game?"<<endl;	
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
			if(turn == numberOfPlayers)
				turn = 0;
		}	


			//break;
		//}
	
	
	system("PAUSE");
	return 0;
}