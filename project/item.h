#include<iostream>
#include"base.h"
#include<list>
#include<iterator>
#include<string>
#ifndef ITEM_H 
#define ITEM_H 
using namespace std;
enum safety {SAFE ,NOTSAFE};
class item: base{
	string name;
	safety type;
	public:
	item(string, saftey);
	~item();
	item(): string("tooth brush") type(SAFE){};
}
#endif

