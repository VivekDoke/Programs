#include<stdio.h>
int add(int,int);
int main()
{
 int res1,res2;
 res1=(*add)(2,3);
 int(*ptr)(int,int)=&add; 
 res2=ptr(2,8);
 printf("Result - %d %d\n",res1,res2);
 return 0;
}

int add(int a,int b)
{
 int c;
 c=a+b;
 return c;
}
