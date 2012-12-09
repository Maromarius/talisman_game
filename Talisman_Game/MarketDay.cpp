#include "MarketDay.h"


MarketDay::MarketDay(void)
{
	NAME = "Market Day";
	DESCRIPTION = "It's Market Day across the land. Clockwise starting with yourself, all characters may immediately buy available Objects at these prices:\nSword 1G\nHelmet 1G\nMule 2G\nShield 2G\nWater Bottle 1G\nRaft 3G\nMarket Day then packs off to the discard pile.";
	encounterNumber = 1;
}


MarketDay::~MarketDay(void)
{
}
