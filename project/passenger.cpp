#include"passenger.h"
#include<list>
passenger::passenger(string name, int x, int y){
	a.x=x;
	a.y=y;
	this->name=name;
}

passenger::~passenger(){

}
int passenger::enter(airfield a){
	if(distance(get_pos(),a.get_pos())<=2){
		a.get_in(*this);
		my_location=&a;
	}
}

int passenger::enter(airplane a){
	//if(my_location!=NULL&&my_location->does_have(a)){
		if(a.get_in(*this))
			my_location=&a;
	//}
}

int passenger::leave(){
	if(get_out(*this))
		my_location=NULL;//my_location->get_out(*this);
	else;
		//my_location=my_location->get_my_location();
}

int passenger::add_item (item a){
	luggage.push_front(a);
}

int passenger::remove_item(item b){
	luggage.remove(b);
}

list<item> passenger::show_items(){
	return luggage;
}

/*	
	list<item>::iterator it;
	for( it=luggage.begin(); it!=luggage.end(); ++it )
	{
		if(*it==b){
			it=erase(it);
		}
	}
int passenger::remove_item(list<item>){

}
int passenger::add_item(list<item>){

}
list<item>::iterator it;
	for( it=luggage.begin(); it!=luggage.end(); ++it )
	{
		cout<< it.name <<'\n';
	}*/
