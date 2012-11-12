#include "Fields.h"
#include "Area.h"

const string Fields::NAME = "Fields";
const string Fields::DESCRIPTION =	"Draw 1 Card\n"
									"Do not draw a card if there is already one in this space.\n";

Fields::Fields() : Area(NAME, DESCRIPTION)
{
}

Fields::~Fields()
{
}