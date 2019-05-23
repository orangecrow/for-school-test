#include"passenger.h"
#include"airfiled.h"
#include"airplane.h"
#include"item.h"
int main{
passenger John;
passenger Sara("Sara Smith", 1, 1);
passenger Will("Will Smith", 0 , 0);
item gun("gun",NOTSAFE);
item  tb;

Sara.add_item(tb);
Will.add_item(gun);

airplane DC10[5];
for(int i=0;i<5;++i)
	DC10[i].fly(chopin);

John.enter(gda);
Will.enter(chopin);
Sara.enter(chopin);

John.enter(DC10[0]);
Will.enter(DC10[1]);
Sara.enter(DC10[2]);

airfiled chopin("Chopin", 0 , 0);
airfiled gda("Gdans", 84 , 126);
airfiled usa("USA", 1500 , 1000);

DC10[0]fly(gda);
DC10[1]fly(gda);
DC10[2]fly(gda);
DC10[3]fly(usa);
return 0;
}
