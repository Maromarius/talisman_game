#include "Alchemist.h"

const string Alchemist::NAME = "Alchemist";
const string Alchemist::DESCRIPTION = "The Alchemist can convert any number of Objects you have into gold. Discard the chosen Objects and gain 1 gold for each. He cannot reverse the procedure.";

Alchemist::Alchemist() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Alchemist::~Alchemist(void)
{
}
