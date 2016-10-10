#include <stdio.h>
void foo(int[][3]);
int main(void)
{
int a[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
foo(a);
printf("%d\n", a[2][1]);
return 0;
}
void foo(int b[][3])
{
++b;
b[1][1] = 9;
}
