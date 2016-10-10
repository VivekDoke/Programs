#include<stdio.h>
int main()
{
 int a=4294967295;
 printf("%ld\n",sizeof(a));
 unsigned int b=8589934591;
 printf("%d\t%u\n",a,b);
 return 0;
}
