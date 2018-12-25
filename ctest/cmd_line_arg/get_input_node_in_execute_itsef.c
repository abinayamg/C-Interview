//getting the input node while executing itself (command line arguments)

#include <stdio.h>

void main(int a, char **b)
{
if(a==2)  //normally the a value will be 1, if node is specified, the value will become 2.
{
printf("a value: %d\n", a);
printf("b value: %s\n", b[1]); // what is given in node will be printed here.
}
else
{
printf("node has to be specified");// for checking purpose alone
}
}
