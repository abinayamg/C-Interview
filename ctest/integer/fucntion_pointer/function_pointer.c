#include<stdio.h>
#include<stdlib.h>

int add(int a, int b){
//int c;
//printf("sum= %d\n",a+b);
return a+b;
}

int sub(int a, int b){
//int c;
//printf("diff= %d\n",c=a-b);
return a-b;
}

void main(){

//int ch, x=5, y=10;
int ch, x,y;
printf("enter number 1:");
scanf("%d",&x);
printf("enter number 2:");
scanf("%d",&y);
int (*abi[])(int, int) = {add, sub};
printf("enter the val < 2:\n");
scanf("%d", &ch);
if (ch < 2) //return 0;
{
int b = (*abi[ch])(x, y);
printf("val = %d\n", b);
}
else{
printf("out of limit");
}
//return 0;
}


/*
#include <stdio.h> 
void add(int a, int b) 
{ 
    printf("Addition is %d\n", a+b); 
} 
void subtract(int a, int b) 
{ 
    printf("Subtraction is %d\n", a-b); 
} 
void multiply(int a, int b) 
{ 
    printf("Multiplication is %d\n", a*b); 
} 
  
int main() 
{ 
    // fun_ptr_arr is an array of function pointers 
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply}; 
    unsigned int ch, a = 15, b = 10; 
  
    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
            "for multiply\n"); 
    scanf("%d", &ch); 
  
    if (ch > 2) return 0; 
    //printf("out of limit");
    (*fun_ptr_arr[ch])(a, b); 
  
    return 0; 
} */
