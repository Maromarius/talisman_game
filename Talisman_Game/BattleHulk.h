#ifndef BATTLEHULK_H
#define BATTLEHULK_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class BattleHulk : public Enemy
{


protected:
	
    static const int STRENGTH = 10;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
    BattleHulk();
    ~BattleHulk();
};

#endif
