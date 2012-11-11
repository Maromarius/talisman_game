#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include <iostream>


using namespace std;

class Enemy {

protected:
	string name;
	string description;
	string type;
	int encounterNumber;
	int strength;
	int craft;

public:
    Enemy(string,string,string,int,int,int);
    ~Enemy();
	string getName();
	string getDescription();
	int getAbility();

};

#endif
