#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <string>
#include "Region.h"
using namespace std;



class Map : public Region
{
public:
	
	//Regions of TalisMAN
	Region OutterRegion;
	Region MiddleRegion;
	Region InnerRegion;
	Region Crown;

	//Constructor & Destructor
	Map();
	~Map();
};
#endif