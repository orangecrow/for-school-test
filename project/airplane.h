#ifndef AIRPLANE_H 
#define AIRPLANE_H 
#include<iostream>
#include<list>
#include<iterator>
#include"base.h"
#include<string>
#include"airfield.h"
class airfield;
class passenger;
using namespace std;
class airplane: public base {
	int range;
	int capacity;
	airfield* my_location;
	string messege;
	list<passenger> people;
	public:
	airplane(int seat_number, int range, int x ,int y);
	~airplane();
	airplane(): capacity(20), range(400)  {name="DC-10";}
	int set_messege(string);
	string display_messege();
	int fly(airfield destination);
};
#endif




