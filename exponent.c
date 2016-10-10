#include<stdio.h>
int main()
{
 int base=2,exp,ans;
 printf("Enter the exponent - ");
 scanf("%d",&exp);
 if (exp==0)
 printf("1\n");
 else{
 ans=base<<(exp-1);
 printf("%d\n",ans);
 }
 return 0;
}
