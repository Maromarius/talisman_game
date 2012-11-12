#include "Gnome.h"

const string Gnome::NAME = "Gnome";
const string Gnome::DESCRIPTION = "You need only roll 1 die when opening the Portal of Power by Craft and 2 dice in the Mines.\nYou need not roll the die in the Crags unless you wish to. If you choose to roll, you must accept the result.\nYou may evade creatures and characters in the Hills.";

Gnome::Gnome() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Gnome::~Gnome(void)
{
}
