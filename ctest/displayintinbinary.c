#include<stdio.h>
void display(unsigned int n)
{
static int count =0;
unsigned int i;
for(i=(1<<31);i>0;i>>=1)
{
if(n&i)
printf("1");
else
printf("0");
count++;
if(count%8==0)
printf(" ");
}
}
int main()
{
int x;
scanf("%d",&x);
display(x);
return 0;
}

