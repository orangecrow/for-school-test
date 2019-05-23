#include<iostream>
#include"base.h"
#include<list>
#include<iterator>
#include<string>
#ifndef ITEM_H 
#define ITEM_H 
using namespace std;
enum safety {SAFE ,NOTSAFE};
class item: public base{
	safety type;
	public:
	item(string, saftey);
	~item();
	item(): name("tooth brush") type(SAFE){};
}
#endif

