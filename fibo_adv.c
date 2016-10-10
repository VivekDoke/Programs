// if n=5 fibonacci number-6

#include<stdio.h>
int calculate_fibo(int);

int main()
{
 int n,res;
 scanf("%d",&n);
 res=calculate_fibo(n-1);
 printf("Fibonacci number at %d is %d\n",n,res);
 return 0;
}

int calculate_fibo(int num)
{
 if (num==0)
   return 0;
 if (num==1)
   return 1;
 else
   return calculate_fibo(num-1)+calculate_fibo(num-2);
}
