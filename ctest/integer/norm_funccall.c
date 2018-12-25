#include<stdio.h>

int add(int a, int b){
//printf("sum= %d\n",a+b);
return a+b;
}

int sub(int a, int b){
//int c;
//printf("diff= %d\n",c=a-b);
return a-b;
}

void main()
{
int x =5, y = 10;
int v = add(x,y);
int z = sub(x,y);
printf("sum: %d\n", v);
printf("diff: %d\n", z);
}
