#ifndef AREA_H
#define AREA_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Area
{
public:

	string areaName;
	Area* left;
	Area* right;
	//vector <AdventureCard> adventurCards;
	void effect();

	Area();
	Area(string);
	~Area();
};
#endif