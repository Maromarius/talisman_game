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

void movementOnBoard(Player players[], int turn, Map* TalismanMap)
{
	cout << "\nIt is currently Player " << turn << "'s turn!" << endl;
			cout << players[turn].getCharacter().getProfession() << ", you are at the "<< players[turn].getCurrentAreaName()<<endl;
			char decision;
			bool endTurn=false;

			//--Non-Rolling Non-Movement Alternative to the Turn 1/2
			//-Casting the Command Spell
			if(players[turn].getCurrentAreaName()=="Crown of Command")
			{
				cout<<players[turn].getCharacter().getProfession()<<", you are still at the COROWN OF COMMAND, please press any key to roll the die and cast the Command Spell!" << endl;
				system("PAUSE");
				int dRoll = diceRoll();
				cout << "You have rolled a " << dRoll << "!"<<endl;
				if (dRoll >3)
				{
					cout << "You have succeded in casting the Spell, All other Players loses a life!! MOUHAHAHA!!"<<endl;
					for (int i=0;i<numberOfPlayers;i++)
					{
						if ((!players[i].checkIfPermaDead()) && i!=turn)
							players[i].getCharacter().loseLive(1);
					}
					endTurn = true;
				}
				else
				{
					cout << "You missed the spell ... nothing happened."<<endl;
					endTurn = true;
				}
			}
			if(endTurn)
				return;
			
			//--Non-Rolling Non-Movement Alternatives to the Turn 2/2
			//-Building a raft
			if(players[turn].getCharacter().hasAxe() && players[turn].getCurrentAreaName()=="Woods" && !players[turn].getCharacter().isBagFull())
			{
				cout<<"Would you like to use this turn to build a Raft instead of moving (y/n)?"<<endl;
				cin>>decision;
				if(decision)
				{
					players[turn].getCharacter().acquiresRaft();
					endTurn = true;
				}
			}
			if(endTurn)
				return;

			//--Non-Rolling Movement Alternatives to the Turn 1/2
			//-Using a raft
			if(players[turn].getCharacter().hasRaft() && players[turn].getCurrentRegion()=="outter")
			{
				cout<<"Would you like to use this turn to cross the Storm River with your Raft instead of moving (y/n)?"<<endl;
				cin>>decision;
				if(decision)
				{
					//Implement raft crossing
					endTurn = true;
				}
			}
			if(endTurn)
				return;

			//--Non-Rolling Movement Alternatives to the Turn 2/2
			//-Inside the Inner Region
			int dRoll;
			if (players[turn].getCurrentRegion()=="inner")
			{
				cout<<"While in the Inner Region of Talisman, one may only move to one area at the time."<<endl;
				dRoll = 1;
			}
			//--Rolling Movement Alternative to the Turn
			else
			{
				cout<<"Please press any key to roll the die." << endl;
				system("PAUSE");
				dRoll = diceRoll();
				cout << "You have rolled a " << dRoll << "!"<<endl; 
			}
			char movedirection;
			cout << "Would you like to move right(r) or left(l)?" << endl;
			cin >> movedirection; //Must be idiot-proofed

			//Moving Player's Character on the Board
			for (int i=0; i<dRoll; i++)
			{
				if(movedirection == 'r')
				{
					players[turn].moveCharacterRight();
					cout << "You are moving towards the "<< players[turn].getCurrentAreaName()<<endl;
				}
				else if(movedirection == 'l')
				{
					players[turn].moveCharacterLeft();
					cout << "You are moving towards the "<< players[turn].getCurrentAreaName()<<endl;
				}
				else
				{
					cout<<"Can't move there!";
				}

				//-Special landing points on board 1/4 Sentinel
				if(players[turn].getCurrentAreaName()=="Sentinel")
				{
				cout << players[turn].getCharacter().getProfession() << "!!, you have reach the Sentinel, would you like to tempt to cross the bridge? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"Congratulations, you have crossed the bridge!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"middle","Hills");
						players[turn].setCurrentRegion("middle");
						i++;
					}
				}

				//-Special landing points on board 2/4 Hills from the middle region
				if(players[turn].getCurrentAreaName()=="Hills" && players[turn].getCurrentRegion()=="middle")
				{
				cout << players[turn].getCharacter().getProfession() << ", you are back at the Hills, would you like to cross the bridge? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"You have crossed the bridge!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"outter","Sentinel");
						players[turn].setCurrentRegion("outter");
						i++;
					}
				}

				//-Special landing points on board 3/4 Portal of Power
				if(players[turn].getCurrentAreaName()=="Portal of Power")
				{
				cout << players[turn].getCharacter().getProfession() << "!!, you have reach the Portal of Power, would you like to tempt to open it? (y/n) " << endl;
				cin>>decision;
					if(decision == 'y')
					{
						cout<<"You have opened the portal!!\n"
							<<"Would you like to continue right(r) or left(l)?"<<endl;
						cin>>movedirection;
						players[turn].setCurrentArea(TalismanMap,"inner","Plain of Peril");
						players[turn].setCurrentRegion("inner");
						i++;
					}
				}

				//-Special landing points on board 4/4 Valey of Fire
				if(players[turn].getCurrentAreaName()=="Valey of Fire")
				{
				cout << players[turn].getCharacter().getProfession() << "!!, you have reach the Valey of Fire!!"<<endl;
					if(players[turn].getCharacter().hasTalisman())
					{
						cout<<"You have used your Talisman to enter into the Crown of Command!!\n"<<endl;
						players[turn].setCurrentArea(TalismanMap,"crown","Crown of Command");
						players[turn].setCurrentRegion("crown");
						i++;
					}
					else
					{
						cout<<"Sorry Adventurer, without the Talisman, you may not continue beyond this point, please move back toward the plain of Peril.\n"<<endl;
					}
				}
			}
			
			cout << players[turn].getCharacter().getProfession() << ", you are now at the "<< players[turn].getCurrentAreaName()
				 <<"\n\n"<<players[turn].getCurrentAreaDescription()<<endl;
}

int main(void){
	cout<<"/////////////////////////////////////////////\n"
		<<"////-------------------------------------////\n"
		<<"////--WELCOME TO THE WORLD OF TALISMAN!--////\n" 
		<<"////-------------------------------------////\n"
		<<"/////////////////////////////////////////////\n"<<endl;
	
	//--------------SETUP--------------
	//--Board Setup
	Map* TalismanMap = new Map();

	//--Number of Players Setup
	bool correctInput = false;
	int characterNumberSelection;
	while (!correctInput)
	{
		cout<<"How many players will be playing this game?"<<endl;	
		cin>>characterNumberSelection;
		//Checking for correct number of players
		if(characterNumberSelection>1 && characterNumberSelection<=6)
			correctInput = true;
		if(!correctInput)
			cout<<"I am sorry that number of players is not permitted, please try again."<<endl;
	}
	numberOfPlayers = characterNumberSelection;
	numberOfPlayersAlive = numberOfPlayers;
	Player *players = new Player[numberOfPlayers];
		
	//--Assign characters to players
	initializeCharacterArray();
	for (int i=1; i<numberOfPlayers+1; i++)
	{
		cout << "Creating Player " << i << endl;
		new (&players[i]) Player(TalismanMap, isInPlay);
		cout << players[i].getCharacter().getProfession() <<" has been created." << endl;
		players[i].getCharacter().printStats();
	}






	//--------------GAME--------------
	//while(numberOfPlayersAlive > 1)
	for(int testTurns = 0 ; testTurns<20; testTurns++)
	{
		//----Character Movement/Activity on Board
		if(!players[turn].checkIfPermaDead())
		{
			movementOnBoard(players, turn, TalismanMap);
			//Encounters
		}
		(turn == numberOfPlayers)?(turn=1):(turn++);
	}	


			
	system("PAUSE");
	return 0;
}