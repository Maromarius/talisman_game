#ifndef ARMOUR_H
#define ARMOUR_H
#include <string>
#include "Armor.h"
#include <iostream>


using namespace std;

class Armour : public Armor{

protected:
	    static const string NAME;
		static const string DESCRIPTION;

public:
    Armour();
    ~Armour();
};

#endif
