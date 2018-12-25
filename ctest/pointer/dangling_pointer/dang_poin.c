//dangling pointer: a pointer pointing to a memory location has been freed or deleted.

// 1. De-allocation of memory
// Deallocating a memory pointed by ptr causes dangling pointer 
#include <stdlib.h> 
#include <stdio.h> 
int main() 
{ 
    int *ptr = (int *)malloc(sizeof(int)); 
  
    // After below free call, ptr becomes a  
    // dangling pointer 
    free(ptr);  
      
    // No more a dangling pointer 
    ptr = NULL; //since it is assigned null, it is no more a dangling pointer
} 

//************************************************************************//

// 2. Function Call
// The pointer pointing to local variable becomes dangling when local variable is not static. 
#include<stdio.h> 
  
int *fun() 
{ 
    // x is local variable and goes out of scope after an execution of fun() is over. 
    int x = 5; //if this is mentioned as static int, then the pointer will receive the value. 
    //static int x = 5;
    return &x; 
} 
int main() 
{ 
    int *p = fun(); 
    //fflush(stdin);   
    // p points to something which is not valid anymore 
    printf("%d", *p); 
    return 0; 
} 

//***********************************************************************************//

// 3.Variable goes out of scope
void main()
{
   int *ptr;
   .....
   .....
   {
       int ch;
       ptr = &ch;
   } 
   .....   
   // Here ptr is dangling pointer. if you use it out of the scope. 
}

//*******************************************************************************************//

#include<stdio.h>
void main()
{
    int *ptr = (int *)malloc(SIZE);
    //. . . . . .
    //. . . . . .
 
    free(ptr);   //ptr pointer is pointing to a dangling reference. here ptr is dangling pointer.
 
    ptr=NULL; //now ptr is not a dangling pointer.
}

//***************************************************************************************//
// wild pointer
int main() 
{ 
    int *p;  /* wild pointer */
    int x = 10; 
    // p is not a wild pointer now 
    p = &x; 
    return 0; 
}  

