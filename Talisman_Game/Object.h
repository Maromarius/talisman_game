#ifndef OBJECT_H
#define OBJECT_H
#include <string>
#include <iostream>


using namespace std;

class Object {

protected:
	  string name;
	  string description;

public:
    Object(string,string);
    ~Object();
	string getName();
	string getDescription();

};

#endif
