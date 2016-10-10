//factorial not a fibonacci
#include<stdio.h>
void factorial(int n);
int main()
{
 int n;
 printf("Enter the number- ");
 scanf("%d",&n);
 factorial(n);
 return 0;
}

void factorial(int n)
{
 int fact=1,i;
 for(i=2;i<=n;i++)
   fact=fact*i;
 printf("Factorial %d is %d\n",n,fact);
}
