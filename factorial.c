#include<stdio.h>
int factorial(int);
int main()
{
 int num,n;
 scanf("%d",&n);
 printf("%d\n",factorial(n));
 return 0;
}

int factorial(int n)
{
 int i=1,fact=1;
 if(n==0)
  return 0;
 else
  while(i!=n+1)
   {
    fact=fact*i;
    i++;
   }
 return fact;
}
