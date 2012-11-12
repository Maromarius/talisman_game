#include "Desert.h"
#include "Area.h"

const string Desert::NAME = "Desert";
const string Desert::DESCRIPTION =	"Lose 1 Life\n"
									"Do not draw a card if there is already one in this space.\n";

Desert::Desert() : Area(NAME, DESCRIPTION)
{
}

Desert::~Desert()
{
}