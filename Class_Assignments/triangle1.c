// 1 2 3 4 5
//  1 2 3
//    1


#include<stdio.h>
int main()
{
 int i,j,k,n=3;
 for(i=1;i<4;i++)
 {
  for(j=0;j<i;j++)
  {
   printf(" ");
  }
  for(k=1;k<(2*n);k++)
  {
   printf("%d",k);
  }
  printf("\n");
  n--; 
 }
 return 0;
}
