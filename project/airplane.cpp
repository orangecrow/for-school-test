#include"airplane.h"
int airplane::fly(airfield destination){
	if(distance(get_pos(),destination.get_pos())<=range){
		if(my_location!=NULL)
			my_location->get_out(*this);
		my_location=&destination;
		destination.get_in(*this);
	}
}
int airplane::get_in(passenger b){
	if(check_luggage(b)){
		people.push_front(b);
		return 1;
	}
	return 0;
} 
int airplane::get_out(passenger b){
	people.remove(b);
	return 0;
}
int airplane::check_luggage(passenger b){
	list<item>::iterator it;
	auto g = b.show_items();
	for( it=g.begin(); it!=g.end(); ++it ) {
		if((*it).get_type()==NOTSAFE)
			return 0;
	}
	return 1;
}
