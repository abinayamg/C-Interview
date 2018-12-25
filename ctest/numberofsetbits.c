#include <stdio.h>	
#include <math.h>  

/* Function to get no of set bits in binary 
representation of positive integer n */
unsigned int countSetBits(unsigned int n) 
{ 
unsigned int count = 0; 
while (n) 
{ 
	count += n & 1; 
	n >>= 1;
 
} 

return count; 
}
unsigned int countunsetbits(unsigned int n)
{
unsigned int count = 0;
int x;

    
    // x holds one set digit at a time 
    // starting from LSB to MSB of n. 
    for (x = 1; x <= n; x = x<<1)  
        if ((x & n) == 0) 
            count++;      
  
    return count; 

}

unsigned int countbits(unsigned int n) 
{ 
   unsigned int count = 0; 
   while (n) 
   { 
        count++; 
        n >>= 1; 
    } 
    return count; 
} 
/* Program to test function countSetBits */
int main() 
{ 
	int i = 40; 
	printf("set bits == %d\n", countSetBits(i)); 
printf("clear bits == %d\n", countunsetbits(i));
printf("Total bits == %d\n", countbits(i));
	return 0; 
} 

