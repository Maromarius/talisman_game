#include "Character.h"

/*const string Character::LOCATION = "";
const string Character::ALIGNMENT = "";
const string Character::PROFESSION = "";*/


//-----CONSTRUCTORS/DESTRUCTOR-----//
Character::Character(){}

Character::Character(int _baseStrength, int _baseCraft, int _baseLife, int _baseFate, 
					int _numOfSpells, string _location, string _alignment, string profession)
{
	counterStrength = 0;
    counterCraft = 0;
    gold = 1;
    trophies = 0;
	fateTokens = 0;
	maxObjects = 4;
	numToadTurnsLeft = 0;

	this->profession = profession;

    mule = false;
    isToad = false;
	talisman = false;
	axe = false;
	raft = false;
	isAlive = true;


	//vector<Object> bag;

    baseStrength = _baseStrength;
    baseCraft = _baseCraft;
    baseLife = _baseLife;
    currentLife = _baseLife;
    baseFate = _baseFate;
	currentFate = _baseFate;
    numOfSpells = _numOfSpells;
    spawnPoint = _location;
    alignment = _alignment;
}

Character::~Character(void)
{

	baseStrength = 0;
    counterStrength = 0;
    baseCraft = 0;
    counterCraft = 0;
    baseLife = 0;
    currentLife = 0;
    gold = 0;
    currentFate = 0;
    trophies = 0;
    numOfSpells = 0;
    spawnPoint = "";
    alignment = "";
	profession = "";
    mule = 0;
    isToad = 0;
}

//-----OBJECTS-----//
/*void Character::addObject(Object obj){
	
	
	
	
	if(bag.size() <=3){
		bag.push_back(obj);
	}
	else if(mule&& bag.size() <=7){
		bag.push_back(obj);	
	}
	else
	{
		cout << "Bag is Full"<<endl;
	}
	

}

/*void Character::removeObject(Object obj){

	string name = obj.getName();
	for(int i = 0; i <= bag.size(); i++){
	
		if(bag[i].getName() == name){
			bag.erase();
		}
	}
}*/

//-----GAIN/LOSS-----//
void Character::gainStrength(int str){

	counterStrength += str;
	
}

void Character::loseStrength(int str){

	counterStrength -= str;

	if(counterStrength < 0){
		counterStrength = 0;
	}	
}

void Character::gainCraft(int craft){

	counterCraft += craft;
	
}

void Character::loseCraft(int craft){

	counterCraft -= craft;

	if(counterCraft < 0){
		counterCraft = 0;
	}	
}

void Character::gainLive(int lives){

	currentLife =+ lives;


}

void Character::loseLive(int lives){

	currentLife =- lives;

	if (currentLife <=0 ){
		isAlive = false;
	}

}

void Character::replenishLives(int lives){

	if(currentLife >= baseLife){
		return;
	}
	
	currentLife += lives;
	if(currentLife > baseFate){
		currentLife = baseFate;
	}
}

void Character::gainFate(int fate){

	currentFate =+ fate;


}

void Character::loseFate(int fate){

	currentFate =- fate;

	if (currentFate <=0 ){
		currentFate = 0;
	}

}

void Character::replenishFate(int fate){

	if(currentFate >= baseFate){
		return;
	}
	
	currentFate += fate;
	if(currentFate > baseFate){
		currentFate = baseFate;
	}
}

void Character::gainGold(int _gold){

	gold += _gold;

}

void Character::loseGold(int _gold){

	gold -= _gold;
}

//-----UPDATES-----//
void Character::updateMule(){
	//TODO
	mule = !mule;
}

void Character::updateToad(){

	isToad = !isToad;
}

//-----GETTERS/SETTERS-----//
string Character::getProfession(){

	return this->profession;
}

string Character::getSpawnPoint()
{
	return this->spawnPoint;
}

int Character::getLife(){

	return this->currentLife;
}

int Character::getStrength(){

	if (this->isToad)
		return 1;
	else
		return (this->baseStrength+this->counterStrength);//Add object strength
}

int Character::getCraft(){
	
	if (this->isToad)
		return 1;
	else
		return (this->baseCraft+this->counterCraft);//Add object craft
}

int Character::getBaseLife(){

	return this->baseLife;
}

int Character::getBaseStrength(){

	return this->baseStrength;
}

int Character::getBaseCraft(){

	return this->baseCraft;
}

int Character::getCounterStrength(){

	return this->counterStrength;
}

int Character::getCounterCraft(){

	return this->counterCraft;
}

/*string Character::showBag(){

	string temp = "";

	for(int i = 0; i < this->bag.size(); i++){
		
		temp += "->";
		temp += this->bag[i].getName();
		temp += "\n";	
		temp += this->bag[i].getDescription();
		temp += "\n";		
	}
	return temp;
}

/*vector<Object> Character::getBag(){

	return this->bag;

}*/

int Character::getMaxObjectSize(){

	return this->maxObjects;
}

bool Character::hasRaft()
{
	return this->raft;
}

void Character::setHasRaft(bool raftSituation)
{
	this->raft = raftSituation;
}

void Character::setHasTalisman(bool talismanSituation)
{
	this->talisman = talismanSituation;
}

//-----PRINTSTATS-----//
void Character::printStats()
{
		cout << this->getProfession() << "'s stats are as follows:" << endl;
		cout << "Current Life: " << this->getLife() << "/" << this->getBaseLife() << endl;
		cout << "Strength: " << this->getBaseStrength() << " (" << this->getBaseStrength() << " Base + " << this->getCounterStrength() << " Counters)" << endl; 
		cout << "Craft: " << this->getBaseCraft() << " (" <<  this->getBaseCraft() << " Base + " <<  this->getCounterCraft() << " Counters)" << endl; 
		cout << endl;
		return;
}

//-----MISCELLANEOUS-----//
void Character::acquiresRaft()
{
	//Add raft object to bag
	this->raft = true;
}

bool Character::isBagFull()
{
	if(this->mule)
		return !(this->bag.size()<8);
	else
		return !(this->bag.size()<4);
}

bool Character::hasAxe()
{
	return this->axe;
}

bool Character::hasTalisman()
{
	return this->talisman;
}