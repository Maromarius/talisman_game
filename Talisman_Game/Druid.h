#ifndef DRUID_H
#define DRUID_H
#include <string>
#include "Character.h"

using namespace std;
 
class Druid : public Character
{


protected:
	
    static const int BASE_STRENGTH = 2;
    static const int BASE_CRAFT = 4;
    static const int BASE_FATE = 4;
	static const int BASE_LIVES = 4;
    static const int NUM_OF_SPELLS = 1;

    static const string LOCATION;
    static const string ALIGNMENT;
	static const string PROFESSION;

public:
    Druid();
    ~Druid();
};

#endif
