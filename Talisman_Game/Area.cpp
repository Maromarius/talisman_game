#include "Area.h"
#include <string>
#include <iostream>
using namespace std;

Area::Area()
{
	areaName="";
	areaDescription="";
	left = NULL;
	right = NULL;
}

Area::Area(string name)
{
	areaName=name;
	areaDescription="";
	left = NULL;
	right = NULL;
}

Area::Area(string name, string description)
{
	areaName=name;
	areaDescription=description;
	left = NULL;
	right = NULL;
}

Area::~Area()
{
}

void Area::setRaftDestination(Area* destination)
{
	this->raftDestination.push_back(destination);
}

string Area::getAreaName()
{
	return this->areaName;
}

string Area::getAreaDescription()
{
	return this->areaDescription;
}

Area* Area::getRight()
{
	return this->right;
}

Area* Area::getLeft()
{
	return this->left;
}