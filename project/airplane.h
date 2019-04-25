#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airfiled.h"
#ifndef AIRPLANE_H 
#define AIRPLANE_H 
using namespace std;
class plane {
	int x,y;
	string name;
	int range;
	int capacity;
	airfiled* my_location;
	string messege;
	list<passenger> people;
	public:
	plane(int seat_number, int range, int x ,int y);
	~plane();
	plane(): name("DC-10"), capacity(20), range(400), x(0), y(0) {}
	int set_messege(string);
	string display_messege();
	int fly(airfiled destination);
}
#endif




