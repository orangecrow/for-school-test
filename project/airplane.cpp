#include"airplane.h"
int airplane::fly(airfield destination){
	icv=1;
	if(distance(get_pos(),destination.get_pos())<=range){
		my_location->get_out(*this);
		my_location=&destination;
		destination.get_in(*this);
	}
	icv=0;
}
int airplane::get_in(passenger b){
	if(icv&&check_luggage(b)){
		people.push_front(b);
		return 1;
	}
	return 0;
} 
int airplane::check_luggage(passenger b){
	list<item>::iterator it;
	for( it=b.show_items().begin(); it!=b.show_items().end(); ++it ) {
		if((*it).get_type()==NOTSAFE)
			return 0;
	}
	return 1;
}
