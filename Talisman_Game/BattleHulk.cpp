#include "BattleHulk.h"

const string BattleHulk::NAME = "BattleHulk";
const string BattleHulk::TYPE = "Construct";
const string BattleHulk::DESCRIPTION = "You may evade the Battle Hulk instead of attacking it. It will remain here until it is killed.";

BattleHulk::BattleHulk() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH)
{

}

BattleHulk::~BattleHulk()
{
}
