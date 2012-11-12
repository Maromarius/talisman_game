#include "Alchemist.h"

const string Alchemist::NAME = "Angel";
const string Alchemist::DESCRIPTION = "If you are of good alignment, you gain one life. If you are evil, you lose one life. There is no effect if you are neutral. The Angel then departs to the discard pile.";

Alchemist::Alchemist() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Alchemist::~Alchemist(void)
{
}
