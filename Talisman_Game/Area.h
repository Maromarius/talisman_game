#ifndef AREA_H
#define AREA_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Area
{
protected:
	string areaName;
	string areaDescription;
	//vector <AdventureCard> adventurCards;
	vector<Area*> raftDestination;

public:
	Area* left;
	Area* right;
	void setRaftDestination(Area*);
	void effect();
	string getAreaName();
	string getAreaDescription();
	Area* getRight();
	Area* getLeft();
	Area();
	Area(string);
	Area(string,string);
	~Area();
};
#endif