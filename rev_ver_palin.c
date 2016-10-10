#include<stdio.h>
int main()
{
 int num,add=0,rev=0,dig,temp;;
 printf("Enter the number - ");
 scanf("%d",&num);
 while(1)
 {
 temp=num;
 rev=0;
 while(temp!=0)
  {
   dig=temp%10;
   rev=rev*10+dig;
   temp=temp/10;
  }
  if(num==rev)
  {
   printf("Pallindrome is %d and no. of additions of %d\n",rev,add);
   break;
  }
  else
  {
   printf("  %d\n",num);
   printf("+ %d\n",rev);
   num=num+rev;
   printf("------\n");
   printf("  %d\n",num);
   printf("------\n");
   add++;
  }
  
 }
 return 0;
}
