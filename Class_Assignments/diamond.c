#include<stdio.h>
int main()
{
 int i,j,k,n=5;
 for(i=0;i<n;i++)
 {
  for(k=n-1;k>0;k--)
   printf(" ");
  for(j=0;j<=(2*i);j++)
   printf("*");
  printf("\n");
  n--;
 }
 n=3;
 int p;
 p=n;
 for(i=1;i<n;i++)
 {

  for(k=0;k<=i+1;k++)
   printf(" ");
  for(j=1;j<(2*(p-1));j++)
   printf("*");
  printf("\n");
   p--;
 }
 return 0;
}
