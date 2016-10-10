#include<stdio.h>
int main()
{
 int n,t=0;
 printf("Enter number - ");
 scanf("%d",&n);
 while(n!=0)
 {
  t=n%10;
  printf("%d\n",t);
  n/=10;
 }
 printf("number of digits : %d\n",t);
 return 0;
}
