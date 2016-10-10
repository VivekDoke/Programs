#include<stdio.h>
int main()
{
 int first=1,last,sum=0;
 printf("Enter the number - ");
 scanf("%d",&last);
 while(first<=last)
 {
   printf("%d\n",first);
   sum=sum+first;
   first+=2;
 }
 printf("Sum %d\n",sum);
 return 0;
}
