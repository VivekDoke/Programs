#include<stdio.h>
int main()
{
 int ub,lb,i;
 printf("Enter the lower bound and Upper bound respectively - ");
 scanf("%d%d",&lb,&ub);
 if(ub<lb)
   printf("Upper bound is less than Lower bound\n");
 else
 {
  for(i=lb;i<=ub;i++)
  {
   if(i%5==0)
     printf("%d\n",i);
  }
 }
 return 0;
}
