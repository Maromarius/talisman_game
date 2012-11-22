#include "Map.h"

//Region Areas
string OutterRegionAreas[24] = {"CITY", "FIELDS", "HILLS", "PLAINS", "WOODS", "PLAINS", "TAVERN", "FIELDS", "RUINS", "PLAINS", "FOREST", "FIELDS", "VILLAGE", "FIELDS", "GRAVEYARD", "WOODS", "SENTINEL", "HILLS", "CHAPEL", "FIELDS", "CRAGS", "PLAINS", "WOODS", "FIELDS"};
string MiddleRegionAreas[16] = {"WARLOCKS CAVE", "DESERT", "OASIS", "DESERT", "TEMPLE", "WOODS", "RUNES", "CASTLE", "PORTAL OF POWER", "BLACK KNIGHT", "HIDDEN VALLEY", "HILLS", "CURSED GLADE", "RUNES", "CHASM", "RUNES"};
string InnerRegionAreas[8] = {"VALLEY OF FIRE", "WEREWOLF DEN", "DICE WITH DEATH", "CRYPT", "PLAIN OF PERIL", "MINES", "VAMPIRES TOWER", "PITS"};


Map::Map()
{
	for (int i = 0 ;  i<24 ;i++)	
		this->OutterRegion.addAtTail(OutterRegionAreas[i]);
	
	for (int i = 0 ;  i<16 ;i++)	
		this->MiddleRegion.addAtTail(MiddleRegionAreas[i]);

	for (int i = 0 ;  i<8 ;i++)	
		this->InnerRegion.addAtTail(InnerRegionAreas[i]);

	this->Crown.addAtTail("CROWN OF COMMAND");

}

Map::~Map()
{
	delete &OutterRegion;
	delete &MiddleRegion;
	delete &InnerRegion;
}