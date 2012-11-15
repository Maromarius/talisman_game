#include "Map.h"
#include "Player.h"
#include "Character.h"
#include "Object.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Sword.h"

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
int turn = 1;

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
	return ((int) rand() % 6 + 1);
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
	for (int i=1; i<numberOfPlayers+1; i++)
	{
		cout << "Creating Player " << i << endl;
		cout << endl;
		new (&players[i]) Player(TalismanMap, isInPlay);

		cout << players[i].getCharacter().getProfession() <<" has been created." << endl;
		cout << players[i].getCharacter().getProfession() << "'s stats are as follows:" << endl;
		cout << "Current Life: " << players[i].getCharacter().getLife() << "/" << players[i].getCharacter().getBaseLife() << endl;
		cout << "Strength: " << players[i].getCharacter().getBaseStrength() << " (" << players[i].getCharacter().getBaseStrength() << " Base + " << players[i].getCharacter().getCounterStrength() << " Counters)" << endl; 
		cout << "Craft: " << players[i].getCharacter().getBaseCraft() << " (" <<  players[i].getCharacter().getBaseCraft() << " Base + " <<  players[i].getCharacter().getCounterCraft() << " Counters)" << endl; 
		cout << endl;

		

	}	

	for (int i=1; i<numberOfPlayers+1; i++)
	{
		Object *o1 = new Sword();
		players[i].getCharacter().addObject(*o1);
		string temp = players[i].getCharacter().showBag();
		cout << temp;
	}

	//--------------GAME--------------
	// Game start. Here is the big WHILE loop.
	//while(numberOfPlayersAlive > 1){
	for(int testTurns = 0 ; testTurns<20; testTurns++)
	{
		if(!players[turn].checkIfPermaDead())
		{
			char movedirection;
			int dRoll = diceRoll();
			char decision;
			bool inOutter=true;
			bool inMiddle=false;
			bool inInner=false;
			
			cout << "\nIt is currently Player " << turn << "'s turn!" << endl;
			cout << players[turn].getCharacter().getProfession() << ", you are at the "<< players[turn].getCurrentArea()<<" please press any key to roll the die." << endl;
			system("PAUSE");
			cout << "You have rolled a " << dRoll << "!\n" 
				 << "Would you like to move right(r) or left(l)?" << endl;
			cin >> movedirection;

			for (int i=0; i<dRoll; i++)
			{
				if(movedirection == 'r')
				{
					players[turn].moveCharacterRight();
					cout << "You are moving towards the "<< players[turn].getCurrentArea()<<endl;
				}
				else if(movedirection == 'l')
				{
					players[turn].moveCharacterLeft();
					cout << "You are moving towards the "<< players[turn].getCurrentArea()<<endl;
				}
				else
				{
					cout<<"Can't move there!";
				}


				if(players[turn].getCurrentArea()=="SENTINEL" && inOutter)
				{
				cout << players[turn].getCharacter().getProfession() << "!!, you have reach the SENTINEL, would you like to tempt to cross the bridge? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"Congratulations, you have crossed the bridge!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"middle","HILLS");
						inOutter=false;
						inMiddle=true;
						i++;
					}
				}

				if(players[turn].getCurrentArea()=="HILLS" && inMiddle)
				{
				cout << players[turn].getCharacter().getProfession() << ", you are back at the HILLS,would you like to cross the bridge? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"You have crossed the bridge!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"outter","SENTINEL");
						inMiddle=false;
						inOutter=true;
						i++;
					}
				}
				if(players[turn].getCurrentArea()=="PORTAL OF POWER")
				{
				cout << players[turn].getCharacter().getProfession() << "!!, you have reach the PORTAL OF POWER, would you like to tempt to open it? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"You have opened the portal!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"inner","PLAIN OF PERIL");
						inInner = true;
						inMiddle=false;
						i++;
					}
				}
			if(inInner)
				break;
			}
			
			cout << players[turn].getCharacter().getProfession() << ", you are now at the "<< players[turn].getCurrentArea()<<endl;

			
		}


		(turn == numberOfPlayers)?(turn=1):(turn++);
	}	


			
	system("PAUSE");
	return 0;
}