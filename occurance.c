#include<stdio.h>
int main()
{
 int a,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
 long int inter;
 printf("Enter the number - ");
 scanf("%ld",&inter);
 while(inter!=0)
 {
  a=inter%10;
  if (a==0)
   zero++;
  else if (a==1)
   one++;
  else if (a==2)
   two++;
  else if (a==3)
   three++;
  else if (a==4)
   four++;
  else if (a==5)
   five++;
  else if (a==6)
   six++;
  else if (a==7)
   seven++;
  else if (a==8)
   eight++;
  else
   nine++;
  inter=inter/10;
 }
 printf("0: %d\n1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n6: %d\n7: %d\n8: %d\n9: %d\n",zero,one,two,three,four,five,six,seven,eight,nine);

 return 0;
}
