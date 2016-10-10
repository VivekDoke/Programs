#include<stdio.h>
void Number_to_String(int);
void Digit_to_String(int);
int main()
{
 unsigned long int num;
 int rev=0,digit;
 printf("%d\n",sizeof(num));
 printf("Enter number to be converted into string - ");
 scanf("%lu",&num);
 while(num!=0)
 {
  digit=num%10;
  num=num/10;
  rev=rev*10+digit;
 }
 Number_to_String(rev);
 printf("\n");
 return 0;
}

void Number_to_String(int num)
{
 int digit;
 while(num!=0)
 {
  digit=num%10;
  Digit_to_String(digit);
  num=num/10;
  printf("%d\t",digit);
 }
}

void Digit_to_String(int digit)
{
 switch(digit)
 {
  case 0:
	printf("Zero ");
  case 1:
	printf("One ");
	break;
  case 2:
	printf("Two ");
	break;
  case 3:
	printf("Three ");
	break; 
  case 4:
	printf("Four ");
	break;
  case 5:
	printf("Five ");
	break;
  case 6:
	printf("Six ");
	break;
  case 7:
	printf("Seven ");
	break;
  case 8:
	printf("Eight ");
	break;
  case 9:
	printf("Nine ");
	break;
 }

}
