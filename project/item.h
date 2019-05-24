#ifndef ITEM_H 
#define ITEM_H 
#include<iostream>
#include"base.h"
#include<list>
#include<iterator>
#include<string>
using namespace std;
enum safety {SAFE ,NOTSAFE};
class item: public base{
	safety type;
	public:
	item(string, safety);
	~item();
	item(): , type(SAFE){name="tooth brush";};
};
#endif

