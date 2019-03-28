#include"CarList.h"
using namespace std;


CarList::CarList(){
	//printf("this is car_list constructor\n");
	head=NULL;
}

CarList::~CarList(){
	//printf("this is car_list destructor\n");
	Car* c;
	while(head!=NULL){
		c=head;
		head=head->get_next();
		delete c;
	}
}

void CarList::print(){
	cout << "v---------------------v" << endl;
	for(Car *c=head;c!=NULL;c=c->get_next()){
		c->print();
	}
	cout << "^---------------------^" << endl;
}

void CarList::remove_brand(int owner_id){
	/*Car* old=NULL;
	Car* i=head;
	while(i!=NULL){
		old=i;
		i=i->get_next();
		if(old->get_owner_id()==owner_id)
			delete old;
	}*/
	Car** old=&head;
	Car* i=head;
	while(i!=NULL){
		if(i->get_owner_id()==owner_id){
			(*old)=i->get_next();
			delete i;
			i=(*old);
			continue;
		}
		old=(*old)->get_adr_of_next();
		i=*old;
	}
}

void CarList::add_car( char *brand, int number, int id, int price){
	//printf("this is add car function\n");
	Car* i=head;
	while(i!=NULL){
		if(i->get_licence_number()==number){
			if(i->get_owner_id()==id)
				i->set_price(price);
			return;
		}
		i=i->get_next();
	}
	Car *c = new Car(brand, number, id, price);
	Car* old=NULL;
	i=head;
	while(1){
		if(i==NULL||i!=NULL && i->get_licence_number()>number){
			if(head==i)head=c;
			else old->set_next(c);
			c->set_next(i);
			return;
		}
		old=i;
		i=i->get_next();
	}
}



