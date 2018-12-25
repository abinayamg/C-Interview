//function pointer with array(char with array means :string).

//Return array from function in C. C programming does not allow to return an entire array as an argument to a function. However, you can return a pointer to an array by specifying the array's name without an index. so we are using a pointer here//

//c will not allow the address of the local variable to outside the function, so we need to declare it as static variable.

//for sending a single character single quotes' is used and for sending a string double quotes"" is used.
//the called function also should be declared like pointer and to receive the entire array (as argument sent from outside function) also, we need to receive it in pointer variable only. 


#include<stdio.h>

char *point_func(char a[10], char b) //the func is declared here as pointer
{
static char A[10]="abinaya"; //static char is declared here
printf("entered point 1: %s\n", a); 
printf("entered point 2: %c\n", b);
return A; //returning the character array A
}

char norm_func(char a[10], char b) //this is normal function, used for single charater not array
{
char J;
// for loop is not used to print all the char elements of the array (i.e. string) one by one. %s does the job.
printf("entered norm 1: %s\n", a);
printf("entered norm 2: %c\n", b);
return 'J'; //returning the single character J.
}
void main()
{
char x[10] = "hello", y = 'T';

char  h = norm_func(x,y); //receiving the single character J and stores in normal char varible 'h'.
char *g = point_func(x,y); //receiving the entire array 'A' and stores in the char pointer variable 'g' 

// for loop is not used to print all the char elements of the array (i.e. string) one by one. %s does the job here. but for integer, we need for loop.
printf("point: %s\n", g);
printf("normal: %c\n", h);
}
