#include<stdio.h>
void word_operation(char *);

int main()
{
 int i,n,j;
 scanf("%d",&n); 
 char name[10];
  for(i=0;i<10;i++)
   scanf("%c",&name[i]);
  word_operation(name);
 return 0;
}

void word_operation(char* string)
{
 int i;
 for(i=0;i<10;i++)
  {
   printf("%c",*(string+i));
   i=i+1; 
  }
 printf(" ");
 for(i=1;i<10;i++)
 {
  printf("%c",*(string+i));
  i=i+1;
 }
// printf("\n");
} 
