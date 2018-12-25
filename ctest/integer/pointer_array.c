//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// to increment the array pointer without incrementing the address of a

#include<stdio.h>
int main()
{
int a; //here a is integer
int *b[5]; //here b is pointer array of integer datatype.
//this is also called array of pointers. b[0] is pointer, b[1] is a pointer..

for(int i=0;i<4;i++)
{
//traversing is done, so it shuld be inside loop. the pointer address has to be incremented manually.
b[i]=&a; //address of a is stored in the pointer b[0], then b[1].. but 'a' address is same and wont change. 
printf("enter the val for a: ");
scanf("%d", &a);

printf("address of a %d\n",&a); //address of a is same
printf("value of a %d\n",a); //val a is incremented and printed 4 times 
printf("address of a stored in b = %d\n",b[i]); //the &a val is printed here 4 times, but each time the pointer location is incremented, but the val inside that dont change. 
printf("address of BBBBB =%d\n",&b[i]);//this is the pointer address, b[0], b[1]..and its incremented
printf("address of B2222 =%d\n",b+i); //another method of printing address of the pointer array
printf("value of A2222 =%d\n",*(b+i)); //another method of deferencing pointer array
printf("value of AAAAA =%d\n",*b[i]);// the value inside the pointer address is dereferenced, so the value a which is incremented is printed 4 times.
printf("\n");
}
return 0;
}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
// to increment the address of 'a' without incrementing array pointer
#include<stdio.h>
int main()
{
int a[10]; //here a is an array of integer datatype
int *b; // here b is pointer
b=a;//address of 'a' is stored in pointer 'b'. 
//no traversing, so it can be outside loop. pointer needn't be incremented and array a automatically increments from for loop below.

for(int i=0;i<4;i++)
{
printf("enter the val for a: ");
scanf("%d", &a[i]);
printf("address of AAAAA %d\n",&a[i]); //address increments 4 times &a[0], &a[1]..
printf("address of A22222 %d\n",a+i); //another method for getting address increments 4 times &a[0], &a[1]..
printf("value of A1111 %d\n",*(a+i)); //another method for dereferencing value. increments 4 times a[0], a[1]..
printf("value of AAAA %d\n",a[i]); //value increments 4 times a[0], a[1]..
printf("address of a stored in b = %d\n",b); //this shows the base address a[0], alone. since nothing to traverse using for loop.
printf("address of b =%d\n",&b);// this shows the address of 'b' which wont change since no loop.
printf("value of a =%d\n",*b);// shows the value in the base address a[0]. since no loop and no traverse.
printf("\n");
}
return 0;
}
*/



