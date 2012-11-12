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