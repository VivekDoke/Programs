#include<stdio.h>
int main()
{
//int a = 2,b = 5;
//a = a^b;
//b = b^a;
//printf("%d %d",a,b);
int a[][3] = {1, 2, 3, 4, 5, 6};
int (*ptr)[3] = a;
printf("%d %d ", (*ptr)[1], (*ptr)[2]);
++ptr;
printf("%d %d\n", (*ptr)[1], (*ptr)[2]);
return 0;
}
