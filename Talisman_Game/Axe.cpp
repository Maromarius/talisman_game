#include "Axe.h"
#include <string>
#include <iostream>

using namespace std;

const string Axe::NAME = "Axe";
const string Axe::DESCRIPTION = "Add 1 to your Strength during battle.You may build a Raft when you are in the Woods or the Forest.";

Axe::Axe() : Weapon(NAME,DESCRIPTION)
{
	
}

