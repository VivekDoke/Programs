#include <stdio.h>
int counter(int i)
{
static int count = 0;
count = count + i;
return count;
}
int main()
{
//int i, j;
//for (i = 0; i <= 5; i++)
//j = counter(i);
//printf("%d\n", j);
const int x=5;
const int *ptrx;
ptrx = &x;
*ptrx = 10;
printf("%d\n", x);

return 0;
}
