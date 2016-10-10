//calculate cube of digits of number if input 24, ans 2*2*2+4*4*4=72
#include<stdio.h>
int main()
{
 int num,sum=0,n,t;
 scanf("%d",&num);
 while(num!=0)
 {
  n=num%10;
  sum=sum+(int)power(n);
  num=num/10; 
 }
 printf("%d\n",sum);
 return 0;
}

int power(int n)
{
 int ex=3,result=1;
 while(ex!=0)
 {
  result *= n;
  ex--;
 } 
 return result;
}
