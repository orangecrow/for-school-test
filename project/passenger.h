#ifndef PASSENGER_H 
#define PASSENGER_H 
#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airplane.h"
#include"airfield.h"
#include"item.h"
#include"base.h"
using namespace std;
class airplane;
class airfield;
class passenger: public base{
	private:
	list<item> luggage;
	base *my_location;
	public:
	base* get_my_location(){return my_location;};
	passenger(string name, int x, int y);
	passenger()  {name="John Smith";}
	~passenger();
	int add_item(item);
	int remove_item(item);
	//int remove_item(list<item>);
	//int add_item(list<item>);
	int enter(airfield);
	int enter(airplane);
	int leave();
	list<item> show_items();
};
#endif

