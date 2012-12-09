#include "Witch.h"


Witch::Witch(void)
{
	NAME = "Witch";
	DESCRIPTION = "A Witch lurks in this space for the rest of the game. If you land here roll 1 die:\n1. Become a Toad for 3 turns\nLose 1 life\nGain 1 Strength\nGain 1 Craft\nGain 1 Spell\nReplenish fate up to your fate value";
	encounterNumber = 4;
}


Witch::~Witch(void)
{
}
