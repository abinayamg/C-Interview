//copying values from one structure to another. here needn't declare another structure datatype (commented). also cant copy string in strucrtre to structure directly. need strncpy (dest,source,size)  

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct abi{
int b;
char c[10];
};

//struct vin {
//int x; 
//char h[10]; 
//};

void main()
{
struct abi A = {103, "vineeth"};
struct abi V;
V.b = A.b;
strncpy(V.c, A.c, 10); //copying the string values from struct A to struct V, 10 is the size.
printf("res: %d\tpos: %s",V.b,V.c);
}

//comments:  to copy the entire structure V=A

/*
// copying values from one structure to another using forloop for char array variables, one by one and as a whole as string also
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct abi{
int b;
char c[10];
};

void main()
{
struct abi A = {103, "vineeth"};
struct abi V;
V.b = A.b; //copying int values from A to V.
printf("res: %d\n",V.b);
for(int i =0; i<8; i++)
{
V.c[i] = A.c[i];  //copying string values from structure A to structure V 
printf("pos: %c\n",V.c[i]); //one by one is printed bcos it's array V.c[0]='v'. V.c[1]='i'...
}
printf("pos: %s\n",V.c); //full string is printed
}
*/

/*
// to just get the string as a whole from the user and store in normal structure
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct abi { char b[10]; };

void main(void)
{
struct abi A;
printf("enter the value\n");
scanf("%s",&A.b);
printf("out: %s\n", A.b);
}
*/

//comment: scanf in forloop in structure for getting values one by one is not working properly.

