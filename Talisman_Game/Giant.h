#ifndef GIANT_H
#define GIANT_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Giant : public Enemy
{


protected:
	
    static const int STRENGTH = 6;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Giant();
    ~Giant();
};

#endif
