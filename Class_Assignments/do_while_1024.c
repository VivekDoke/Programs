#include<stdio.h>
int main()
{
 int num;
 printf("Enter 1024 to go out of loop\n");
 do
 {
  scanf("%d",&num);
  printf("Entered number is - %d\n",num);
 }while(num!=1024);
 return 0;
}
