/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=30,b,i=15,j,k=0,l=0;
    //char j;
    //for(i=15;i>=0;i--)
    while(i>=0)
    {
       j=(a>>i)& 1;
       printf("%d",j);
       if(j==1)
        {
            k++;
           
        }
        else
        {
            l++;
            
        }
        i--;
    }
    printf("\n");
    i=15;
    j=0;
    k=0;
    l=0;
     while(i>=0)
    {
       j=(a>>i)& 1;
       if(i%2 == 0)
       {
           j=!j;
           printf("%d",j);
           /*if(j==1)
           {
               j=0;
               printf("%d",j);
           }
           else
           {
               j=1;
               printf("%d",j);
           }*/
       }
       else
       {
           printf("%d",j);
       }
       if(j==1)
        {
            k++;
           
        }
        else
        {
            l++;
            
        }
        i--;
    }
    printf("\n");
    k=0;
    l=0;
    i=0;
     while(i<16)
    {
       j=(a>>i)& 1;
       printf("%d",j);
       if(j==1)
        {
            k++;
           
        }
        else
        {
            l++;
            
        }
        i++;
    }
     printf("\ntotal no of one's=%d\n",k);
     printf("total no of zero's=%d\n",l);
    b = (((a<<8)&0xffff) | ((a>>8)&0xffff));
    printf("\n%d",b);

    return 0;
}

