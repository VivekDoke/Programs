#include<stdio.h>
int main()
{
 int i,j,k,nol;
 scanf("%d",&nol);
 for(i=0;i<=10;i++)
 {
  for(j=1;j<i;j++)
   printf(" ");
  for(k=1;k<=(2*i-1);k++)
   printf("*");
  printf("\n");
 }
 return 0;
}
