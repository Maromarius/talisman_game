#include "Poltergeist.h"

const string Poltergeist::NAME = "Poltergeist";
const string Poltergeist::DESCRIPTION = "A Poltergeist has attached itself to you. You must take it as a Follower. Its only effect is to slow your movement to 1 space per turn. You can only rid yourself of it by crossing the River, either by bridge, raft, or ferry. You must then discard it.";
Poltergeist::Poltergeist() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Poltergeist::~Poltergeist(void)
{
}
