#ifndef MULE_H
#define MULE_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Mule : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Mule();
   ~Mule();
};

#endif
