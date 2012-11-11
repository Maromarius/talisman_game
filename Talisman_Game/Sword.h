#ifndef SWORD_H
#define SWORD_H
#include <string>
#include "Weapon.h"
#include <iostream>


using namespace std;

class Sword : public Weapon{

protected:
	    static const string NAME;
		static const string DESCRIPTION;

public:
    Sword();
    ~Sword();
};

#endif
