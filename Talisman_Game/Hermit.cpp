#include "Hermit.h"


Hermit::Hermit(void)
{
	NAME = "Hermit";
	DESCRIPTION = "Roll 1 die and place the Hermit on the indicated space:\nCrypt\nPlain of Peril\nCursed Glade\nOasis\nCrags\nForest\nHe will give the first character to visit him there a Talisman, if available, and then vanish to the discard pile.";
	encounterNumber = 4;
}


Hermit::~Hermit(void)
{
}
