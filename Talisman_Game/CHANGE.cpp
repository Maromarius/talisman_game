#include "CHANGE.h"
#include <string>
#include <iostream>

using namespace std;

Object::Object(string name, string _description){

	this->name = name;
	description = _description;
}

Object::~Object()
{

	name = "";
	description= "";
}

string Object::getName(){

	return this->name;
}

string Object::getDescription(){
	return this->description;

}