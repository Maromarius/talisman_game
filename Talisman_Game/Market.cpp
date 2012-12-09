#include "Market.h"


Market::Market(void)
{
	NAME = "Market";
	DESCRIPTION = "A Market has set up here for the rest of the game. On each visit you may buy available Objects at these prices:\nSword 1G\nHelmet 1G\nWater Bottle 1G\nShield 2G\nMule 2G\nRaft 3G";
	encounterNumber = 6;
}

Market::~Market(void)
{
}
