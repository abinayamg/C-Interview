//array concept: it stores a block of memory. it is also an internal pointer//

#include<stdio.h>
void main()
{
char a[6]={'v','i','n','e','e'}; // int takes 4 bytes and here 4x6 24 bytes this array a takes.
// variable 'a' is called as internal pointer as it holds the base address of this array a[6]. 
printf("%ld\n",sizeof(a));  // size of entire array
printf("%ld\n",sizeof(a[2]));  // size of 2nd position

printf("value 1: %c\n", a[0]);
printf("value 2: %c\n", *a); //prints the value in the base address. i.e the first one- value in a[0]
//instead of the above, we can use pf("%s",a); .entire string will be printed
printf("full value : %s\n", a);

printf("array address 1: %d\n", &a[0]);
printf("array address 2: %d\n", a); //prints the base address which is similar to &a[0]

for(int i=0; i<5; i++)
{
printf("value 3: %c\n", a[i]); //prints value 'a[0],a[1]..'
printf("value 4: %c\n", *(a+i)); //prints value 'a[0],a[1]..'
printf("array address 3: %d\n", &a[i]); //prints the address of 'a[0],a[1]..'
printf("array address 4: %d\n", a+i); //prints the address of 'a[0],a[1]..'
}
}


