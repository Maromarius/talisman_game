#include "Follower.h"
#include <string>
#include <iostream>

using namespace std;

Follower::Follower(string name, string description,int encounterNumber){
	this->name = name;
	this->description = description;
	this->encounterNumber = encounterNumber;
}

Follower::~Follower(){}

string Follower::getName(){

	return this->name;
}

string Follower::getDescription(){
	return this->description;

}