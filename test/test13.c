#include<stdio.h>
void foo(char *);
int main()
{
char *string = "Hello";
foo(string);
printf("%s",string);
return 0;
}
void foo(char *a)
{
while(*a)
{
*a += 1;
a++;
}
}
