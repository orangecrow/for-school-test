#include<iostream>
#include<list>
#include"base.h"
#include<iterator>
#include<string>
#include"airplane.h"
#include"passenger.h"
#ifndef AIRFILED_H 
#define AIRFILED_H 
using namespace std;
class airfield: public base{
	list<passenger> people;
	list<airfield> others;
	list<airplane> planes;
	public:
	get_in(passenger);
	get_out(passenger);
	get_out(airplane);
	get_in(airplane);
	//-----vuser functions
	int check_luggage(passenger);
	airfield(): name("generic airfied") {}
	airfield(string name, int x , int y ); 
	~airfield();
	list<airplane> show_planes();
}
#endif





//end of important stuff
/*
	void add_plane(plane);
	void remove_plane(plane);
	void add_passenger(passenger ); //leting a person enter the 
	void remove_passenger(passenger);
	int bagage_control(passenger);*/
