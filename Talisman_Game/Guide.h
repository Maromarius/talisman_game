#ifndef GUIDE_H
#define GUIDE_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Guide : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Guide();
   ~Guide();
};

#endif
