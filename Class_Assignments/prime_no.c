//First n prime numbers 1 3 5 7 11 ...

#include<stdio.h>
int Check_Prime_Numbers(int);
int main()
{
 int n,i,result,count;
 printf("Enter the number upto which you want prime number - ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  result=Check_Prime_Numbers(i);
  if(result==1){
     printf("%d\n",i);
  }
 } 
 return 0;
}

int Check_Prime_Numbers(int n)
{
 int i;
 for(i=2;i<=n;i++)
 {
  if(n%2==0)
    return 0;
  else
   return 1;
 }
 
}
