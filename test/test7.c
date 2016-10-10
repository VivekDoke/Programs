#include<stdio.h>
//#define x 4+1
int main()
{
//int i;
//i = x*x*x;
//printf("%d",i);
//char c=125;
//c=c+10;
//printf("%d",c);
/*int i=10;
static int x=i;
if(x==i)
printf("Equal");
else if(x>i)
printf("Greater");
else
printf("Lesser");*/
int i=3,j;
j=sizeof(++i + ++i);
printf("i=%d j=%d\n",i,j);
return 0;
}
