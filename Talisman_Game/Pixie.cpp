#include "Pixie.h"

const string Pixie::NAME = "Pixie";
const string Pixie::DESCRIPTION = "You need not roll the die in the Forest unless you wish to. If you choose to roll, you must accept the result.\nYou may evade creatures and characters in the Woods.";
Pixie::Pixie() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Pixie::~Pixie(void)
{
}
