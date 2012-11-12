#include "Map.h"
#include "Player.h"
#include "Character.h"
#include "Object.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAXNUMBEROFPLAYERS = 6;
const int NUMBEROFCHARACTERS = 14;
int isInPlay[NUMBEROFCHARACTERS];
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

void initializeCharacterArray(void)
{
	for(int i = 0; i < NUMBEROFCHARACTERS; i++)
	{
		isInPlay[i] = 0;
	}
}

int diceRoll(void)
{
	srand((unsigned int)time(0));
	return rand() % 6 + 1;
}


int main(void){
	cout<<"/////////////////////////////////////////////\n"
		<<"////-------------------------------------////\n"
		<<"////--WELCOME TO THE WORLD OF TALISMAN!--////\n" 
		<<"////-------------------------------------////\n"
		<<"/////////////////////////////////////////////\n"<<endl;
	
	//--------------SETUP--------------
	// Board Setup
	Map* TalismanMap = new Map();

	// Character Setup
	bool correctInput = false;
	int tempInput;
	while (!correctInput)
	{
		cout<<"How many players will be playing this game?"<<endl;	
		cin>>tempInput;
		//Checking for correct number of players
		if(tempInput>1 && tempInput<=6)
			correctInput = true;

		if(!correctInput)
			cout<<"I am sorry that number of players is not permitted, please try again."<<endl;
	}
	numberOfPlayers = tempInput;
	numberOfPlayersAlive = numberOfPlayers;
	Player *players = new Player[numberOfPlayers];
		
	// Create players, assign characters to players, and update which characters are in play
	initializeCharacterArray();
	for (int i=0; i<numberOfPlayers; i++)
	{
		cout << "Creating Player " << i << endl;
		new (&players[i]) Player(TalismanMap, isInPlay);
	}	

	//--------------GAME--------------
	// Game start. Here is the big WHILE loop.
	//while(numberOfPlayersAlive > 1){
	for(int testTurns = 0 ; testTurns<10; testTurns++)
	{
		if(!players[turn].checkIfPermaDead())
		{
			cout << "\nIt is currently Player " << turn << "'s turn!" << endl;
			cout << players[turn].getCharacter().getProfession() << ", you are at the "<< players[turn].getCurrentArea()<<" please press any key to roll the die." << endl;
			system("PAUSE");
			cout << "You have rolled a " << diceRoll() << "!" << endl;
		}









		(turn == numberOfPlayers-1)?(turn=0):(turn++);
	}	


			
	system("PAUSE");
	return 0;
}