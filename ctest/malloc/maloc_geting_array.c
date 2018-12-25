// getting values from user and storing in array using for loop in pointer to structure concept (structure pointer). 

#include<stdio.h>
#include<stdlib.h>

struct ab
{
	int id;
	char name[30];
};

int main()
{
	int i=0, n=2;
	struct ab* a;
	 a = (struct ab*) malloc (sizeof(struct ab));
for(i=0;i<3;i++)
{	
    	 printf("Enter the id and name respectively:\n");
    	 scanf("%d %s", &(a+i)->id, (a+i)->name);
 	 printf("Displaying Information:\n");
  	 printf("%d\t%s\n", (a+i)->id, (a+i)->name);
}
  	 return 0;
}

//comments: normally we use a->id, but here since array is used, we use a for loop to get the values n times. and for printing we use (a+i)->id
//just added +i to the pointer variable. 
//should not use '&' for char variable in scanf. also check the notations int should correpond to integer in printf anf scanf. warning message will come and output wont come properly.
//for loop shouldn't end with ';'
  
