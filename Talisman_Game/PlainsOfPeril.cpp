#include "PlainOfPeril.h"
#include "Area.h"

const string PlainOfPeril::NAME = "PlainOfPeril";
const string PlainOfPeril::DESCRIPTION =	"You must stop here before going on\n"
									"in the inner region where you\n"
									"only Move 1 Space per turn";

PlainOfPeril::PlainOfPeril() : Area(NAME, DESCRIPTION)
{
}

PlainOfPeril::~PlainOfPeril()
{
}