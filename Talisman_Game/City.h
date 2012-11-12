#ifndef CITY_H
#define CITY_H
#include <string>
#include "Area.h"

using namespace std;
 
class City : public Area
{
protected:
	
    static const string NAME ;
    static const string DESCRIPTION;

public:
    City();
    ~City();
};

#endif
