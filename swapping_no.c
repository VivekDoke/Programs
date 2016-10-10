#include<stdio.h>
main()
{
 int number1,number2;
 scanf("%d%d",&number1,&number2);
 number2=number1+number2;
 number1=number2-number1;
 number2=number2-number1;
 printf("%d %d",number1,number2);
}
