// incrementing the pointer
#include <stdio.h>
#include<stdlib.h>

struct course
{
   int marks;
   char subject[10];
};

int main()
{
   
  struct course* ptr; 
  printf("bef: %d\n", sizeof(ptr));
  printf("befstr: %d\n", sizeof(struct course)); 
  int i, n; 
   //ptr = &n;
   printf("Enter number of records: ");
   scanf("%d", &n);

//int a;
//int *p;
//p=&a;  
  
ptr = (struct course*) malloc (n * sizeof(struct course));  //without this segmentation fault   
printf("aft: %d\n", sizeof(ptr));
printf("aftstr: %d\n", sizeof(struct course));
     
for(i=0; i<n; i++){
    printf("Enter name of the subject and marks respectively:\n");     
  scanf("%s %d", &(ptr)->subject, &(ptr)->marks);
*ptr++;
   }
       printf("Displaying Information:\n");
for(i=0; i<n; i++)  
       printf("%s\t%d\n", (ptr)->subject, (ptr)->marks);
*ptr++;

   return 0;
}
