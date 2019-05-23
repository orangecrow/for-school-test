#include<string>
#include<cmath>
#ifndef BASE_H 
#define BASE_H 
using namespace std;
struct pos{
	int x,y;
}
int distance(pos a, pos b){
	return hypot(a.x-b.x, a.y-b.y);
}
class base{
	pos a;
	int id;
	bool icv; //this is supposd to be used to check if the function is called from within the class. (Is Call Valid) 
	string name
	public:
	operator==(base b){if(id==a.id)return 1; return 0;}
	base(): a.x(0), a.y(0), icv(0) {id=(int)this;}
	pos get_pos(){ return a; }
	bool get_icv(){ return icv; }
}
#endif
