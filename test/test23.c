#include<stdio.h>
#include<string.h>
void foo(char *);
int main()
{
char a[100] = {0};
printf("%lu %lu",sizeof(a),strlen(a));
return 0;
}
