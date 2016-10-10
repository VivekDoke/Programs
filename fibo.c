//0 1 1 2 3 5 8 13 21 ..

#include<stdio.h>
void fibo(int n);
int main()
{
 int n;
 printf("Enter the number to which you want to print fibonacci series - ");
 scanf("%d",&n);
 fibo(n);
 return 0;
}

void fibo(int n)
{
 printf("0 ");
 int i,f=0,s=1,t;
 for(i=0;i<n-1;i++)
 {
  t=f+s;
  printf("%d ",t);
  f=s;
  s=t;
 }
 printf("\n");
}
