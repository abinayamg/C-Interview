//normal integer pointer

#include<stdio.h>
int main()
{
int a; 
int *b;
b=&a;
printf("enter the val for a: ");
scanf("%d", &a);

printf("address of a %d\n",&a);
printf("value of a %d\n",a);
printf("address of a stored in b = %d\n",b);
printf("address of b =%d\n",&b);
printf("value of a =%d\n",*b);
return 0;
}

//method 2
/*
#include<stdio.h>
void main(){
int a;
int *p = &a;
*p=20; //we can give the value directly here to the pointer also, instead of giving int a= 20; both are same
printf("val of a = %d\n", a);
printf("address of a = %d\n", p);
printf("address1 of a = %d\n", &a);
}*/






