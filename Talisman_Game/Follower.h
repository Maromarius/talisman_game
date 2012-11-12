#ifndef FOLLOWER_H
#define FOLLOWER_H
#include <string>
#include <iostream>


using namespace std;

class Follower {

protected:
	string name;
	string description;
	int encounterNumber;

public:
    Follower(string,string,int);
    ~Follower();
	string getName();
	string getDescription();	
};

#endif
