#include <stdio.h>
#include<stdlib.h>

struct course
{
   int a;
   int b;
  char c[20];
   char suit;
   char face;
};

struct abi
{
int b;
char face[20];
char suit[10];
};

int main()
{
   struct course* ptr;
   struct abi A;
   printf("size of A: %ld\n",sizeof(A)); 
   printf("size of ptr: %ld\n",sizeof(ptr));   
   return 0;
}   


/*

   int i, noOfRecords;
   printf("Enter number of records: ");
   scanf("%d", &noOfRecords);

   // Allocates the memory for noOfRecords structures with pointer ptr pointing to the base address.
   ptr = (struct course*) malloc (noOfRecords * sizeof(struct course));
   printf("ptraft: %d\n",sizeof(ptr)); 

   printf("size 2: %d\n",sizeof(struct course)); 
   
   for(i = 0; i < noOfRecords; ++i)
   {
       printf("Enter name of the subject and marks respectively:\n");
       scanf("%s %d", &(ptr+i)->subject, &(ptr+i)->marks);
   }

   printf("Displaying Information:\n");

   for(i = 0; i < noOfRecords ; ++i)
       printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);

*/
