#include<stdio.h>
int main()
{
 unsigned int num,dig,rev=0;
 printf("Enter number - ");
 scanf("%d",&num);
 while(num!=0)
 {
  dig=num%10;
  num=num/10;
  rev=rev*10+dig;
 } 
 printf("Reverse number is - %d\n",rev);
 return 0;
}
