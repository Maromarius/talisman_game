#include "Helmet.h"
#include <string>
#include <iostream>

using namespace std;

const string Helmet::NAME = "Helmet";
const string Helmet::DESCRIPTION = "If you are defeated in battle and just lost a life, roll 1 die. If you roll a 6, the Helmet protected you and you did not lose that life, though you still lost the battle.";

Helmet::Helmet() : Armor(NAME,DESCRIPTION)
{
	
}
