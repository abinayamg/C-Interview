//null pointer. that doesn't point to anything. it's used when a pointer is not assigned a valid address in the memory. it is used for future ref. the uninitilaized/dangling pointer will point to some random address. when this pointer is used in the function, it will crash the prog, since it has a garbage value. so it is better to declare that pointer as null pointer and use it later//

/* 
#include<stdio.h>
int main(){
int *ptr= NULL; // also declared as int *ptr = 0;
//*ptr= NULL;
printf("val=: %d\n",ptr);
//printf("adres=: %d\n",ptr);
return 0;
}
*/

//eg for null ptr variable 
#include<stdio.h>
 
void fact(int *ptrB)
{
    if(ptrB == NULL)
    {
        //Handle NULL pointer input
      printf("first");      
      return;
    }
    else
    {
         printf("sec");
        //function code
    }
}
void main()
{
    int *ptrA = NULL;
    fact(ptrA);
}



