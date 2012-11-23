#include "Map.h"

Map::Map()
{
	//Outter Region
	Area * OutterRegionAreas[24];
	OutterRegionAreas[0] = new City();
	OutterRegionAreas[1] = new Fields();
	OutterRegionAreas[2] = new Hills();
	OutterRegionAreas[3] = new Plains();
	OutterRegionAreas[4] = new Woods();
	OutterRegionAreas[5] = new Plains();
	OutterRegionAreas[6] = new Tavern();
	OutterRegionAreas[7] = new Fields();
	OutterRegionAreas[8] = new Ruins();
	OutterRegionAreas[9] = new Plains();
	OutterRegionAreas[10] = new Forest();
	OutterRegionAreas[11] = new Fields();
	OutterRegionAreas[12] = new Village();
	OutterRegionAreas[13] = new Fields();
	OutterRegionAreas[14] = new Graveyard();
	OutterRegionAreas[15] = new Woods();
	OutterRegionAreas[16] = new Sentinel();
	OutterRegionAreas[17] = new Hills();
	OutterRegionAreas[18] = new Chapel();
	OutterRegionAreas[19] = new Fields();
	OutterRegionAreas[20] = new Crags();
	OutterRegionAreas[21] = new Plains();
	OutterRegionAreas[22] = new Woods();
	OutterRegionAreas[23] = new Fields();
	for(int i =0;i<24;i++)
		this->OutterRegion.addAtTail(OutterRegionAreas[i]);
	
	//Middle Region
	Area * MiddleRegionAreas[16];
	MiddleRegionAreas[0] = new WarlocksCave();
	MiddleRegionAreas[1] = new Desert();
	MiddleRegionAreas[2] = new Oasis();
	MiddleRegionAreas[3] = new Desert();
	MiddleRegionAreas[4] = new Temple();
	MiddleRegionAreas[5] = new Woods();
	MiddleRegionAreas[6] = new Runes();
	MiddleRegionAreas[7] = new Castle();
	MiddleRegionAreas[8] = new PortalOfPower();
	MiddleRegionAreas[9] = new BlackKnight();
	MiddleRegionAreas[10] = new HiddenValley();
	MiddleRegionAreas[11] = new Hills();
	MiddleRegionAreas[12] = new CursedGlade();
	MiddleRegionAreas[13] = new Runes();
	MiddleRegionAreas[14] = new Chasm();
	MiddleRegionAreas[15] = new Runes();
	for(int i =0;i<16;i++)
		this->MiddleRegion.addAtTail(MiddleRegionAreas[i]);

	//Inner region
		Area * InnerRegionAreas[8];
	InnerRegionAreas[0] = new ValleyOfFire();
	InnerRegionAreas[1] = new WerewolfDen();
	InnerRegionAreas[2] = new DiceWithDeath();
	InnerRegionAreas[3] = new Crypt();
	InnerRegionAreas[4] = new PlainOfPeril();
	InnerRegionAreas[5] = new Mines();
	InnerRegionAreas[6] = new VampiresTower();
	InnerRegionAreas[7] = new Pits();
	for(int i =0;i<8;i++)
		this->InnerRegion.addAtTail(InnerRegionAreas[i]);

	//Crown of Command
	this->Crown.addAtTail("Crown of Command");

	//Setting Raft Destinations
	int middleRegiontracker = 0;
	for (int i=0;i<24;i++)
	{
		OutterRegionAreas[i]->setRaftDestination(MiddleRegionAreas[middleRegiontracker]);
		MiddleRegionAreas[middleRegiontracker]->setRaftDestination(OutterRegionAreas[i]);
	}
}

Map::~Map()
{
	delete &OutterRegion;
	delete &MiddleRegion;
	delete &InnerRegion;
	delete &Crown;
}