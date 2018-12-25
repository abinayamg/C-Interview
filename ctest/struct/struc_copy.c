//copying values from one structure to another. here needn't declare another structure datatype (commented). also cant copy string in strucrtre to structure directly. need strncpy(dest,source,size)  
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct abi{
int b;
char c[10];
};

//struct vin{
//nt x;
//char h[10];
//};

void main()
{
struct abi A = {103, "vineeth"};
struct abi V;
V.b = A.b;
strncpy(V.c, A.c, 10);
printf("res: %d\tpos: %s",V.b,V.c);
}
