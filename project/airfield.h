#ifndef AIRFIELD_H 
#define AIRFIELD_H 
#include<iostream>
#include<list>
#include"base.h"
#include<iterator>
#include<string>
#include"airplane.h"
#include"passenger.h"
using namespace std;
class airplane;
class passenger;
class airfield: public base{
	list<passenger> people;
	list<airfield> others;
	list<airplane> planes;
	public:
	int get_in(passenger);
	int get_out(passenger);
	int get_out(airplane);
	int get_in(airplane);
	//-----user functions
	int check_luggage(passenger);
	airfield()  {name="generic airfied";}
	airfield(string name, int x , int y ); 
	~airfield();
	list<airplane> show_planes();
};
#endif





//end of important stuff
/*
	void add_plane(plane);
	void remove_plane(plane);
	void add_passenger(passenger ); //leting a person enter the 
	void remove_passenger(passenger);
	int bagage_control(passenger);*/
