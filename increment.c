#include<stdio.h>
int main()
{
	int x=20,y=35;
	x = x++ + y++;
	printf("%d  %d\n",x,y);
	y = ++x + ++y;
	printf("%d %d\n",x,y);
	return 0;
}
