//function pointer with character

#include<stdio.h>
#include<stdlib.h>

char vin(char a, char b){ //called function
char c = 'i';
printf("one= %c\n", a);
printf("two= %c\n", b);
return c;
}

void main(){
char ch,  x = 'q', y = 'w';
char (*abi)(char, char) = vin; //func pointer declaration with character datatype
char f = (*abi)(x,y);  //calling fucntion
printf("val : %c\n", f);
}

