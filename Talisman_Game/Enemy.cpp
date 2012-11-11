#include "Enemy.h"
#include <string>
#include <iostream>

using namespace std;

Enemy::Enemy(string name, string description,string type,int encounterNumber,int craft,int strength){

	this->name = name;
	this->description = description;
	this->type = type;
	this->encounterNumber = encounterNumber;
	this->craft = craft;
	this->strength = strength;
}

Enemy::~Enemy()
{
	type = "";
	name = "";
	description= "";
	encounterNumber = 0;
}

string Enemy::getName(){

	return this->name;
}

string Enemy::getDescription(){
	return this->description;

}