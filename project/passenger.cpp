#include"passenger.h"
passenger::passenger(string name, int x, int y){
	this->x=x;
	this->y=y;
	this->name=name;
	}

void passenger::enter(airfiled a){
	if(a.get_in(this))
		my_location=&a;
}

void passenger::enter(airplane a){
	if(a.get_in(this))
		my_location=&a;
}

void passenger::leave(){
	my_location->get_out(this);
}

int add_itempassenger::(item a){
	luggage.push_front(a);
}

int passenger::remove_item(item){
	luggage.pop_front();
}

list<item> passenger::show_items(){
	list<item>::iterator it;
	for( it=luggage.begin(); it!=luggage.end(); ++it )
	{
		cout<< it.name <<'\n';
	}
}
int remove_item(list<item>){

}
int add_item(list<item>){

}
