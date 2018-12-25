//getting char value from user and print : another method
/*
#include<stdio.h>
#include<stdlib.h>

struct abin
{
int a;
char b[10];
};

int main(){

char c[10]="abi";
struct abin ab;
ab.b[0]=c[0];
printf("%c",ab.b[0]);

for(int i=0;i<4;i++)
{
ab.b[i]=c[i];
printf("%c",ab.b[i]);
}

return 0;
}
*/

//getting char value from user and print : another method
#include<stdio.h>
#include<stdlib.h>

struct abin
{
int a;
char b[10];
};

int main(){

struct abin ab[10];

for(int i=0;i<4;i++)
{
scanf("%s",ab[i].b);

}
for(int i=0;i<4;i++)
{
printf("%s\n",ab[i].b);
}
return 0;
}
