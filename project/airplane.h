#include<iostream>
#include<list>
#include<iterator>
#include"base.h"
#include<string>
#include"airfield.h"
#ifndef AIRPLANE_H 
#define AIRPLANE_H 
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
	airplane(): name("DC-10"), capacity(20), range(400)  {}
	int set_messege(string);
	string display_messege();
	int fly(airfield destination);
}
#endif




