#include <stdio.h>
void e(int);
int main()
{
int a = 3;
e(a);
putchar('\n');
return 0; }
void e(int n)
{
if (n > 0)
{
e(--n);
printf("%d ", n);
e(--n);
}
}
