//Return array from function in C. C programming does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index. so we are using a pointer here//

//c will not allow the address of the local variable to outside the function, so we need to declare it as static variable.

//the called function also should be declared like pointer and to receive the entire array (as argument sent from outside function) also, we need to receive it in pointer variable only. 

#include<stdio.h>

int *func(int a[6], int b[6]) // the func is declared here as pointer
{
static int k[10] = {6,8}; //static int is declared here
for (int i=0;i<3;i++) // for loop is used to print all the elements of the array one by one.
{
printf("func1= %d\n",a[i]);
printf("func2= %d\n",b[i]);
}
return k; // returning the integer array k.
}

void main()
{
int x[6]={3,5}; 
int y[6]={7,9};

int *v = func(x,y); //receiving the entire array 'k' and stores in the integer pointer variable 'v'  
for (int i=0;i<3;i++){ //for loop is used to print all the elements of the array one by one.
printf("below: %d\n",v[i]);
}
}
