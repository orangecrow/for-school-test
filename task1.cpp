#include"Car.h"
#include <iostream>
#include <string.h> //for strcpy
using namespace std;
struct Car{
	char * brand;
	int licence_number;
	int owner_id;
	int price;
	Car * next;
	};
Car *head=NULL;
void print(){
	for(Car *c=head;c!=NULL;c=c->next){
		cout << c->brand << ';'
		<< c->licence_number << ';'
		<< c->owner_id << ';'
		<< c->price << endl;
	}
	cout << "---------------------" << endl;
}
void add_car( char *brand, int number, int id, int price){
	Car* i=head;
	while(i!=NULL){
		if(i->licence_number==number){
			if(i->owner_id==id)i->price=price;
			return;
		}
		i=i->next;
	}
	Car* old=NULL;
	i=head;
	Car *c = new Car;
	c->brand=new(char[sizeof(brand)/sizeof(char)]);
	strcpy(c->brand, brand);
	c->licence_number=number;
	c->owner_id=id;
	c->price=price;
	c->next==NULL;
	while(1){
		if(i==NULL ? 1 : i->licence_number>number){
			if(head==i)head=c;
			else old->next=c;
			c->next=i;
			return;
		}
		old=i;
		i=i->next;
	}
}
void remove_brand(int owner_id){
	Car** old=&head;
	Car* i=head;
	while(i!=NULL){
		if(i->owner_id==owner_id){
			(*old)=i->next;
			delete i->brand;
			delete i;
			i=(*old);
			continue;
		}
		old=&(*old)->next;
		i=*old;
	}
}
int main(){
	print();	 	//testing print on an empty list
	remove_brand(12);	//testing remove on an empty list
	//const char * something = "ajshd";
	add_car("Toyota",234,1,10000);	//adding to empty list
	print();
	add_car("Toyota",432,2,20000);
	add_car("Nissan",34,3,30000);	//adding to the beginning of the list
	print();
	add_car("Toyota",169,1,10000);	//adding somwhere in the middle of the list
	print();
	add_car("Mercedes",465,4,10000);//adding to the end of the list
	print();
	add_car("Yaris",169,1,3000);	//adding element with same licence id and owner id but different price and brand
	print();
	add_car("Komodo",169,2,0);	//adding element with same licence id but different owner id, price and brand
	print();
	remove_brand(3); //remove first element
	print();
	remove_brand(2); //remove middle elements
	print();
	remove_brand(4); //remove last element
	print();
	return 0;
}
