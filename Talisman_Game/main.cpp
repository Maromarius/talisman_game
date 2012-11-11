#include "Character.h"
#include "Druid.h"
#include "Warrior.h"
#include "Armor.h"
#include "Axe.h"
#include "Weapon.h"
#include "Object.h"
#include "Sword.h"
#include "Helmet.h"
#include "Armour.h"

#include <iostream>

using namespace std;



int main(void){


	Object *a1 = new Axe();
	
	
	Object *s1 = new Sword();
	Object *h1 = new Helmet();
	Object *a2 = new Armour();

	Character *w1 = new Warrior();
	Character *d1 = new Druid();
	
	
	cout << "Warrior has been created." << endl;
	cout << w1->getProfession() << "'s stats are as follows:" << endl;
	cout << "Current Life: " << w1->getLife() << "/" << w1->getBaseLife() << endl;
	cout << "Strength: " << w1->getStrength() << " (" << w1->getBaseStrength() << " Base + " << w1->getCounterStrength() << " Counters)" << endl; 
	cout << "Craft: " << w1->getCraft() << " (" << w1->getBaseCraft() << " Base + " << w1->getCounterCraft() << " Counters)" << endl; 
	cout << endl;

	cout << "Druid has been created." << endl;
	cout << d1->getProfession() << "'s stats are as follows:" << endl;
	cout << "Current Life: " << d1->getLife() << "/" << d1->getBaseLife()  << endl;
	cout << "Strength: " << d1->getStrength() << " (" << d1->getBaseStrength() << " Base + " << d1->getCounterStrength() << " Counters)" << endl; 
	cout << "Craft: " << d1->getCraft() << " (" << d1->getBaseCraft() << " Base + " << d1->getCounterCraft() << " Counters)" << endl; 
	cout << endl;

	cout << a1->getName() <<" has been created." << endl;
	cout << h1->getName() <<" has been created." << endl;
	cout << s1->getName() <<" has been created." << endl;
	cout << a2->getName() <<" has been created." << endl;
	cout << endl;
	w1->addObject(*a1);
	w1->addObject(*h1);

	d1->addObject(*s1);
	d1->addObject(*a2);


	cout << w1->getProfession() << " Inventory (size:"<< w1->getBag().size() << "/"<< w1->getMaxObjectSize()<<"):"<< endl;
	cout << w1->showBag() << endl;

	cout << d1->getProfession() << " Inventory (size:"<< d1->getBag().size() << "/"<< d1->getMaxObjectSize()<<"):"<< endl;
	cout << d1->showBag() << endl;





	system("PAUSE");
	delete w1;
	delete d1;
	return 0;
}