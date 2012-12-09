#include "RandomSpell.h"


RandomSpell::RandomSpell(void)
{
	NAME="Random Spell";
	DESCRIPTION="Cast on any character at any time. He rolls 1 die to determine the effect on him:\n1.Become a Toad for 3 turns\n2.Lose Strength\n3.Lose Craft\n4.Lose all gold\n5.Gain 1 Strength\n6.Gain 1 Life\nAll but Strength and Craft values and those gained from Followers and Objects.";
}


RandomSpell::~RandomSpell(void)
{
}
