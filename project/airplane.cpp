#include"airplane.h"
using namespace airplane;
int fly(airfield destination){
	icv=1;
	if(distance(pos,destination.pos)<=range){
		my_location->get_out(*this);
		my_location=&destination;
		destination.get_in(*this)
	}
	icv=0;
}
int get_in(passenger b){
	if(icv&&b.my_location->check_luggage(b)){
		people.push_front(b);
		return 1;
	}
	return 0;
} 
