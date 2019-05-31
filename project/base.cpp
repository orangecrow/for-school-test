#include"base.h"
int base::distance(pos a, pos b){
	return hypot(a.x-b.x, a.y-b.y);
}
