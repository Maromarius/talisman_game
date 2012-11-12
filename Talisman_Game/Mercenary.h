#ifndef MERCENARY_H
#define MERCENARY_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Mercenary : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Mercenary();
   ~Mercenary();
};

#endif
