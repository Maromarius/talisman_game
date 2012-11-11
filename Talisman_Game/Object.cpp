#include "Object.h"
#include <string>
#include <iostream>

using namespace std;

Object::Object(string _name, string _description){

	name = _name;
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