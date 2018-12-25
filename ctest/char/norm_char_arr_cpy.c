//copying elements from one array to another using char datatype. i.e string is copied from one array to another. it is not possible to copy the char array from one array to another, so we need to use either strncpy function or use for loop. but it is posssible with integer.

#include<stdio.h>
#include<string.h>

void main(){
char a[10] = "hello all";
char b[10];
//b[i]=a[i]; //this isn't possible
strncpy(b, a, 10);
printf("val = %s\n ",b);
}

