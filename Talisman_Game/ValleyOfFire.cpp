#include "ValleyOfFire.h"
#include "Area.h"

const string ValleyOfFire::NAME = "ValleyOfFire";
const string ValleyOfFire::DESCRIPTION =	"You must have a talisman to enter.\n"
									"You can only enter if you are carrying a talisman. If you do not have one, you must turn back.\n"
									"The Crown of Command can only be reached from this space.";

ValleyOfFire::ValleyOfFire() : Area(NAME, DESCRIPTION)
{
}

ValleyOfFire::~ValleyOfFire()
{
}