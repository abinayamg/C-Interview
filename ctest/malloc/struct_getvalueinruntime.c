//getting the data in runtime using malloc

#include<stdio.h>
#include<stdlib.h>

struct vin {            
	int emp_id;
	char emp_name[10];
};

int main()
{
 struct vin* V; // can be written like this also 'struct vin *V' 
// V is the pointer variable pointing to the structure datatype.
 V = (struct vin*) malloc (sizeof(struct vin)); // V points to address of the heap memory
 printf("enter the value 1:");
 scanf("%d",&V->emp_id);  
 printf("enter the value 2:");
 scanf("%s", V->emp_name);
 //printf("idprinted= %d\nname= %s\n",V->emp_id, V.emp_name);
 printf("emp_id= %d\nemp_name= %s\n", V->emp_id, V->emp_name);
 return 0;
}

