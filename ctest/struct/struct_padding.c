// structure padding: normally this is an error which occurs in structure. for each datatype, the structure allocates 4 bytes (4 bytes = 1 word). but character takes only one byte, so remaining 3 bytes are free and unused. so to use this free memory, there are 2 methods: 1. #pragma pack(1) and 2. __attribute__((packed)) after the structure datatype declaration. these 2 methods will inform the compiler to pack all the members without leaving free memory.

// if you use 2 character concurrently, then instead of allocating another block of 4 bytes, the second charater will take one byte from the prevoius free memory left by the previuos character block. so this will reduce 4 bytes in the below case.
  
#include<stdio.h>
//#pragma pack (1)
struct one{ 
int a;
char b;
char c;
int d;
float e;
};
//}__attribute__((packed));

struct two{
int a;
char b;
int d;
char c;
float e;
};
//}__attribute__((packed));

int main(){
struct one V;
struct two A;
printf("size of struct one = %ld\n", sizeof(V)); //will print 16 bytes
printf("size of struct two = %ld\n", sizeof(A)); //will print 20 bytes
//if the pragma is used, both size will be 14 bytes.
return 0;
}
