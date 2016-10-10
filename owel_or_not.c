#include<stdio.h>
int main()
{
 char ch;
 scanf("%c",&ch);
 switch(ch)
 {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
      printf("Character is Ovwel\n");
      break;
  default:
      printf("Character is not Ovwel\n");
 }
 return 0;
}
