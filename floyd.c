#include<stdio.h>
int main()
{
 int i,j,k=1,n=15;
 for(i=0;i<n;i++)
 {
  for(j=0;j<=i;j++)
  {
   printf("%d ",k);
   k++;
  }
  printf("\n");
 }
 return 0;
}
