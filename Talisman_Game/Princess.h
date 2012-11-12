#ifndef PRINCESS_H
#define PRINCESS_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Princess : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Princess();
   ~Princess();
};

#endif
