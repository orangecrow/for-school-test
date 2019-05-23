#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airplane.h"
#include"airfield.h"
#include"item.h"
#include"base.h"
#ifndef PASSENGER_H 
#define PASSENGER_H 
using namespace std;
class passenger: public base{
	private:
	list<item> luggage;
	base *my_location;
	public:
	passenger(string name, int x, int y);
	passenger(): name("John Smith") {}
	~passenger();
	int add_item(item);
	int remove_item(item);
	//int remove_item(list<item>);
	//int add_item(list<item>);
	int enter(airfield);
	int enter(airplane);
	int leave();
	list<item> show_items();
}
#endif

