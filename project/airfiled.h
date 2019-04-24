#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airplane.h"
#ifndef AIRFILED_H 
#define AIRFILED_H 
using namespace std;
class airfiled: public base{
	void add_plane(plane);
	void remove_plane(plane);
	void add_passenger(human ); //leting a person enter the airport
	void remove_passenger(human);
	int bagage_control(human);
	public:
	airfiled(string name, int x , int y ); //we need to provide coordinates and airfiled name
	~airfiled();
	list<plane> show_planes();
}
#endif

