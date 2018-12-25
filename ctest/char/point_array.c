
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
/*
// to increment the array pointer without incrementing the address of a.

//Note: this is not possible with character bcos, you cant increment the character in for loop. i.e like increasing 1 2 3.. we cant increase a or b or c.. it is possible only with integer. but we can print as a whole as string.
  
#include<stdio.h>
int main()
{
char a; //here a is character
char *b[5]; //here b is pointer array of character datatype.
//this is also called array of pointers. b[0] is pointer, b[1] is a pointer..

for(int i=0;i<4;i++) // how can we increment a character here? so only once a character can be got in scanf and printed. or else as a whole can get as string and print (for that too no for loop is used). so, for char or char array(string) no for loop can be used to get the values. 
{
b[i]=&a; //address of a is stored in the pointer b[0], then b[1].. but 'a' address is same and wont change. 
printf("enter the val for a: ");
scanf("%c", &a); //only once it will get the value

printf("address of a %d\n",&a); //address of a is same
printf("value of a %c\n",a); //val a is incremented and printed 4 times 
printf("address of a stored in b = %d\n",b[i]); //the &a val is printed here 4 times, but each time the pointer location is incremented, but the val inside that dont change. 
printf("address of BBBBB =%d\n",&b[i]);//this is the pointer address, b[0], b[1]..and its incremented
printf("address of B2222 =%d\n",b+i); //another method of printing address of the pointer array
printf("value of A2222 =%c\n",*(b+i)); //another method of deferencing pointer array
printf("value of AAAAA =%c\n",*b[i]);// the value inside the pointer address is dereferenced, so the value a which is incremented is printed 4 times.
printf("\n");
}
return 0;
}
*/
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

// to increment the address of 'a' without incrementing array pointer
//character array is nothing but string. the string address is stored in char pointer.

#include<stdio.h>
int main()
{
char a[10]; //here a is an array of character datatype
char *b; // here b is character pointer

b=a;//address of 'a' is stored in pointer 'b'. & is not used, since array a itself a pointer and it points to the base address
//printf("size of : %ld", sizeof(b));

printf("enter the val for a: ");
scanf("%s", &a); 
// here since its a string, we use %s and can get the value fully as a whole. so needn't use for loop to get one by one.
printf("\n");

for(int i=0;i<5;i++)
{
printf("address of AAAAA %d\n",&a[i]); //address increments 4 times &a[0], &a[1]..
printf("address of A22222 %d\n",a+i); //another method for getting address increments 4 times &a[0], &a[1]..
printf("value of A1111 %c\n",*(a+i)); //another method for dereferencing value. increments 4 times a[0], a[1]..
printf("value of AAAA %c\n",a[i]); //value increments 4 times a[0], a[1]..
printf("address of a stored in b = %d\n",b); //this shows the base address a[0], alone. since nothing to traverse using for loop.
printf("address of b =%d\n",&b);// this shows the address of 'b' which wont change since no loop.
printf("value of a =%c\n",*b);// shows the value in the base address a[0]. since no loop and no traverse.
printf("\n");
}
return 0;
}




