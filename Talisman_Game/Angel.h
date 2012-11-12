#ifndef ANGEL_H
#define ANGEL_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Angel : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 1;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Angel();
   ~Angel();
};

#endif
