//Return array from function in C. C programming does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index.

#include<stdio.h>

int add(int a[6], int b[6]){
int k[10] = {9,8};
printf("func1= %d\n",a[6]);
printf("func2= %d\n",b[6]);
return k[1];
}

void main()
{
int x[6]={3,5}, y[6]={7,9};

int v[1] = add(x[6],y[6]); // this is not allowed
//int z[10] = sub(x,y);
printf("sum: %d\n",v);
}
