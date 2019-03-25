#include"CarList.h"
using namespace std;


Car::CarList(){
 head=NULL	
}

Car::~CarList(){
	
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
	Car *c = new Car(brand, number, id, price);
	/*c->brand=new(char[sizeof(brand)/sizeof(char)]);
	strcpy(c->brand, brand);
	c->licence_number=number;
	c->owner_id=id;
	c->price=price;
	c->next==NULL;*/
	Car* old=NULL;
	i=head;
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



