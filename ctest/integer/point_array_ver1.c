
// Method 1: array pointer declaration
/*
#include<stdio.h>
int main()
{
int a[5]={2,3,4,5,6};
//int *p; //p as pointer declaration
//p=a; //assigning address of a to pointer 'p'. can assign like this also without &a, bcos array itself is a pointer.
for(int i=0; i<5; i++)
{
printf("value 1: %d\n", a[i]); //prints value 'a[0],a[1]..'
printf("value 2: %d\n", *(a+i)); //prints value 'a[0],a[1]..'
printf("address 1: %d\n", &a[i]); //prints the address of 'a[0],a[1]..'
printf("address 2: %d\n", a+i); //prints the address of 'a[0],a[1]..'
}
}
*/

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@//
// Method 2: array pointer declaration with example

#include<stdio.h>
int main()
{
int a[]={2,3,4,5,6}; //a is an array of 5 elements.
int *p; //p as pointer declaration
p=a; //assigning address of array 'a' to pointer 'p'.
int i=2;

//can use *p also instead of *(p+i), but since 'i' is used so *(p+i) is better.
//here p is the pointer which holds the address of the array of 5 elements, so *(p+i) means *(p+2) since i=2 is given, so, in p[2] position what value is there (4), that is printed. 
printf("*val of p1: %d\n", *(p+i)); 

//normally p++ means increment the address of the pointer. by default it will be in p[0]. when incremented, it will be p[1]. and the value in p[1] is dereferenced by using *p which will be 3 in this case. if the p++ is not used and *p is printed, then the value of *p will be 2. since in address p[0], the val is 2 in this scenario. 
// if you again do p++ and print *p, we will get 2,3,4.. one by one.
p++; //from p[0] it is incremented to p[1]

printf("*val of p2: %d\n", *p);// here *p dereferences the value of p[1] which is 3 
p++; //again the pointer address (p's position) is incremented. from p[1] to p[2].
printf("*val of p3: %d\n", *p);// here *p dereferences the value of p[2] which is 4

//here a[*p] means, value present in a[4]. bcos the previous line gives the *p value as 4, which is used here. so value in a[4] is 6. generally *p represents the value in the base address a[0] which is 2. if this line is given first before any p++, we will get the value 2. 

printf("value 1: %d\n", a[*p]); // 6 is printed since a[4]
p++; //the pointer address (p's position) is incremented again
printf("value 2: %d\n", a[*p]); //here garbage val is thrown bcos, the position cant be incremented further as a[4] is the last position in the array 'a' and there is no a[5] position and there is no value also. so garbage val is returned.

//here *p and *(p+i) also works, since the a is an array, the pointer can traverse to the next address. 
//printf("value 2: %d\n", *(a+i)); //prints the value in the base address. i.e the first one- value in a[0]
//printf("address 1: %d\n", &a[i]);
//printf("address 2: %d\n", a+i); //prints the base address which is similar to &a[0]
//p++;

}




