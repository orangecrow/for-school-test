#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airplane.h"
#include"airfiled.h"
#ifndef PASSENGER_H 
#define PASSENGER_H 
using namespace std;
class human: public base{
	public:
	human(string name,int x, int y);
	~human();
	operator+(item);
	operator-(item);
	operator-(list<item>);
	operator(list<item>);
	void enter(airfiled);
	void enter(plane);
	void leave(airfiled);
	void leave(plane);
	list<item> show_items();
}
#endif

