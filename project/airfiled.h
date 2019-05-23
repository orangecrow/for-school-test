#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include"airplane.h"
#include"passenger.h"
#ifndef AIRFILED_H 
#define AIRFILED_H 
using namespace std;
class airfiled{
	string name;
	int x,y;
	list<passenger> people;
	list<airfiled> others;
	list<airplane> planes;
	public:
	airfiled(string name, int x , int y ); 
	~airfiled();
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
