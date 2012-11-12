#ifndef GNOME_H
#define GNOME_H
#include <string>
#include "Follower.h"

using namespace std;
 
class Gnome : public Follower
{


protected:
	
    static const int ENCOUNTER_NUMBER = 5;
    static const string NAME;
	static const string DESCRIPTION;

public:
   Gnome();
   ~Gnome();
};

#endif
