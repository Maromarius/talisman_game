#include "Dwarf.h"

const string Dwarf::LOCATION = "CRAGS";
const string Dwarf::ALIGNMENT = "Neutral";
const string Dwarf::PROFESSION = "Dwarf";

Dwarf::Dwarf() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Dwarf::~Dwarf()
{
}