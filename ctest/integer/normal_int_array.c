//array concept: it stores a block of memory. it is also an internal pointer//

#include<stdio.h>
int main()
{
int a[6]={2,3,4,5,6}; // int takes 4 bytes and here 4x6 24 bytes this array a takes.
// variable 'a' is called as internal pointer as it holds the base address of this array a[6]. 
printf("%ld\n",sizeof(a));  // size of entire array
printf("%ld\n",sizeof(a[2]));  // size of 2nd position
int i;

printf("value 1: %d\n", a[0]);
printf("value 2: %d\n", *a); //prints the value in the base address. i.e the first one- value in a[0]
printf("address 1: %d\n", &a[0]);
printf("address 2: %d\n", a); //prints the base address which is similar to &a[0]

for(i=0; i<5; i++)
{
printf("value 3: %d\n", a[i]); //prints value 'a[0],a[1]..'
printf("value 4: %d\n", *(a+i)); //prints value 'a[0],a[1]..'
printf("address 3: %d\n", &a[i]); //prints the address of 'a[0],a[1]..'
printf("address 4: %d\n", a+i); //prints the address of 'a[0],a[1]..'
}
return 0;
}


