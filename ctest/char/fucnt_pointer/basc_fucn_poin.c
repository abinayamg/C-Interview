//fucntion pointer basic 
#include<stdio.h>

void add() // called func
{
printf("func called"); 
}; 

void main(){

void (*abi)() = add; //fucn pointer declaration

(*abi)(); // calling func without argument passing
}



