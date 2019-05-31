#include"item.h"
item::item(string a, safety b){
	name=a;
	type=b;
}
safety item::get_type(){
	return type;
}
