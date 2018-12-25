#include<stdio.h>
void fun(int **asd)
{

int a=10,*ptr;
ptr = &a;
asd=&ptr;
printf("%d\n",**asd);
//return (asd);

}

int main()
{
int b=5,*zxc,**qwe;
zxc=&b;
qwe=&zxc;
fun(&zxc);
printf("%d\n",*zxc);
printf("%d\n",**qwe);
}

