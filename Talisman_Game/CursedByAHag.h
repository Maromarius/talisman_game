#ifndef CURSEDBYAHAG_H
#define CURSEDBYAHAG_H
#include <string>
#include "Follower.h"

using namespace std;
 
class CursedByAHag : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 1;
    static const string NAME;
	static const string DESCRIPTION;

public:
   CursedByAHag();
   ~CursedByAHag();
};

#endif
