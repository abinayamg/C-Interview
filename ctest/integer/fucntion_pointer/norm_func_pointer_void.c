//fucntion pointer basic 
#include<stdio.h>

void add() //called func
{
printf("added"); 
}; 

void main(){

void (*abi)() = add; //fucn pointer declaration

(*abi)(); // calling func
}




