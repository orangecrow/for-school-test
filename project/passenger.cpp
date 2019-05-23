#include"passenger.h"
passenger::passenger(string name, int x, int y){
	a.x=x;
	a.y=y;
	this->name=name;
}

int passenger::enter(airfield a){
	icv=1;
	a.get_in(*this)
	my_location=&a;
	icv=0;
}

int passenger::enter(airplane a){
	icv=1;
	if(a.get_in(*this))
		my_location=&a;
	icv=0;
}

int passenger::leave(){
	my_location=my_location->get_out(*this);
}

int passenger::add_item (item a){
	luggage.push_front(a);
}

int passenger::remove_item(item b){
	auto it;
	for( it=luggage.begin(); it!=luggage.end(); ++it )
	{
		if(*it==b){
			it=erase(it);
		}
	}
}

list<item> passenger::show_items(){
	return luggage;
}
int passenger::remove_item(list<item>){

}
int passenger::add_item(list<item>){

}

/*	list<item>::iterator it;
	for( it=luggage.begin(); it!=luggage.end(); ++it )
	{
		cout<< it.name <<'\n';
	}*/
