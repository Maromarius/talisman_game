#ifndef ARMOR_H
#define ARMOR_H
#include <string>
#include "Object.h"
#include <iostream>


using namespace std;

class Armor : public Object{

protected:
	    string name;
		string description;

public:
    Armor(string,string);
    ~Armor();
};

#endif
