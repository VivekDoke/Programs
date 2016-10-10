#include<stdio.h>
int main()
{
/*char str[] = {'a','b','c','\0'};
str[0] -= 32;
printf("%s",str);*/
printf("%d\n",foo(12));
return 0;
}

int foo(int n)
{
int sum = 0;
while(n > 0)
{
n = n & n-1;
sum++;
}
return sum;
}
