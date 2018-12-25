//using the structure itself as a pointer and passing the functions

#include<stdio.h>
#include<stdlib.h>
//this structure function will be called only when, abi which acts as function is called in the main function.

static struct befo* abi(int g,char *name) //struct datatype is defined and abi is acting as the variable and funcion as well. here, the arguments are declared as int and then character pointer *name. char pointr is used to easily traverse the data especially the strings. the struct datatype has to mentioned like 'befo*'. that is the datatype and 'abi' is variable
{
//int a;
printf("%s\n", name); //the name good will be printed, which is sent from the below function 'abi'.
printf("number: %d\n", g); // the number 10 will be printed, which is sent from the below function 'abi'
return 99;  // we're returning the value 99 to the below function 'abi' 
//return "vin";  // we're returning the string 'vin' to the below function 'abi'
};

struct welc *vinee; 

struct welc 
{
int x;
char y[10];
};

//main function starts//

int main()
{
char *c; // to send the string value to the above structure function which needs the character val, so sending using character pointer.
int m=10; // to send the integer value to the above structure function which needs the integer value 'g', so sending using the integer.
c = abi(m,"good"); // the returned val from above will be received in the function 'abi' and stored in the charcter pointer 'c'. but before that the integer and the string 'good' will be sent to the above structure function.
//printf("%d",vinee.x);
//c = abi("abi");
printf("this is c = %d", c); // to receive the return value from the above structure function which sends the integer, so receiving using the character pointer.
printf("this is c = %s", c); // to receive the return value from the above structure function which sends the character, so receiving using the character pointer.
}


