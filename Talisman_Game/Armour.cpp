#include "Armour.h"
#include <string>
#include <iostream>

using namespace std;

const string Armour::NAME = "Armour";
const string Armour::DESCRIPTION = "If you are defeated in battle and just lost a life, roll 1 die. If you roll a 4, 5, or 6, the Armour protected you and you did not lose that life, though you still lost the battle.";

Armour::Armour() : Armor(NAME,DESCRIPTION)
{
	
}
