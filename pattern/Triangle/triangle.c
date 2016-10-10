#include<stdio.h>
int main()
{
 int i,j,n=9,k;
 for(i=0;i<n;i++)
 {
  int t=i;
  for(j=0;j<n-1;j++)
  {
   printf(" ");
  }
  for(k=0;k<i+1;k++)
  {
    printf("%d",t+1); 
    t++;  
  }
  for(k=t-1;k>t-i-1;k--)
  {
   printf("%d",k);
  }
  printf("\n");
  n--;
 }
 return 0;
}
