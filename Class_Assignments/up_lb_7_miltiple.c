#include<stdio.h>
int main()
{
 int lb,ub,i;
 printf("Enter the lower bound and upper bound - ");
 scanf("%d%d",&lb,&ub);
 if(lb>ub)
   printf("Entered value of lower bound is greater than upper bound");
 else
  {
   for(i=lb;i<ub;i++)
   {
    if(i%7==0)
      printf("%d\n",i);
   }
  }
 return 0;
}
