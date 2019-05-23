#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airplane.h"
#include"airfiled.h"
#include"item.h"
#include"base.h"
#ifndef PASSENGER_H 
#define PASSENGER_H 
using namespace std;
class passenger: base{
	private:
	string name;
	int x,y;
	list<item> luggage;
	base *my_location;
	public:
	passenger(string name, int x, int y);
	passenger(): name("John Smith"), x(0),y(0){}
	~passenger();
	int add_item(item);
	int remove_item(item);
	//int remove_item(list<item>);
	//int add_item(list<item>);
	void enter(airfiled);
	void enter(airplane);
	void leave();
	list<item> show_items();
}
#endif

