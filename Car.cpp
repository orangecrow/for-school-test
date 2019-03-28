#include"Car.h"
using namespace std;
Car::Car(char *brand, int number, int id, int price){
	//printf("this is car constructor\n");
	this->brand=new char[strlen(brand)]; //strlen(brand)
	//printf("this is after brand neew char[%d]\n%s\n",strlen(brand),brand);
	strcpy (this->brand, brand);
	//printf("this is after brand copy\n");
	licence_number=number;
	owner_id=id;
	this->price=price;
	next==NULL;
	print();
}

Car::~Car(){
	//printf("this is car destructor\n");
	print();
	delete brand;
}

Car Car::operator=(Car car2){
	strcpy(brand, car2.brand);
	licence_number=car2.licence_number;
	owner_id=car2.owner_id;
	price=car2.price;
	next=car2.next;
	return *this;
}

Car::Car(const Car &car2){
	brand= new char[strlen(car2.brand)];
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
void Car::set_price(int a){
	price=a;
}
Car* Car::get_next(){
	return next;
}

void Car::set_next(Car* a){
	next=a;
}
Car** Car::get_adr_of_next(){
	return &next;
}
