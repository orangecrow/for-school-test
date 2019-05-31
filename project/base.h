#ifndef BASE_H 
#define BASE_H 
#include<string>
#include<cmath>
using namespace std;
struct pos{
	int x,y;
};
class airfield;
class passenger;
class airplane;
class base{
	protected:
	pos a;
	int id;
	string name;
	public:
	int distance(pos,pos);
	virtual int get_out(){};
	virtual int get_out(passenger&){};
	virtual int check_luggage(){};
	bool operator==(base b){if(id==b.id)return 1; return 0;}
	base() {a.x=0; a.y=0; id=(long int)this;}
	pos get_pos(){ return a; }
};
#endif
