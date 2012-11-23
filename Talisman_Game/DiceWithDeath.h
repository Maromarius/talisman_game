#ifndef DICEWITHHEART_H
#define DICEWITHHEART_H
#include <string>
#include "Area.h"


using namespace std;
 
class DiceWithHeart: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    DiceWithHeart();
    ~DiceWithHeart();
};

#endif