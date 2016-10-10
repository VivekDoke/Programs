#include<stdio.h>
#include<stdlib.h>
int main()
{
char s[] = "Opendays2012";
int i = 0;
while(*(s++))
i++;
printf("%d",i);
return 0;
}
