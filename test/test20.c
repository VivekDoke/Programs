#include<stdio.h>
int main()
{
int *a = fun();
printf("%d",*a);
return 0;
}
int fun()
{
int a = 10;
return a;
}
