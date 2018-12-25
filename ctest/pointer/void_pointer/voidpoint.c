//void pointer
//void pointer is open/generic pointer, which can get any datatype when it is returning. we have to typecast to get the desired datatype.if a pointer is declared void, then it is open and can be typecasted to our desired datatype.


int main()
{
void *p;
int a,i=0;
float b;
char c;
/*
printf("enter the c value:");
scanf("%s", &c);
printf("value for c : %s\n", c);
*/


for(i=0;i<2;i++)
{

printf("enter the a value:");
scanf("%d", &a);
printf("enter the b value:");
scanf("%f", &b);
printf("enter the c value:");
//scanf("%s", &c[i]);
scanf("%s", &c);


p=&a;
printf("val of a : %d\n", a);
printf("address of a : %d\n", &a);
printf("val of b : %f\n", b);
printf("val of pointer as aaaaaaaaaaa : %d\n", *((int*)p)); //typecasted to integer datatype

p= &b;
printf("val of pointer for bbbbbbbbbbbbbbbbb : %f\n", *((float*)p)); //typecasted to float datatype

p=&c;
printf("val of c : %s\n", c);
//printf("val of pointer for cccc : %c\n", *((char*)p)); //typecasted to char datatype
printf("val of pointer for cccc : %s\n", *((char*)p));
}

return 0;
}

