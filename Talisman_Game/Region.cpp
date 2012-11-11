#include "Region.h"
using namespace std;



Region::Region()
{
	this->head=NULL;
	this->tail=NULL;
}

Region::~Region()
{
	delete head;
	delete tail;
}

void Region::addAtHead(string data)
{
	if (this->head == NULL)
	{
		this->head = new Area(data);
		this->tail = this->head;
		this->head->left = this->head;
		this->head->right = this->head;		
	}
	else
	{
		Area* temp = new Area(data);
		
		tail->left = temp;
		head->right = temp;
		temp->left = head;
		temp->right = tail;
		head = temp;
	}
}

void Region::addAtTail(string data)
{
	if (this->head == NULL)
	{
		this->head = new Area(data);
		this->tail = this->head;
		this->head->left = this->head;
		this->head->right = this->head;		
	}
	else
	{
		Area* temp = new Area(data);
		
		tail->left = temp;
		head->right = temp;
		temp->left = head;
		temp->right = tail;
		tail = temp;

	}
}

void Region::deleteArea(string data)
{ 
	Area* cursor = this->head;
	bool found = true;  


	while (cursor->data != data)
	{
		cursor = cursor->left;
		if(cursor->data == head->data)	//Back at start without finding data
		{	
			found = false;	
			break;
		}
	}
	if (found)
	{
		cursor->right->left = cursor->left;
		cursor->left->right = cursor->right;

		cursor->left = NULL;
		cursor->right = NULL;
		cursor = NULL;
	}


}

bool Region::isEmpty()
{
	return (this->head==NULL);
}

Area* Region::getArea(string QueryArea)
{
	Area* cursor = this->head;
	bool found = true;  


	while (cursor->data != QueryArea)
	{
		cursor = cursor->left;
		if(cursor->data == head->data)	//Back at start without finding data
		{	
			found = false;	
			break;
		}
	}
	if (found)
	{
		return cursor;
	}
	else
	{
	cout<<QueryArea<<" is not a found, please review and try again."<<endl;
	return NULL;
	}

}