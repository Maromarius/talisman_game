#include "Guide.h"

const string Guide::NAME = "Guide";
const string Guide::DESCRIPTION = "You need not roll the die in the Chasm, Crags, or Forest unless you wish to. If you choose to roll, you must accept the result.";

Guide::Guide() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


Guide::~Guide(void)
{
}
