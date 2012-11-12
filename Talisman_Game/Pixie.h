#ifndef PIXIE_H
#define PIXIE_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Pixie : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Pixie();
   ~Pixie();
};

#endif
