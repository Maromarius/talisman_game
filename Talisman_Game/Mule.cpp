#include "Mule.h"

const string Mule::NAME = "Mule";
const string Mule::DESCRIPTION = "The Mule can carry an extra four Objects for you. If you lose the Mule, leave any surplus Objects of your choice in the space you are in.";
Mule::Mule() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Mule::~Mule(void)
{
}
