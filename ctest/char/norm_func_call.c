//normal function call using char and passing arguments using char.
// for single char use single quote', for many char(string) use double quote"

//diff representations:

//char a ='b';
//char b[13] = "abi is good";
//char c[4] = {'h','e','l'}; //size should be one more than the total string

#include<stdio.h>

char func(char a, char b) //called fucntion: arg are char type
{
char A = 'g'; //represent in single quote
printf("entered a: %c\n", a);
printf("entered b: %c\n", b);
return A; //returning the singe char A whose value is 'g'.
}

void main()
{
char x = 'i', y = 'T';
//x and y char arguments are passed with func
char h = func(x,y); //returned func is stored in char variable h.
printf("normal: %c\n", h);
}
