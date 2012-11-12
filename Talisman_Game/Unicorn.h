#ifndef UNICORN_H
#define UNICORN_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Unicorn : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Unicorn();
   ~Unicorn();
};

#endif
