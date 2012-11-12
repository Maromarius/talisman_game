#ifndef PRINCE_H
#define PRINCE_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Prince : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Prince();
   ~Prince();
};

#endif
