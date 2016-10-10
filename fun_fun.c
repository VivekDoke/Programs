#include<stdio.h>
void inner_fun();
void outer_fun();

int main()
{
 outer_fun();
 return 0;
}

void outer_fun()
{
 printf("Outer function\n");
 void inner_fun()
 {
  printf("Inner function\n");
 }
 inner_fun();
}
