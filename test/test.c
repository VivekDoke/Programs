#include<stdio.h>
int main()
{
char *ptr;
//int a[10][20][30] = {0};
//a[5][2][1] = 2;
int a = 5;
//printf("%d %d\n",a++,++a);
int b = ++a * a++;
char string[] = "How are you?";
ptr = string;
ptr += 4;
//printf("%d",*(*(*(a+5)+2)+1));
printf("%d\n",b);
return 0;
}
