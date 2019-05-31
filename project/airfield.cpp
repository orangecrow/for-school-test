#include"airfield.h"
#include<list>
using namespace std;
int airfield::get_in(passenger b){
	people.push_front(b);
} 
int airfield::get_out(passenger b){
	people.remove(b);
	return 1;
} 
int airfield::get_in(airplane b){
	planes.push_front(b);
} 
int airfield::get_out(airplane b){
	planes.remove(b);
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

