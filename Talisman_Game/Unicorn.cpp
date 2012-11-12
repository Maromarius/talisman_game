#include "Unicorn.h"

const string Unicorn::NAME = "Unicorn";
const string Unicorn::DESCRIPTION = "Add 1 to your Strength and 1 to your Craft.";
Unicorn::Unicorn() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Unicorn::~Unicorn(void)
{
}
