#include<stdio.h>
int function(int);
int main()
{
 int a=10,b,c;
 a+2;
// b=function(a);
 c=printf("Value of b is %d\n",b);
 printf("%d\n",c);
 return 0;
}

function(int a)
{
 printf("Value %d\n",a);
}
