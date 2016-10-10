#include<stdio.h>
int main()
{
 int num=0;
 printf("Enter 1024 to out from while loop\n");
 while(num!=1024)
 {
  scanf("%d",&num);
  printf("You entered - %d\n",num);
 }
 return 0;
}
