#include <stdarg.h>
#include <stdio.h>
int ripple(int n, ...)
{
int i, j, k;
va_list p;
k = 0;
j = 1;
va_start(p, n);
for (; j < n; ++j)
{
i = va_arg(p, int);
k += i;
}
va_end(p);
return k;
}
int main()
{
printf("%d\n", ripple(3, 5, 7));
return 0;
}
