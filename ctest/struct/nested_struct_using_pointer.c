//structure within structure using pointer 

#include<stdio.h>
struct vin2{            //struct vin2 is the nested structure under the main structure struct abi1
	int emp_id;
	char emp_name[10];

};

struct abi1{            //struct abi1 is the main structure which holds/nests the another structure named struct vin2.
	int abi_id;
	char abi_name[10];
	struct vin2 V;  // V is the variable for the nested structure datatype vin2.
}A, *pnt;                     // A is the variable for the main structure datatype abi1. 
//*pnt is the pointer declared.

void main()
{
   struct abi1 A = {26, "naya", 25, "amal"}; //the preference is from the main structure abi1, so the first element will be from abi1 datatype//

// if pointer is declared, we can access the data using the (pointer -> the element name of the main structure), if it is nested structure, then it should be accessed like this (pointer->the variable of the nested structure datatype.the element name present in the nested structure)

	pnt = &A; //pnt is the pointer which holds the address of the variable A 
	printf("abi_id= %d\n", pnt->abi_id); //to print the abi_id of main structure abi1
	printf("abi_name= %s\n", pnt->abi_name); //to print the abi_name of main structure abi1
	printf("emp_id= %d\n", pnt->V.emp_id); //to print the emp_id of nested structure vin2  
	printf("emp_name= %s\n", pnt->V.emp_name); //to print the emp_name of nested structure vin2
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//normal structure with a pointer holding the addres of the structure. this is not structure pointer.

#include<stdio.h>
struct vin2{            
	int emp_id;
	char emp_name[10];
};

int main()
{
struct vin2 V={21, "abii"}; //vin2 is the structure datatype with the variable V 
struct vin2 *pnt; // *pnt is the pointer which will hold the addres of the structure variable V.
pnt=&V;
printf("emp_id= %d\nemp_name= %s\n", pnt->emp_id, pnt->emp_name);
return 0;
}


