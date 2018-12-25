//copying elements from one array to another

#include<stdio.h>

void main(){
int a[10] = {4,5,6,8,9};
int b[10];
for (int i=0; i<5; i++)
{
b[i]=a[i];
printf("val = %d\n ",b[i]);
}
}

