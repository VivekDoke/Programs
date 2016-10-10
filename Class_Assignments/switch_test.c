#include<stdio.h>
int main()
{
 printf("%d %d %d\n",'a','b','a'||'b');
 switch('a'||'b')
 {
  case 0:
	printf("Hello World\n");
	break;
  case 1: 
  { 
    int i=100;
    printf("Accepted\n");
    break;
  }
  default:
    printf("Bye-Bye\n");
 }
 return 0;
}
