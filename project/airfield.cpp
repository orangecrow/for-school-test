#include"airfield.h"
#include<list>
using namespace std;
int airfield::get_in(passenger b){
	if(b.get_icv()){
		people.push_front(b);
		return 1;
	}
	return 0;
} 
int airfield::get_out(passenger b){
	if(b.get_icv()){
		list<passenger>::iterator it;
		for(it=people.begin(); it!=people.end(); ++it ) {
			if(*it==b){
				it=people.erase(it);
			}
		}
		return 1;
	}
	return 0;
} 
int airfield::get_in(airplane b){
	if(b.get_icv()){
		planes.push_front(b);
		return 1;
	}
	return 0;
} 
int airfield::get_out(airplane b){
	if(b.get_icv()){
		list<airplane>::iterator it;
		for( it=planes.begin(); it!=planes.end(); ++it ) {
			if(*it==b){
				it=planes.erase(it);
			}
		}
		return 1;
	}
	return 0;
} 
airfield::airfield(string name, int x , int y ){
	a.x=x;
	a.y=y;
	this->name=name;
}
int airfield::check_luggage(passenger b){
	list<item>::iterator it;
	for( it=b.show_items().begin(); it!=b.show_items().end(); ++it ) {
		if((*it).get_type()==NOTSAFE)
			return 0;
	}
	return 1;
}

