#ifndef ALCHEMIST_H
#define ALCHEMIST_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Alchemist : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Alchemist();
    ~Alchemist();
};

#endif
