#include "Prince.h"

const string Prince::NAME = "Prince";
const string Prince::DESCRIPTION = "You may have up to 2 lives per visit healed at the Castle for free.\nYou may exchange the Prince for 3 gold at the Castle. If you do this, you must place him on the discard pile.";
Prince::Prince() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Prince::~Prince(void)
{
}
