#include<stdio.h>
#include<stdlib.h>
int* fun();
int main()
{
int *a = fun();
printf("%d",*a);
return 0;
}
int* fun()
{
int *a =(int*) malloc(sizeof(int));
*a = 10;
return a;
}
