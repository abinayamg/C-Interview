// getting values from user in structure pointer using malloc concept 
#include<stdio.h>
#include<stdlib.h>
struct ab    //structure datatype declared as 'struct ab'
{
	int id;
	char name[10]; //name is array variable of character datatype 
};

int main()
{
	struct ab* a; // a is pointer variable of the structure datatype so which means structure pointer
	a = (struct ab*) malloc (sizeof(struct ab)); // memory allocation is done and type casting
        //printf("after: %d\n", a);
//if (a==NULL)
//{
//printf("memory not allocated\n");
//}
//else{ 

        printf("Enter the id and name respectively:\n");
        scanf("%d %s", &a->id, a->name); // getting the values in the pointer variable of structure datatype (structure pointer)

// here the & symbol wont come for representing the string, as the char name[10] is itself an array which is an internal pointer that means it points to the base address of that array(name[10]). so additional & isn't needed.

	printf("Displaying Information:\n");
	printf("%d %s", a->id, a->name);
//}
	return 0;
}

//******************************************************************************************************************//

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
  

