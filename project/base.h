#ifndef BASE_H 
#define BASE_H 
#include<string>
#include<cmath>
using namespace std;
struct pos{
	int x,y;
};
class passenger;
class base{
	protected:
	pos a;
	int id;
	bool icv; //this is supposd to be used to check if the function is called from within the class. (Is Call Valid) 
	string name;
	public:
	int distance(pos,pos);
	virtual int get_out(){};
	virtual int get_out(passenger&){};
	virtual int check_luggage(){};
	bool operator==(base b){if(id==b.id)return 1; return 0;}
	base() {a.x=0; a.y=0; icv=0; id=(long int)this;}
	pos get_pos(){ return a; }
	bool get_icv(){ return icv; }
};
#endif
