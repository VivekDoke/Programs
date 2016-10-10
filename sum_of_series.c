// 1+(1+2)+(1+2+3)+(1+2+3+4)+...n

#include<stdio.h>
int main()
{
 int a=1,n,sum=0,j,i;
 printf("Enter number - ");
 scanf("%d",&n);
 for(i=1;i<=(n+1);i++)
 {
  for(j=1;j<i;j++)
   sum=sum+j; 
 }
 printf("Sum - %d\n",sum);
 return 0;
}
