unsigned int reverseBits(unsigned int num) 
{ 
    unsigned int  NO_OF_BITS = sizeof(num) * 4; 
printf("%d\n",NO_OF_BITS);
    unsigned int reverse_num = 0, i, temp; 
  
    for (i = 0; i < NO_OF_BITS; i++) 
    { 
        temp = (num & (1 << i)); 
        if(temp) 
            reverse_num |= (1 << ((NO_OF_BITS - 1) - i)); 
    } 
   
    return reverse_num; 
} 

void bin(unsigned n)
{
    unsigned i;
    for (i = (1 << 15) ; i > 0; i = (i>>1))
        if(n & i)
			printf("1");
		else
			printf("0");
       
}
unsigned int swapNibbles(unsigned int x) 
{ 
    return ( (x & 0x0F)<<4 | (x & 0xF0)>>4 ); 
} 
  
int main() 
{ 
    unsigned int x = 100,z=2,l,i; 
bin(x);
printf("\n");
printf("%x\n", reverseBits(x)); 
printf("%u\n", reverseBits(x)); 
printf("\n");
l=reverseBits(x);
bin(l);
return 0;
}
