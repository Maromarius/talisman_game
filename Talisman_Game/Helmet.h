#ifndef HELMET_H
#define HELMET_H
#include <string>
#include "Armor.h"
#include <iostream>


using namespace std;

class Helmet : public Armor{

protected:
	    static const string NAME;
		static const string DESCRIPTION;

public:
    Helmet();
    ~Helmet();
};

#endif
