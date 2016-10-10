#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int main()
{
 
 BOOL arr[5]={12,152,45,11499,21};
 add(arr,5);
 return 0;
}

void add(BOOL *ptr,BOOL length)
{
 BOOL i,j,sum=0;
 for(i=0;i<length;i++)
 {
   if(checkarr(ptr[i]))
    {
     
       printf("%d",ptr[i]);
    }
 }
}
BOOL checkarr(int ino)
{
  BOOL sum=0,digit=0;
  while(ino!=0)
   {
 
      digit=ino%10;
      sum=sum+digit;
      if(sum<10)
       {
 
         printf("%d",sum);
           
       } 
      
   }
}
