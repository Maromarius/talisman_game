#include "Shrine.h"


Shrine::Shrine(void)
{
	NAME="Shrine";
	DESCRIPTION="The Shrine will remain here for the rest of the game. Roll 1 die to pray with the following results:\n1) Ignored\n2) Gain 1 fate\n3) Gain 1 gold\n4) Gain 1 Spell\n5) Gain 1 life\n6) Teleport to any space in the same Region";
	encounterNumber=6;
}


Shrine::~Shrine(void)
{
}
