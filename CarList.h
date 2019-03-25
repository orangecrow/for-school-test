#ifndef CAR_LIST_H
#define CAR_LIST_H
#include"Car.h"
class CarList{
	Car* head;
public:
	CarList();//creates an empty list
	~CarList();// deletes the whole list
	void add_car( char *brand, int number, int id, int price);
	void remove_brand(int owner_id);
	void print();
};
#endif
