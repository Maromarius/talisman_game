#include "Princess.h"

const string Princess::NAME = "Princess";
const string Princess::DESCRIPTION = "You may have up to 2 lives per visit healed at the Castle for free.\nYou may exchange the Princess for 3 gold at the Castle. If you do this, you must place him on the discard pile.";
Princess::Princess() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Princess::~Princess(void)
{
}
