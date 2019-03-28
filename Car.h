#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string.h>
#include <stdio.h>
class Car{
	char* brand;
	int licence_number;
	int owner_id;
	int price;
	Car* next;
public:
	Car(char *brand, int number, int id, int price); //constructor also prints all the data
	~Car();//destructor also prints
	void print();//they sure like printing
	//other methods are allowed
	Car(const Car &car2);
	int get_licence_number();
	int get_owner_id();
	int get_price();
	void set_price(int);
	Car* get_next();
	void set_next(Car*);
	Car operator=(Car);
	Car** get_adr_of_next();

};
#endif
