#include "Mercenary.h"

const string Mercenary::NAME = "Mercenary";
const string Mercenary::DESCRIPTION = "If you want the Mercenary as your Follower, pay 1 gold. If not, he waits here for a character willing to pay him. While he is your Follower he will add 3 to your Strength in battle until the end of the turn provided you pay 1 gold. You may only pay 1 gold once per turn.";

Mercenary::Mercenary() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Mercenary::~Mercenary(void)
{
}
