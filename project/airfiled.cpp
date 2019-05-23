#include"airfield.h"
using namespace airfield;
int get_in(passenger b){
	if(b.get_icv()){
		people.push_front(b);
		return 1;
	}
	return 0;
} 
int get_out(passenger b){
	if(b.get_icv()){
		auto it;
		for( it=people.begin(); it!=people.end(); ++it ) {
			if(*it==b){
				it=erase(it);
			}
		}
		return 1;
	}
	return 0;
} 
int get_in(airplane b){
	if(b.get_icv()){
		planes.push_front(b);
		return 1;
	}
	return 0;
} 
int get_out(airplane b){
	if(b.get_icv()){
		auto it;
		for( it=planes.begin(); it!=planes.end(); ++it ) {
			if(*it==b){
				it=erase(it);
			}
		}
		return 1;
	}
	return 0;
} 
airfield(string name, int x , int y ){
	a.x=x;
	a.y=y;
	this->name=name;
}
int check_luggage(passenger b){
	for( it=b.luggage.begin(); it!=b.luggage.end(); ++it ) {
		if(*it.type==NOTSAFE)
			return 0;
	}
	return 1;
}

