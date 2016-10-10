#include<stdio.h>
int main()
{
/*int a = 2;
if(a == (1,2))
printf("Hello");
if(a == 1,2)
printf("World");*/
int a = 1,2;
int b = (1,2);
if(a == b)
printf("Equal");
else
printf("Not Equal");
return 0;
}
