#include<stdio.h>
int main()
{
 int ub,lb,i;
 printf("Enter the lower and upper bound - ");
 scanf("%d%d",&lb,&ub);
 if(ub<lb)
    printf("Entered value of lower bound is greater than upper bound\n");
 else
  {
   for(i=lb;i<ub;i++)  
   {
    if(i%5==0 || i%7==0)
	printf("%d\n",i);
   }
  }
 return 0;
}
