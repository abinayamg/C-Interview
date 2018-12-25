
//datatype is two words in structure. here struct vin1 is datatype. the variable is V for this structure. similarly struct abi2 is datatype and the variable is A.

#include<stdio.h>
struct {            //struct vin2 is the nested structure under the main structure struct abi1
	int emp_id;
	char emp_name[10];

}vin2;

struct abi1{            //struct abi1 is the main structure which holds/nests the another structure named struct vin2.
	int abi_id;
	char abi_name[10];
	struct vin2 V;  // V is the variable for the nested structure datatype vin2.
}A;                     // A is the variable for the main structure datatype abi1.

void main()
{
	struct abi1 A = {26, "naya", 25, "amal"}; //the preference is from the main structure abi1, so the first elements will be from abi1 datatype followed by the nested structure vin2//
	
 	printf("abi_id= %d\n", A.abi_id);
	printf("abi_name= %s\n", A.abi_name);
	printf("emp_id= %d\n", A.V.emp_id);
	printf("emp_name= %s\n", A.V.emp_name);
}





