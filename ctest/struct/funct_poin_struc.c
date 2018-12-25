//fucntion pointer 
#include<stdio.h>

int add(int a, int b){  //called fuction
//printf("sum= %d\n",a+b);
return a+b;
}
int sub(int a, int b){ //called fuction
//printf("diff= %d\n",a-b);
return a-b;
}

struct ab {
int m;
};

void main(){
int ch, x=5, y=10;

struct ab (*abi[])(int, int) = {add, sub}; //func pointer declaration 

struct ab v;
printf("enter the val < 2:\n");
scanf("%d", &ch);

if (ch < 2) //return 0;
{
//int b = (*abi[ch])(x, y); //calling function
v = (*abi[ch])(x, y);
printf("val = %d\n", v.m);
}
else{
printf("out of limit");
}
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
