#ifndef AXE_H
#define AXE_H
#include <string>
#include "Weapon.h"
#include <iostream>


using namespace std;

class Axe : public Weapon{

protected:
	    static const string NAME;
		static const string DESCRIPTION;

public:
    Axe();
    ~Axe();
};

#endif
