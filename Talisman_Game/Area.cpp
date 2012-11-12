#include "Area.h"
using namespace std;

Area::Area()
{
	areaName="";
	left = NULL;
	right = NULL;
}

Area::Area(string name)
{
	areaName=name;
	left = NULL;
	right = NULL;
}