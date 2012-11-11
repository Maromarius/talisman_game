#ifndef REGION_H
#define REGION_H

#include <iostream>
#include <string>
using namespace std;

struct Area
	{
		string data;
		Area* left;
		Area* right;

		Area(string data) : data(data), left(NULL), right(NULL) {}
	};

class Region
{	
public:

	Region();
	~Region();
	void addAtHead(string data);
	void addAtTail(string data);
	void deleteArea(string data);
	Area* getArea(string data);

	bool isEmpty();

private:

	Area* head;
	Area* tail;

};
#endif