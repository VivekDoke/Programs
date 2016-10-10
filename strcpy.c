#include<stdio.h>
char* strcpy(char*,const char* );
int main()
{
 char src[20]="Ramanujan",dest[20];
 //printf("Enter the source - ");
 strcpy(dest,src);
 printf("%s\n",dest);
 puts(dest);
 return 0;
}

char *strcpy(char *dest,const char* src)
{
 int i;
 while(src[i]!='\0')
 {
  dest[i]=src[i];
  i++;
 }
 dest[i]='\0';
 return dest;
}
