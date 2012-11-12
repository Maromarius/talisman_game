#include "Woods.h"
#include "Area.h"

const string Woods::NAME = "Woods";
const string Woods::DESCRIPTION =	"Draw 1 Card.\n"
									"Do not draw a card if there is already one in this space";

Woods::Woods() : Area(NAME, DESCRIPTION)
{
}

Woods::~Woods()
{
}