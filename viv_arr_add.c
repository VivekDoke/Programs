#include<stdio.h>
int main()
{
 int i,sum=0,num;
 int a[]={12,548,362,222,781},b[5],c[5];
 for(i=0;i<=4;i++)
 {
  b[i]=add(a[i]);
  if(b[i]<10)
    printf("%d\t%d\n",a[i],b[i]);
  else{
   c[i]=add(b[i]);
   printf("%d\t%d\t%d\n",a[i],b[i],c[i]);
  }
 }
 return 0;
}

int add(int num)
{
  int sum=0;
  while(num!=0)
  {
   sum=sum+num%10;
   num=num/10;
  }
  return sum;
  sum=0;
}
