#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std;
struct type{
	int yyy;
};

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
}
int main (){
	list <int> a;
	for(int i=0;i<100;++i)
		a.push_back(i);
	showlist(a);
	list<int> b = a;
	showlist(b);
	return 0;
}
