#include "City.h"
#include "Area.h"

const string City::NAME = "City";
const string City::DESCRIPTION = "";

City::City() : Area(NAME, DESCRIPTION)
{
}

City::~City()
{
}