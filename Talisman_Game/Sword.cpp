#include "Sword.h"
#include <string>
#include <iostream>

using namespace std;

const string Sword::NAME = "Sword";
const string Sword::DESCRIPTION = "Add 1 to your Strength during battle.";

Sword::Sword() : Weapon(NAME,DESCRIPTION)
{
	
}

