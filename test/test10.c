#include <stdio.h>
int main()
{
/*struct node
{
int a;
int b;
int c;
};
struct node s = { 3, 5, 6 };
struct node *pt = &s;
printf("%d\n", *((int*)pt+1));
*/
char a[5] = { 1, 2, 3, 4, 5 };
char *ptr = (char*)(&a + 1);
printf("%d\n",*ptr);
printf("%d %d\n", *(a + 1), *(ptr - 1));
return 0;
}
