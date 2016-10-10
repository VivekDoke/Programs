#include<stdio.h>
#include<stdarg.h>
int sum_of_arg(int);
int main()
{
 int result;
 result=sum_of_arg(1,3,5,8,4,2);
 printf("The sum of 6 arguments is %d\n",result);
 result=sum_of_arg(1,2,3);
 printf("The sum of 3 argumets is %d\n",result);
 return 0;
}

int sum_of_arg(int no_of_args)
{
 int arg=0; total=0;
 va_list ptr;
 va_start(ptr,no_of_args);
 arg=va_arg(ptr,int);
 while(i++<no_of_args)
 {
  total+=arg;
  arg=va_arg(ptr,int);
 }
 va_end(ptr);
 return total;
}
