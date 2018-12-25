//structure function 
/*
#include<stdio.h>
#include<stdlib.h>

struct befo *abi(int g, char *name) //struct datatype is defined abi is acting as the variable and funcion as well. 
{
//struct befo *dev;
printf("name from down: %s\n", name);
printf("number from down: %d\n", g);
//return "vin";
return 555;
};

int main()
{
char *c;
char d[10] = "hello";
int m=10;
//c = abi(35, "abi");
c=abi(m,d);     
printf("this is ret pos: %d",c);
//printf("this is returned pos= %s", c);
}
*/

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$//


//normal structure function like how function works

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct abi //struct datatype is defined abi is acting as the variable and funcion as well. 
{
int x;
char *y; 
};
/*
struct abi ammu(int g, char c)
{
struct abi a;
a.x=g;
//a.y="returned";
//strncpy(a.y,"returned",10);
//for(int i=0;i<6;i++){
//a.y="returned";
//printf("%s", a.y);
printf("number from down g: %d\n", g);
}
//return a;
}
*/

int main()
{
int d = 10; 
char c[10] = "vinee";
struct abi b;
printf("this is ret pos: %s\n",c);
b.y="fdgh";
printf("this is ret pos: %s\n",b.y);
//struct abi b = ammu(d, c);     
//for(int i=0;i<6;i++){
//printf("this is ret pos: %d\n",b.x);
//printf("this is ret pos: %s\n",b.y);
//}
return 0;
}




