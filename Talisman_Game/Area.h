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
	Area* left;
	Area* right;
	//vector <AdventureCard> adventurCards;
public:
	void effect();
	Area();
	Area(string,string);
	~Area();
};
#endif