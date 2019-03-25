#include"Car.h"
using namespace std;
Car::Car(char *brand, int number, int id, int price){
	brand=new(char[sizeof(brand)/sizeof(char)]);
	strcpy(this->brand, brand);
	licence_number=number;
	owner_id=id;
	this->price=price;
	next==NULL;
}

Car::~Car(){
	delete brand;
}

Car operator=(Car &car2){
	strcpy(brand, car2.brand);
	licence_number=car2.licence_number;
	owner_id=car2.owner_id;
	price=car2.price;
	next==car2.next;
	return this;
}

Car::Car(const Car &car2){
	strcpy(brand,car2.brand);
	licence_number=car2.licence_number;
	owner_id=car2.owner_id;
	price=car2.price;
	next=car2.next;
}

void Car::print(){
	cout << brand << ';'
	<< licence_number << ';'
	<< owner_id << ';'
	<< price << '\n';
}

int Car::get_licence_number(){
	return licence_number;
}
int Car::get_owner_id(){
	return owner_id;
}
int Car::get_price(){
	return price;
}
