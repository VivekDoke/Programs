#include<stdio.h>
int main()
{
 char *ptr;
 char string[]="How are you ?";
 ptr=string;
 ptr+=6;
 printf("%s",ptr);
 return 0;
}
