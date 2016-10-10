#include<stdio.h>
int main()
{
int a = 5;
switch(a)
{
default:
a = 4;
printf("in default\n");
case 6:
a--;
printf("in case 6\n");
case 5:
a = a+1;
printf("in case 5\n");
case 1:
a = a-1;
printf("in case 1\n");
printf("%d \n",a);

}
printf("%d \n",a);
return 0;
}
