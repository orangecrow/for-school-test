#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airfiled.h"
#ifndef AIRPLANE_H 
#define AIRPLANE_H 
using namespace std;
class plane: public base{
	add_pasenger(human);
	remove_pasenger(human);
	public:
	plane(int seat_number, int range, int x ,int y);
	~plane();
	set_messege(string);
	display_messege();
	fly(airfiled destination);
	crush();//all passengers die
}
#endif

