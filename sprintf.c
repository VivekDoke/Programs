#include <stdio.h>

int main ()
{
  char buffer [50];
  int n, a=3, b=23;
  n=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
  printf ("[%s] is a string %d chars long\n",buffer,n);
  return 0;
}
