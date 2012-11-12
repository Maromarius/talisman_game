#ifndef POLTERGEIST_H
#define POLTERGEIST_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Poltergeist : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 1;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Poltergeist();
   ~Poltergeist();
};

#endif
