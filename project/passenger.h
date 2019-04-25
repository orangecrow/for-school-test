#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airplane.h"
#include"airfiled.h"
#include"item.h"
#ifndef PASSENGER_H 
#define PASSENGER_H 
using namespace std;
class passenger{
	private:
	string name;
	int x,y;
	list<item> luggage;
	public:
	passenger(string name, int x, int y);
	passenger(): name("John Smith"), x(0),y(0){}
	~passenger();
	operator+(item);
	operator-(item);
	operator-(list<item>);
	operator+(list<item>);
	void enter(airfiled);
	void enter(airplane);
	void leave(airfiled);
	void leave(airplane);
	list<item> show_items();
}
#endif

