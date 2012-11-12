#include "CursedByAHag.h"

const string CursedByAHag::NAME = "Cursed by a Hag";
const string CursedByAHag::DESCRIPTION = "You must take her as a Follower. All other Followers immediately leave you - discard them. You may have no other Followers until you rid yourself of the Hag by visiting the Village Mystic (even if he ignores you). You may then discard her.";

CursedByAHag::CursedByAHag() : Follower(NAME, DESCRIPTION, ENCOUNTER_NUMBER){}


CursedByAHag::~CursedByAHag(void)
{
}
