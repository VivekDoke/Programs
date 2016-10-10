#include<stdio.h>
int main()
{
 int i,j,n;
 char a[10][10];
 scanf("%d",&n);
 for(i=0;i<n-1;i++)
   for(j=0;j<10;j++)
     scanf("%c",&a[i][j]);
   
 for(i=0;i<n;i++)
 {  for(j=0;j<5;j++)
  {   printf("%c",a);
  } printf("\n");
 }
 return 0;
}
