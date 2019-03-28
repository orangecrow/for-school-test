#include"CarList.h"

int main(){
	CarList a;
	CarList* b= new CarList;
	a.add_car("Toyota",234,1,10000);	
	a.add_car("Toyota",432,2,20000);
	a.add_car("Nissan",34,3,30000);
	b->add_car("Toyota",169,1,10000);	
	b->add_car("Mercedes",465,4,10000);
	b->add_car("Komodo",169,2,0);	
	a.print();
	b->print();
	a.remove_brand(3);
	a.remove_brand(2);
	b->remove_brand(2);	
	b->remove_brand(4);
	a.print();
	b->print();
	delete b;
	
	return 0;
}





