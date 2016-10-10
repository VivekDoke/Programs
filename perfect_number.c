#include<stdio.h>
int main()
{
 unsigned int num=1,temp,count=1,i,n,sum=0;
 scanf("%d",&n);
 while(count<=n)
 { 
  for(i=1;i<num;i++)
  {
   if(num%i==0)
     sum=sum+i;
  }
  if(num==sum)
  {
    printf("%d \n",num);
    count++;
  }
  num++,sum=0;
 }
 return 0;
}
