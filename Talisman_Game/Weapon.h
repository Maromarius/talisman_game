#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include "Object.h"
#include <iostream>


using namespace std;

class Weapon : public Object{

protected:
	    string name;
		string description;

public:
    Weapon(string,string);
    ~Weapon();
};

#endif
