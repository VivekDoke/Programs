#include<stdio.h>
int factorial(int);
int main()
{
 int n,res;
 printf("Enter number whos factorial is to be calculate - ");
 scanf("%d",&n);
 res=factorial(n);
 printf("Factorial of number %d is %d\n",n,res);
 return 0;
}

int factorial(int num)
{
 int i;
 if(num==1)
   return 1;
 else
   return num*factorial(num-1);
}
