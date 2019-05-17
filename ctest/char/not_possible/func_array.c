//Return array from function in C. C programming does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index.

#include<stdio.h>

/*char add(char a[6], char b[6])
{
char k[10] = {'w','i','n'};
printf("func1= %s\n",a[6]);
printf("func2= %s\n",b[6]);
return k[1];
}
*/

void main()
{
  int a =10 , b=20;
  int c = a+b;
  printf("%d\n",c);
/*char x[6]="hey", y[6]="hello";

char v[1] = add(x[6],y[6]); // this is not allowed, getting in the function the whole array arguments 
//int z[10] = sub(x,y);
printf("sum: %s\n",v);
*/
}
